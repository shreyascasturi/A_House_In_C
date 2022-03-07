#ifndef NO_REDEF_NAV_
#define NO_REDEF_NAV_
#include <stdio.h>
#include <stdlib.h>
#include "../house/house.h"

extern char* current_room;

void main_nav_screen();

void open_front_door();

void close_front_door();

void open_door(char* name_of_room);

void close_door(char* name_of_room);

void go_upstairs();

void go_downstairs();
#endif
