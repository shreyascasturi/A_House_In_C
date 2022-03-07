#include "house.h"

char* address_;
int volt_usage_;
int num_of_floors_;

void enter_house() {
  printf("You have decided to enter the house with address %s\n\n\n", address_);
  open_front_door();
  close_front_door();
  printf("You are now inside the house.\n\n\n");
}

void leave_house() {
  printf("You have decided to leave %s\n\n\n", address_);
  open_front_door();
  close_front_door();
}

void open_front_door() {
  printf("You have opened the front door.\n\n\n");
}

void close_front_door() {
  printf("You have closed the front door.\n\n\n");
}

void set_address_(char* new_address) {
  address_ = new_address;
}

void print_volt_usage() {
  printf("the volt usage is %d volts. \n\n\n", volt_usage_);
}

void get_address() {
  printf("the address is %s.\n\n\n", address_);
}

void get_date_time() {
  GET_DATE_TIME;
}

void get_num_of_floors_() {
  printf("the number of floors at this house is %d.\n\n\n", num_of_floors_);
}

void set_num_of_floors_(int num_of_floors) {
  num_of_floors_ = num_of_floors;
}
