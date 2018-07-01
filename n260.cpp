#include <iostream>
#include <string>
#include <cmath>


int main() {
  int n, k;
  float num[1000], sum = 0.0;

  std::cout << "Enter the numbers off data: ";
  std::cin >> n;
  std::cout << "Enter a positive number: ";
  std::cin >> k;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    int y = num[i];
    if (y % k == 0) {
      sum += pow(y, 2);
    }
  }

  std::cout << "The value is " << sum << std::endl;

}
