/**
* synflood API generated from synflood.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


#pragma once


#include "../base/StatsBase.h"

enum class STATISTICS {
  IP_IN_RECEIVES,
  IP_IN_DELIVERS,
  IP_OUT_REQUESTS,
  TCP_ATTEMPT_FAILS,
  TCP_OUT_RSTS,
  DELIVER_RATIO,
  RESPONSE_RATIO,
  ALL_SYNFLOOD_STATS
};

class Synflood;

using namespace polycube::service::model;

class Stats : public StatsBase {
 public:
  Stats(Synflood &parent, const StatsJsonObject &conf);
  virtual ~Stats();

  StatsJsonObject toJsonObject() override;

  /// <summary>
  /// Number of failed TCP connections
  /// </summary>
  std::string getTcpattemptfails() override;

  /// <summary>
  /// Number of TCP segments sent, containing the RST flag
  /// </summary>
  std::string getTcpoutrsts() override;

  /// <summary>
  /// Ratio between the number of IP pkts delivered to application protocols and the total number of received pkts
  /// </summary>
  std::string getDeliverratio() override;

  /// <summary>
  /// Ratio between the number of IP pkts requests to send by application protocols and the total number of received pkts
  /// </summary>
  std::string getResponseratio() override;

  /// <summary>
  /// last update (time from epoch in milliseconds)
  /// </summary>
  uint64_t getLastupdate() override;


 private:
  std::string TcpAttemptFails;
  std::string TcpOutRsts;
  std::string IpInDelivers;
  std::string IpInReceives;
  std::string IpOutRequests;

  void updateAllValues();
  void getValue(STATISTICS statistic_type);
};