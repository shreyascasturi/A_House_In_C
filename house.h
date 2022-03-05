#include <stdio.h>
#include <time.h>
#define GET_DATE_TIME {time_t result = time(NULL); \
    printf("The date/time is: %s\n", ctime(&result));\
    }

#define GET_ADDRESS() {printf("The address is: %s\n", address);}

char* address;
int volt_usage = 0;

void set_address(char* new_address);

void enter_house();

void leave_house();

void open_front_door();

void close_front_door();

void go_upstairs();

void go_downstairs();

void open_door(char* name_of_room);

void close_door(char* name_of_room);

void print_volt_usage();

