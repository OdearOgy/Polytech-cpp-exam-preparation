#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, k, number_count = 0;
  float num[1000];

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;
  std::cout << "Enter thenumber of your preference: ";
  std::cin >> k;

  for (int i = 0; i < n; i++) {
    if (i % k == 0) {
      number_count++;
    }
  }
  std::cout << "There are " << number_count << " numbers" << std::endl;

  return 0;
}
