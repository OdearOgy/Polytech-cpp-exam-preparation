#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, i, j, a, b, sum = 0;
  float num[1000];

  std::cout << "Enter the number of data: ";
  std::cin >> n;

  for (i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
  }

  std::cout << "Enter a number: ";
  std::cin >> a;
  std::cout << "Enter a number that is greater than the previus one: ";
  std::cin >> b;

  for (j = a - 1; j < b; j++) {
    sum += num[j];
  }

  std::cout << "The value is " << sum << std::endl;

  return 0;
}
