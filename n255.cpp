#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, i, k, product = 1;
  float num[1000];

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;
  std::cout << "Enter a positive number: ";
  std::cin >> k;

  for (i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (abs(num[i]) < k) {
      product *= num[i];
    }
  }

  std::cout << "The value is " << product << std::endl;
}
