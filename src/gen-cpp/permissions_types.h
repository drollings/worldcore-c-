/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef permissions_TYPES_H
#define permissions_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>




enum Trust {
  TRUST_PLAYER = 0,
  TRUST_IMMORT = 1,
  TRUST_STAFF = 2,
  TRUST_SRSTAFF = 3,
  TRUST_ADMIN = 4,
  TRUST_CODER = 5,
  TOP = 6,
  TRUST_FREEZE = 4
};

extern const std::map<int, const char*> _Trust_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const Trust val);

enum MemberPermissions {
  CODER_VIEW = 0,
  CREATOR_VIEW = 1,
  STAFF_VIEW = 2,
  WORLD_VIEW = 3,
  SCRIPT_VIEW = 4,
  PLAYER_VIEW = 5,
  CODER_WRITE = 6,
  CREATOR_WRITE = 7,
  STAFF_WRITE = 8,
  WORLD_WRITE = 9,
  SCRIPT_WRITE = 10,
  PLAYER_WRITE = 11,
  CODER_DERIVE = 12,
  CREATOR_DERIVE = 13,
  STAFF_DERIVE = 14,
  WORLD_DERIVE = 15,
  SCRIPT_DERIVE = 16,
  PLAYER_DERIVE = 17,
  NUM_MEMBER_PERMISSIONS = 18
};

extern const std::map<int, const char*> _MemberPermissions_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const MemberPermissions val);

enum StaffCommands {
  STAFF_GENERAL = 0,
  STAFF_ADMIN = 1,
  STAFF_SECURITY = 2,
  STAFF_GAME = 3,
  STAFF_OLC = 4,
  STAFF_CHARS = 5,
  STAFF_CLANS = 6,
  STAFF_MOBILES = 7,
  STAFF_OBJECTS = 8,
  STAFF_ROOMS = 9,
  STAFF_OLCADMIN = 10,
  STAFF_SOCIALS = 11,
  STAFF_HELP = 12,
  STAFF_SHOPS = 13,
  STAFF_SCRIPTS = 14,
  STAFF_FORCE = 15,
  STAFF_CODER = 16,
  STAFF_WIZNET = 17,
  STAFF_INVULN = 18,
  STAFF_ALLOW = 19,
  STAFF_EXTRA = 20,
  STAFF_SKILLED = 21,
  STAFF_IMC = 22,
  NUM_STAFF_COMMANDS = 23
};

extern const std::map<int, const char*> _StaffCommands_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const StaffCommands val);



#endif
