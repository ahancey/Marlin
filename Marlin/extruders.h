#ifndef EXTRUDERS_H
#define EXTRUDERS_H

#include "Marlin.h"

#if EXTRUDERS > 1
#ifndef DUAL_X_CARRIAGE
  #define NUM_EXTRUDER_OFFSETS 2 // only in XY plane
#else
  #define NUM_EXTRUDER_OFFSETS 3 // supports offsets in XYZ plane
#endif
extern float extruder_offset[NUM_EXTRUDER_OFFSETS][EXTRUDERS];

#endif
#endif
