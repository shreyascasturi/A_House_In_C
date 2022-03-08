#ifndef NO_REDEF_HOUSE_
#define NO_REDEF_HOUSE_
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "floor.h"

#define GET_DATE_TIME {time_t result = time(NULL); \
    printf("The date/time is: %s\n", ctime(&result));\
   }

typedef struct house {
  char* address_;
  int num_of_floors_;
  int volt_usage_;
  Floor* floor_collection_[];
  
} House;

void set_address(char* new_address);

void enter_house(House* house);

void leave_house(House* house);

void open_front_door(); 

void close_front_door(); 

void get_volt_usage(House* house);

void get_address(House* house);

void get_date_time();

void get_num_of_floors_(House* house);

void set_num_of_floors_(House* house, int num_of_floors);

House* build_house(char* file_name);

#endif
