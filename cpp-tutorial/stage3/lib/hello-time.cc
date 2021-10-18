#include "lib/hello-time.h"
#include <ctime>
#include <iostream>
#include <string_view>

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
  
  std::string s = "Hellooooooooooooooo ";
  std::string_view sv = s + "World\n";
  std::cout << sv;
}
