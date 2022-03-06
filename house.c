#include "house.h"

char* address;
int volt_usage;

void enter_house() {
  printf("You have decided to enter the house with address %s\n\n\n", address);
  open_front_door();
  close_front_door();
  printf("You are now inside the house.\n\n\n");
}

void leave_house() {
  //extern char* address;
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

void set_address(char* new_address) {
  //extern char* address;
  address = new_address;
}

void print_volt_usage() {
  //extern int volt_usage;
  printf("the volt usage is %d volts. \n\n\n", volt_usage);
}

void get_address() {
  printf("the address is %s.\n\n\n", address);
}

void get_date_time() {
  GET_DATE_TIME;
}
