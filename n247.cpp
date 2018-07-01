#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n;
  float num[1000], product = 1.0;

  std::cout << "Enter length of an array: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (i % 2 == 0) {
      product *= pow(num[i], 2);
    }
  }

  std::cout << "Product = " << product << std::endl;

  return 0;
}
