#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, k, sum = 0;
  float num[1000];

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;
  std::cout << "Enter a positive number: ";
  std::cin >> k;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];

    if (abs(num[i]) < k) {
      sum += pow(num[i], 3);
    }
  }

  std::cout << "The value is " << sum << std::endl;
}
