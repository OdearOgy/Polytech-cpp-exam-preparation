#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, a, b, number_count = 0;
  float num[1000];

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
  }

  std::cout << "Enter a number: ";
  std::cin >> a;
  std::cout << "Enter a number greater than previus: ";
  std::cin >> b;

  for (int j = a; j < b - 1; j++) {
    number_count++;
  }

  std::cout << "The value is " << number_count << std::endl;

  return 0;
}
