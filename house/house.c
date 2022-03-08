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
  /* FILE* file_pointer = fopen(file_name, "r"); */
  /* if (!file_pointer) { */
  /*   fprintf(stderr, "Error opening file '%s'\n", file_name); */
  /*   return EXIT_FAILURE; */
  /* } */
  /* char* line_buffer = NULL; */
  /* size_t line_buf_size = 0; */
  /* int line_count = 0; */
  /* ssize_t line_size; */
  /* line_size = getline(&line_buffer, &line_buf_size, file_pointer); */
  /* while (line_size >= 0) { */
  /*   line_count++; */

}

void list_all_rooms(Floor* floor) {
  
}

void get_all_items(Item** items) {
  
}

void list_all_items(Room* room) {
  
}

// a basic re-implementation of line reading
char* read_line(char* file_name) {
  char* line_arr;
  FILE* file_ptr;
  file_ptr = fopen(file_name, "r");
  if (file_ptr == NULL) {
    fprintf(stderr, "Cannot open file\n");    
  }
  char each_char;
  // initial char arr allocation
  line_arr = malloc(10 * sizeof(char)); 
  if (line_arr == NULL) {
    exit(0);
  }
  int line_length = 0;
  int line_limit_len = 10;
  while(1) {
    each_char = fgetc(file_ptr);
    // copy the array via realloc
    if (line_limit_len == line_length) {
      line_arr = realloc(line_arr, (line_limit_len*2));
      line_limit_len *= 2;
    }
    if (each_char == EOF || each_char == '\0') {
      line_arr[line_length++] = '\0';
      break;
    }
    line_arr[line_length++] = each_char;    
  }
  fclose(file_ptr);
  return line_arr;
}
