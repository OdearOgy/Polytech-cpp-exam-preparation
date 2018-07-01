#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, a, b, product = 1;
  float num[1000];

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
  }

  std::cout << "Enter a number: ";
  std::cin >> a;
  std::cout << "Enter a number greater than previus one: ";
  std::cin >> b;

  for (int j = a - 1; j < b - 1; j++) {
    product *= num[j];
  }

  std::cout << "The value is: " << product << std::endl;

  return 0;
}
