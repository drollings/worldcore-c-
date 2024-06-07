/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "materials_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace Materials {

int _kTypesValues[] = {
  UNDEFINED,
  WATER,
  VEGETABLE,
  FLESH,
  PAPER,
  CLOTH,
  LEATHER,
  WOOD,
  BONE,
  METAL,
  PLASTIC,
  GLASS,
  GEMSTONE,
  MINERAL,
  CERAMIC,
  TOP
};
const char* _kTypesNames[] = {
  "UNDEFINED",
  "WATER",
  "VEGETABLE",
  "FLESH",
  "PAPER",
  "CLOTH",
  "LEATHER",
  "WOOD",
  "BONE",
  "METAL",
  "PLASTIC",
  "GLASS",
  "GEMSTONE",
  "MINERAL",
  "CERAMIC",
  "TOP"
};
const std::map<int, const char*> _Types_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(16, _kTypesValues, _kTypesNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const Types val) {
  std::map<int, const char*>::const_iterator it = _Types_VALUES_TO_NAMES.find(val);
  if (it != _Types_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

} // namespace
