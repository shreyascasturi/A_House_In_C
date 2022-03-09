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
// given a file, get an array of lines with length.
char** read_line(char* file_name, int* line_arr_len) {

  // alloc space, open file
  char** line_arr = malloc(10 * sizeof(char*));
  int arr_len = 0;
  int arr_limit_len = 10;
  char* line;
  FILE* file_ptr;
  file_ptr = fopen(file_name, "r");
  if (file_ptr == NULL) {
    fprintf(stderr, "Cannot open file\n");    
  }

  // initial string alloc, prep for loop
  char each_char;
  line = malloc(10 * sizeof(char)); 
  if (line == NULL) {
    exit(0);
  }
  int line_len = 0;
  int line_limit_len = 10;
 
  
  // loop: add line to line_arr
  while(1) {
    each_char = fgetc(file_ptr);
    
    // resize line when needed
    if (line_limit_len == line_len) {
      line = realloc(line, (line_limit_len*2));
      if (line == NULL) {
        exit(0);
      }
      line_limit_len *= 2;
    }

    // if EOF or NUL, check if resize of line_arr needed
    // if NUL, need to reset len and limit_len vars for new line.
    if (each_char == EOF) {
      if (arr_len == arr_limit_len) {
        line_arr = realloc(line_arr, (arr_limit_len * sizeof(char*) * 2));
        if (line_arr == NULL) {
          exit(0);
        }
        arr_limit_len *= 2;
      }
      line[line_len++] = '\0';
      line_arr[arr_len++] = line;
      break;
    } else if (each_char == '\0') {
      if (arr_len == arr_limit_len) {
        line_arr = realloc(line_arr, (arr_limit_len * sizeof(char*) * 2));
        if (line_arr == NULL) {
          exit(0);
        }
        arr_limit_len *= 2;
      }
      line[line_len++] = '\0';
      line_arr[arr_len++] = line;

      line_len = 0;
      line_limit_len = 10;
      line = malloc(10 * sizeof(char));
      if (line == NULL) {
        exit(0);
      }
    }
    line[line_len++] = each_char;    
  }

  // close file, set len, return array.
  fclose(file_ptr);
  *line_arr_len = arr_len;
  return line_arr;
}
