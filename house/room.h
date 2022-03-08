#ifndef NO_REDEF_ROOM_
#define NO_REDEF_ROOM_
#include "item.h"
typedef struct room {
  char* room_name_;
  // TODO: add 2-d array for items to use.
  Item* item_collection_[];
} Room;

void list_all_items(Room* room);

#endif
