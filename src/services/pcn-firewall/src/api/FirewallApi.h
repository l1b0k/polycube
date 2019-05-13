/**
* firewall API generated from firewall.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* FirewallApi.h
*
*/

#pragma once

#define POLYCUBE_SERVICE_NAME "firewall"


#include "polycube/services/response.h"
#include "polycube/services/shared_lib_elements.h"

#include "ChainJsonObject.h"
#include "ChainAppendInputJsonObject.h"
#include "ChainAppendOutputJsonObject.h"
#include "ChainApplyRulesOutputJsonObject.h"
#include "ChainDeleteInputJsonObject.h"
#include "ChainInsertInputJsonObject.h"
#include "ChainInsertOutputJsonObject.h"
#include "ChainResetCountersOutputJsonObject.h"
#include "ChainRuleJsonObject.h"
#include "ChainStatsJsonObject.h"
#include "FirewallJsonObject.h"
#include "SessionTableJsonObject.h"
#include <vector>


#ifdef __cplusplus
extern "C" {
#endif

Response create_firewall_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_firewall_chain_append_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_firewall_chain_apply_rules_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response create_firewall_chain_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_firewall_chain_delete_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_firewall_chain_insert_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_firewall_chain_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_firewall_chain_reset_counters_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response create_firewall_chain_rule_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_firewall_chain_rule_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response delete_firewall_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_firewall_chain_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_firewall_chain_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_firewall_chain_rule_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_firewall_chain_rule_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_accept_established_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_default_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_action_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_conntrack_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_description_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_dport_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_dst_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_l4proto_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_sport_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_src_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_rule_tcpflags_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_action_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_bytes_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_conntrack_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_description_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_dport_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_dst_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_l4proto_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_pkts_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_sport_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_src_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_chain_stats_tcpflags_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_conntrack_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_interactive_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_session_table_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_session_table_eta_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_session_table_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_firewall_session_table_state_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response replace_firewall_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_firewall_chain_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_firewall_chain_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_firewall_chain_rule_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_firewall_chain_rule_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_accept_established_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_chain_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_chain_default_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_chain_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_chain_rule_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_chain_rule_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_conntrack_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_interactive_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_firewall_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);

Response firewall_chain_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response firewall_chain_rule_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response firewall_chain_stats_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response firewall_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response firewall_session_table_list_by_id_help(const char *name, const Key *keys, size_t num_keys);


#ifdef __cplusplus
}
#endif

