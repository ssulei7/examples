#include "lib/hello-time.h"
#include "main/hello-greet.h"
#include <iostream>
#include <string>
#include <stdio.h>

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  char buffer[10];
  char * ret = gets(buffer); // <- Write outside
  print_localtime();
  return 0;
}
