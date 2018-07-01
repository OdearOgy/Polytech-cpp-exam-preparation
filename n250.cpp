#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, k, number_count = 0, positive_count = 0, negative_count = 0;
  float num[1000];

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (num[i] > 0) {
      positive_count++;
    }
    else if (num[i] < 0) {
      negative_count++;
    }
    number_count = positive_count + negative_count;
  }

  std::cout << "The count is " << number_count << std::endl;

  return 0;
}
