#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n;
  float num[1000], sum = 0.0;

  std::cout << "Enter length of an array: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (i % 2 == 1) {
      sum += num[i];
    }
  }

  std::cout << "Sum = " << sum  << std::endl;

  return 0;
}
