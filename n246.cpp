#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, i;
  float num[1000], product = 1.0;

  std::cout << "Enter length of an array: ";
  std::cin >> n;

  for (i=0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (i % 2 == 1) {
      product *= num[i];
    }
  }

  std::cout << "Product = " << product << std::endl;

  return 0;
}
