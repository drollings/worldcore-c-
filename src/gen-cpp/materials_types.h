/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef materials_TYPES_H
#define materials_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>


namespace Materials {

enum Types {
  UNDEFINED = 0,
  WATER = 1,
  VEGETABLE = 2,
  FLESH = 3,
  PAPER = 4,
  CLOTH = 5,
  LEATHER = 6,
  WOOD = 7,
  BONE = 8,
  METAL = 9,
  PLASTIC = 10,
  GLASS = 11,
  GEMSTONE = 12,
  MINERAL = 13,
  CERAMIC = 14,
  TOP = 15
};

extern const std::map<int, const char*> _Types_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const Types val);

} // namespace

#endif
