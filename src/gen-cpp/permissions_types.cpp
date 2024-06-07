/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "permissions_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>



int _kTrustValues[] = {
  TRUST_PLAYER,
  TRUST_IMMORT,
  TRUST_STAFF,
  TRUST_SRSTAFF,
  TRUST_ADMIN,
  TRUST_CODER,
  TOP,
  TRUST_FREEZE
};
const char* _kTrustNames[] = {
  "TRUST_PLAYER",
  "TRUST_IMMORT",
  "TRUST_STAFF",
  "TRUST_SRSTAFF",
  "TRUST_ADMIN",
  "TRUST_CODER",
  "TOP",
  "TRUST_FREEZE"
};
const std::map<int, const char*> _Trust_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kTrustValues, _kTrustNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const Trust val) {
  std::map<int, const char*>::const_iterator it = _Trust_VALUES_TO_NAMES.find(val);
  if (it != _Trust_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kMemberPermissionsValues[] = {
  CODER_VIEW,
  CREATOR_VIEW,
  STAFF_VIEW,
  WORLD_VIEW,
  SCRIPT_VIEW,
  PLAYER_VIEW,
  CODER_WRITE,
  CREATOR_WRITE,
  STAFF_WRITE,
  WORLD_WRITE,
  SCRIPT_WRITE,
  PLAYER_WRITE,
  CODER_DERIVE,
  CREATOR_DERIVE,
  STAFF_DERIVE,
  WORLD_DERIVE,
  SCRIPT_DERIVE,
  PLAYER_DERIVE,
  NUM_MEMBER_PERMISSIONS
};
const char* _kMemberPermissionsNames[] = {
  "CODER_VIEW",
  "CREATOR_VIEW",
  "STAFF_VIEW",
  "WORLD_VIEW",
  "SCRIPT_VIEW",
  "PLAYER_VIEW",
  "CODER_WRITE",
  "CREATOR_WRITE",
  "STAFF_WRITE",
  "WORLD_WRITE",
  "SCRIPT_WRITE",
  "PLAYER_WRITE",
  "CODER_DERIVE",
  "CREATOR_DERIVE",
  "STAFF_DERIVE",
  "WORLD_DERIVE",
  "SCRIPT_DERIVE",
  "PLAYER_DERIVE",
  "NUM_MEMBER_PERMISSIONS"
};
const std::map<int, const char*> _MemberPermissions_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(19, _kMemberPermissionsValues, _kMemberPermissionsNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const MemberPermissions val) {
  std::map<int, const char*>::const_iterator it = _MemberPermissions_VALUES_TO_NAMES.find(val);
  if (it != _MemberPermissions_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kStaffCommandsValues[] = {
  STAFF_GENERAL,
  STAFF_ADMIN,
  STAFF_SECURITY,
  STAFF_GAME,
  STAFF_OLC,
  STAFF_CHARS,
  STAFF_CLANS,
  STAFF_MOBILES,
  STAFF_OBJECTS,
  STAFF_ROOMS,
  STAFF_OLCADMIN,
  STAFF_SOCIALS,
  STAFF_HELP,
  STAFF_SHOPS,
  STAFF_SCRIPTS,
  STAFF_FORCE,
  STAFF_CODER,
  STAFF_WIZNET,
  STAFF_INVULN,
  STAFF_ALLOW,
  STAFF_EXTRA,
  STAFF_SKILLED,
  STAFF_IMC,
  NUM_STAFF_COMMANDS
};
const char* _kStaffCommandsNames[] = {
  "STAFF_GENERAL",
  "STAFF_ADMIN",
  "STAFF_SECURITY",
  "STAFF_GAME",
  "STAFF_OLC",
  "STAFF_CHARS",
  "STAFF_CLANS",
  "STAFF_MOBILES",
  "STAFF_OBJECTS",
  "STAFF_ROOMS",
  "STAFF_OLCADMIN",
  "STAFF_SOCIALS",
  "STAFF_HELP",
  "STAFF_SHOPS",
  "STAFF_SCRIPTS",
  "STAFF_FORCE",
  "STAFF_CODER",
  "STAFF_WIZNET",
  "STAFF_INVULN",
  "STAFF_ALLOW",
  "STAFF_EXTRA",
  "STAFF_SKILLED",
  "STAFF_IMC",
  "NUM_STAFF_COMMANDS"
};
const std::map<int, const char*> _StaffCommands_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(24, _kStaffCommandsValues, _kStaffCommandsNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const StaffCommands val) {
  std::map<int, const char*>::const_iterator it = _StaffCommands_VALUES_TO_NAMES.find(val);
  if (it != _StaffCommands_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

