#include <iostream>

int main() {
  int x = 10;
  int y;

  std::cout << "Enter a non-zero integer: ";
  std::cin >> y;

  if (y != 0) {
    int z = x / y;
    std::cout << "Result: " << z << std::endl;
  } else {
    std::cout << "Error: Division by zero is not allowed." << std::endl;
  }
  return 0;
}
