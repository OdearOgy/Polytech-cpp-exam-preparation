#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, i;
  float num[1000], sum = 0.0;

  std::cout << "Enter length of an array: ";
  std::cin >> n;

  for (i=0; i < n; i++) {
    std::cout << "sum =" << sum << std::endl;
    std::cout << "i = " << i << std::endl;
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (i % 2 == 0) {
      sum += abs(num[i]);
    }
  }
  std::cout << "Sum = " << sum << std::endl;

  return 0;
}
