#include <stdio.h>
#include <stdlib.h>
#include "house.h"
#define DEFAULT_ADDR "Anywhere, United States"

int main(int argc, char *argv[]) {


  //extern void close_front_door();
  if (argc != 0) {
   char* address = argv[0];
   set_address(address);
  } else {
   set_address(DEFAULT_ADDR);
  }
  close_front_door();
  return 0;
}
