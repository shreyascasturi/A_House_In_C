#ifndef NO_REDEF_HOUSE_
#define NO_REDEF_HOUSE_
#include <stdio.h>
#include <time.h>
#include "floor.h"

#define GET_DATE_TIME {time_t result = time(NULL); \
    printf("The date/time is: %s\n", ctime(&result));\
   }

typedef struct house {
  char* address_;
  int num_of_floors_;
  Floor* floor_collection_[];
  
} House;

void set_address(char* new_address);

void enter_house();

void leave_house();

void open_front_door(); 

void close_front_door(); 

void print_volt_usage();

void get_address();

void get_date_time();

void get_num_of_floors_();

void set_num_of_floors_(int num_of_floors);

#endif
