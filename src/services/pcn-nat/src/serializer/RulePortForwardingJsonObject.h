/**
* nat API
* NAT Service
*
* OpenAPI spec version: 1.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* RulePortForwardingJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "RulePortForwardingEntryJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  RulePortForwardingJsonObject : public JsonObjectBase {
public:
  RulePortForwardingJsonObject();
  RulePortForwardingJsonObject(nlohmann::json& json);
  ~RulePortForwardingJsonObject() final = default;

  /////////////////////////////////////////////
  /// JsonObjectBase overrides

  nlohmann::json toJson() const final;

  static nlohmann::json helpKeys();
  static nlohmann::json helpElements();
  static nlohmann::json helpWritableLeafs();
  static nlohmann::json helpComplexElements();
  static std::vector<std::string> helpActions();
  /////////////////////////////////////////////
  /// RulePortForwardingJsonObject members

  /// <summary>
  /// List of port forwarding rules
  /// </summary>
  const std::vector<RulePortForwardingEntryJsonObject>& getEntry() const;
  void addRulePortForwardingEntry(RulePortForwardingEntryJsonObject value);
  bool entryIsSet() const;
  void unsetEntry();


private:
  std::vector<RulePortForwardingEntryJsonObject> m_entry;
  bool m_entryIsSet;
};

}
}
}
}

