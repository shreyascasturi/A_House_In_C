#include "navigation.h"

char* current_room;

void main_nav_screen() {
  printf("Here are the available options for your room, the %s\n", current_room);
}

void go_upstairs() {
  printf("You go upstairs.\n\n\n");
}

void go_downstairs() {
  printf("You go downstairs.\n\n\n");
}

void open_door(char* name_of_room) {
  printf("You have opened the door into %s\n\n\n", name_of_room);
}

void close_door(char* name_of_room) {
  printf("You have closed the door of this room %s\n\n\n", name_of_room);
}
