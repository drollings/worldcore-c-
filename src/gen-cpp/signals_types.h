/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef signals_TYPES_H
#define signals_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>


namespace Signals {

enum Signals {
  GLOBAL = 0,
  RANDOM = 1,
  COMMAND = 2,
  SPEECH = 3,
  GREET = 4,
  LEAVE = 5,
  DOOR = 6,
  DROP = 7,
  GET = 8,
  ACT = 9,
  DEATH = 10,
  FIGHT = 11,
  HITPRCNT = 12,
  SIT = 13,
  GIVE = 14,
  WEAR = 15,
  CONSUME = 16,
  REMOVE = 17,
  LOAD = 18,
  TIMER = 19,
  START = 20,
  QUIT = 21,
  ATTACK = 22,
  INSTALL = 23,
  CALL = 24,
  ENTER = 25,
  DESTROYREPAIR = 26,
  ATTACKED = 27,
  KILL = 28,
  PUT = 29,
  MOTION = 30,
  RESET = 31,
  TOP = 32
};

extern const std::map<int, const char*> _Signals_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const Signals val);

} // namespace

#endif
