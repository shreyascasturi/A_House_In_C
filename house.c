#include "house.h"
                                
void enter_house() {
  printf("You have decided to enter the house with address %s\n\n\n", address);
  open_front_door();
  close_front_door();
  printf("You are now inside the house.\n\n\n");
}

void leave_house() {
  printf("You have decided to leave %s\n\n\n", address);
  open_front_door();
  close_front_door();
}

void open_front_door() {
  printf("You have opened the front door.\n\n\n");
}

void close_front_door() {
  printf("You have closed the front door.\n\n\n");
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

void set_address(char* new_address) { 
  address = new_address;
}

void print_volt_usage() {
  printf("the volt usage is %d volts. \n\n\n", volt_usage);
}
