#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, k, numbers_count = 0;
  float num[1000], sum = 0.0, average;

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;
  std::cout << "Enter a positive number: ";
  std::cin >> k;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (i % k == 1) {
      numbers_count++;
      sum += num[i];
      average = sum / numbers_count;
    }
  }

  std::cout << "The value is " << average << std::endl;

}
