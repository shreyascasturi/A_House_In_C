#include "house.h"


void enter_house(House* house) {
  printf("You have decided to enter the house with address %s\n\n\n", house->address_);
  open_front_door();
  close_front_door();
  printf("You are now inside the house.\n\n\n");
}

void leave_house(House* house) {
  printf("You have decided to leave %s\n\n\n", house->address_);
  open_front_door();
  close_front_door();
}

void open_front_door() {
  printf("You have opened the front door.\n\n\n");
}

void close_front_door() {
  printf("You have closed the front door.\n\n\n");
}

void set_address_(House* house, char* new_address) {
  house->address_ = new_address;
}

void get_volt_usage(House* house) {
  printf("the volt usage is %d volts. \n\n\n", house->volt_usage_);
}

void get_address(House* house) {
  printf("the address is %s.\n\n\n", house->address_);
}

void get_date_time() {
  GET_DATE_TIME;
}

void get_num_of_floors_(House* house) {
  printf("the number of floors at this house is %d.\n\n\n", house->num_of_floors_);
}

void set_num_of_floors_(House* house, int num_of_floors) {
  house->num_of_floors_ = num_of_floors;
}

// taken from RIP Tutorial: "get lines from a file using getline()
House* build_house(char* file_name) {
  FILE* file_pointer = fopen(file_name, "r");
  
  char* line_buffer = NULL;
  
}

void list_all_rooms(Floor* floor) {
  
}

void get_all_items(Item** items) {
  
}
void list_all_items(Room* room) {
  
}


