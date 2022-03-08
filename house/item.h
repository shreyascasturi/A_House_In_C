#ifndef NO_REDEF_ITEM_
#define NO_REDEF_ITEM_
#include <stdio.h>
typedef struct item {
  char* item_name_;
} Item;

void get_all_items(Item** items);
#endif
