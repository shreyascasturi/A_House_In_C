#ifndef NO_FLOOR_DOUBLE_INCLUDE
#define NO_FLOOR_DOUBLE_INCLUDE
#include "room.h"

typedef struct floor {
  int num_of_rooms_;
  char* name_of_floor;
  Room* room_collection_[];
} Floor;
#endif
