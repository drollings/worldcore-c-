/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "things_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace Things {

int _kOffsetsValues[] = {
  NAME,
  PROTO,
  INSIDE,
  PROXIMITY,
  GENUS,
  MASS,
  TEMPERATURE,
  QUANTITY,
  KEY,
  OPENSKILL,
  OPENDIFFICULTY,
  TO_THING,
  FROM_THING,
  METERSWIDE,
  THETA,
  MODHUNGER,
  MODTHIRST,
  MODDRUNK,
  SEVERITY,
  DURATION,
  HOURS,
  ALIGHT,
  USEHOW,
  TOOLSKILL,
  CHARGES,
  STRENGTH,
  HEALTH,
  AGILITY,
  POSITION,
  MOVEMENT,
  VISION,
  HEARING,
  SCENT,
  INTELLECT,
  WILLPOWER,
  AWARENESS,
  FOCUS,
  COURAGE,
  DISPOSITION,
  MOOD,
  ERRATIC,
  STATE,
  HUNGER,
  THIRST,
  DRUNK,
  CONC_INTERVAL,
  COST_HIT,
  COST_MANA,
  COST_MOVEMENT,
  DECAYTIME,
  CONTAINERFLAGS,
  MAXWEIGHT,
  PICK_MODIFIER,
  SCABBARDOF,
  CORPSEOF,
  MOUNTABLEFLAGS,
  MAXCARRY,
  ARMORCHART,
  SHIELDBONUS,
  PROFICIENCY,
  TOHIT,
  DAMBONUS,
  DAMTYPE,
  AMMO,
  MAXAMMO,
  SHOOTRANGE,
  SHOOTSPEED,
  WEAPONSKILL,
  SWINGMESSAGE,
  THRUSTMESSAGE,
  SWINGTOHIT,
  SWINGBONUS,
  SWINGDAMTYPE,
  SWINGSPEED,
  THRUSTTOHIT,
  THRUSTBONUS,
  THRUSTDAMTYPE,
  THRUSTSPEED,
  PARRYSPEED,
  PARRYBONUS,
  HITRANGE,
  TOP
};
const char* _kOffsetsNames[] = {
  "NAME",
  "PROTO",
  "INSIDE",
  "PROXIMITY",
  "GENUS",
  "MASS",
  "TEMPERATURE",
  "QUANTITY",
  "KEY",
  "OPENSKILL",
  "OPENDIFFICULTY",
  "TO_THING",
  "FROM_THING",
  "METERSWIDE",
  "THETA",
  "MODHUNGER",
  "MODTHIRST",
  "MODDRUNK",
  "SEVERITY",
  "DURATION",
  "HOURS",
  "ALIGHT",
  "USEHOW",
  "TOOLSKILL",
  "CHARGES",
  "STRENGTH",
  "HEALTH",
  "AGILITY",
  "POSITION",
  "MOVEMENT",
  "VISION",
  "HEARING",
  "SCENT",
  "INTELLECT",
  "WILLPOWER",
  "AWARENESS",
  "FOCUS",
  "COURAGE",
  "DISPOSITION",
  "MOOD",
  "ERRATIC",
  "STATE",
  "HUNGER",
  "THIRST",
  "DRUNK",
  "CONC_INTERVAL",
  "COST_HIT",
  "COST_MANA",
  "COST_MOVEMENT",
  "DECAYTIME",
  "CONTAINERFLAGS",
  "MAXWEIGHT",
  "PICK_MODIFIER",
  "SCABBARDOF",
  "CORPSEOF",
  "MOUNTABLEFLAGS",
  "MAXCARRY",
  "ARMORCHART",
  "SHIELDBONUS",
  "PROFICIENCY",
  "TOHIT",
  "DAMBONUS",
  "DAMTYPE",
  "AMMO",
  "MAXAMMO",
  "SHOOTRANGE",
  "SHOOTSPEED",
  "WEAPONSKILL",
  "SWINGMESSAGE",
  "THRUSTMESSAGE",
  "SWINGTOHIT",
  "SWINGBONUS",
  "SWINGDAMTYPE",
  "SWINGSPEED",
  "THRUSTTOHIT",
  "THRUSTBONUS",
  "THRUSTDAMTYPE",
  "THRUSTSPEED",
  "PARRYSPEED",
  "PARRYBONUS",
  "HITRANGE",
  "TOP"
};
const std::map<int, const char*> _Offsets_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(82, _kOffsetsValues, _kOffsetsNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const Offsets val) {
  std::map<int, const char*>::const_iterator it = _Offsets_VALUES_TO_NAMES.find(val);
  if (it != _Offsets_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kPositionValues[] = {
  Limp,
  Prone,
  Upright,
  Sitting,
  Kneeling,
  Crouching,
  Crawling,
  Standing,
  Floating,
  NUM_POSITIONS
};
const char* _kPositionNames[] = {
  "Limp",
  "Prone",
  "Upright",
  "Sitting",
  "Kneeling",
  "Crouching",
  "Crawling",
  "Standing",
  "Floating",
  "NUM_POSITIONS"
};
const std::map<int, const char*> _Position_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(10, _kPositionValues, _kPositionNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const Position val) {
  std::map<int, const char*>::const_iterator it = _Position_VALUES_TO_NAMES.find(val);
  if (it != _Position_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kStateValues[] = {
  Dead,
  Dying,
  MortallyWounded,
  Incapacitated,
  Asleep,
  Stunned,
  Immobile,
  Resting,
  Fighting,
  Riding,
  Audible,
  Okay,
  NUM_STATES
};
const char* _kStateNames[] = {
  "Dead",
  "Dying",
  "MortallyWounded",
  "Incapacitated",
  "Asleep",
  "Stunned",
  "Immobile",
  "Resting",
  "Fighting",
  "Riding",
  "Audible",
  "Okay",
  "NUM_STATES"
};
const std::map<int, const char*> _State_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(13, _kStateValues, _kStateNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const State val) {
  std::map<int, const char*>::const_iterator it = _State_VALUES_TO_NAMES.find(val);
  if (it != _State_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kThingFlagValues[] = {
  DELETED,
  APPROVED,
  NPC,
  MALE,
  FEMALE,
  PLURAL,
  HIDDEN,
  FROZEN,
  OPENABLE,
  OPEN,
  SEETHRU,
  INVSTART,
  NUM_THINGFLAGS
};
const char* _kThingFlagNames[] = {
  "DELETED",
  "APPROVED",
  "NPC",
  "MALE",
  "FEMALE",
  "PLURAL",
  "HIDDEN",
  "FROZEN",
  "OPENABLE",
  "OPEN",
  "SEETHRU",
  "INVSTART",
  "NUM_THINGFLAGS"
};
const std::map<int, const char*> _ThingFlag_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(13, _kThingFlagValues, _kThingFlagNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ThingFlag val) {
  std::map<int, const char*>::const_iterator it = _ThingFlag_VALUES_TO_NAMES.find(val);
  if (it != _ThingFlag_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

} // namespace
