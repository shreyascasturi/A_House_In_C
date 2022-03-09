#include <stdio.h>
#include <stdlib.h>

char** read_line(char* file_name, int* line_arr_len);

void main() {
  char* filename = "test.txt";
  int llen = 0;
  int* line_arr_len = &llen;
  char** arr = read_line(filename, line_arr_len);
  printf("this is the length of the array: %d\n", *line_arr_len);
  for (int i = 0; i < *line_arr_len - 1; i++) {
    char* line = *(arr + i);
    printf("this is the %d-th line: %s\n", i, line);
  }
}

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
    } else if (each_char == '\n') {
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


