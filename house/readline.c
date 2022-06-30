#include "readline.h"

// Given file and length pointer:
// read each line of file, 
// return array of lines and length of array
char** read_line(char* file_name, int* line_arr_len) {

  // alloc space for array, open file
  char** array_of_lines = malloc(10 * sizeof(char*));
  int array_len = 0;
  int array_limit_len = 10;
  char* each_line;
  FILE* file_ptr;
  file_ptr = fopen(file_name, "r");
  if (file_ptr == NULL) {
    fprintf(stderr, "Cannot open file\n");    
  }

  // initial string alloc, prep for loop
  char each_char;
  each_line = malloc(10 * sizeof(char)); 
  if (each_line == NULL) {
    exit(0);
  }
  int each_line_len = 0;
  int each_line_limit_len = 10;
 
  
  // loop: add line to line_arr, one char at time
  while(1) {

    // get char
    each_char = fgetc(file_ptr);
    
    // resize line when line is filled up
    if (each_line_len == each_line_limit_len) {
      each_line = realloc(each_line, (each_line_limit_len*2));
      if (each_line == NULL) {
        exit(0);
      }
      each_line_limit_len *= 2;
    }

    // check if EOF or newline -- if EOF break.
    // resize each_line to be exact length.
    // increment array_len and add line to array
    if (each_char == EOF) {
      break;
    } else if (each_char == '\n') {
      array_of_lines = check_array_len(array_of_lines, &array_len, &array_limit_len);
      each_line[each_line_len++] = '\0';
      each_line = realloc(each_line, each_line_len);
      array_of_lines[array_len++] = each_line;

      each_line_len = 0;
      each_line_limit_len = 10;
      each_line = malloc(10 * sizeof(char));
      if (each_line == NULL) {
        exit(0);
      }
    } else {
      each_line[each_line_len++] = each_char;    
    }

  }

  // close file, set len, realloc exactly, return array.
  fclose(file_ptr);
  *line_arr_len = array_len;
  array_of_lines = realloc(array_of_lines, (sizeof(char*) * array_len));
  return array_of_lines;
}

// check if array of lines has to be resized
// if so, resize and return the new array
// check must be done regardless if resizing is needed
char** check_array_len(char** array_of_lines, int* array_len, int* array_limit_len) {
  if (*array_len == *array_limit_len) {
    array_of_lines = realloc(array_of_lines, (*array_limit_len * sizeof(char*) * 2));
    if (array_of_lines == NULL) {
      exit(0);
    }
    *array_limit_len *= 2;
    return array_of_lines;
  } else {
    return array_of_lines;
  }
}