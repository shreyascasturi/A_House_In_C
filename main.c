#include <stdio.h>
#include <stdlib.h>

#include "house.h"

#define DEFAULT_ADDR "Anywhere, United States"

int main(int argc, char *argv[]) {

  int continue_travel = 1;
  if (argc != 0) {
   char* address_arg = argv[0];
   set_address(address_arg);
  } else {
   set_address(DEFAULT_ADDR);
  }
  printf("finished with basic program\n\n\n");
  while(continue_travel) {
    main_nav_screen();
    continue_travel -= 0;
  }
  return 0;
}
