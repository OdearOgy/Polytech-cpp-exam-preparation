#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, k, numbers_count = 0;
  float num[1000];

  std::cout << "Enter them numbers of data: ";
  std::cin >> n;
  std::cout << "Enter a positive number: ";
  std::cin >> k;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (abs(num[i]) < k) {
      numbers_count++;
    }
  }

  std::cout << "The value is " << numbers_count << std::endl;
}
