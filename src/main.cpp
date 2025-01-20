#include <iostream>

bool accept() {
  std::cout << "Do you want to proceed (y or n) ?\n";

  char answer = 0;
  std::cin >> answer;

  switch (answer) {
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      std::cout << "I'll take that as a no.\n";
      return false;
  }
}

int main() {
  bool answer = 0;

  do {
    answer = accept();
  } while (answer);

  return 0;
}