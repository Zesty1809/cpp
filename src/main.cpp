#include <iostream>
#include <limits>

int main() {
  std::cout << "largest float == " << std::numeric_limits<float>::max()
            << ", char is signed == " << std::numeric_limits<char>::is_signed
            << '\n';
}