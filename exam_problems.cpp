#include <iostream>
#include <string>
#include <cmath>


int main() {
  int n;
  float sum = 0.0;

  std::cout << "Enter length of an array: ";
  std::cin >> n;

  for (int i = 2; i < n; i += 2) {
    sum += (n - i);
  }
  std::cout << "sum is equal to: " << sum << std::endl;
}
