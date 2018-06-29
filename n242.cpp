#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, i, positive_count = 0;
  float num[1000], sum = 0.0, average;

  std::cout << "Enter the number of data: ";
  std::cin >> n;

  for (i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (num[i] > 0) {
      positive_count++;
      sum += pow(num[i], 2);
      average = sum / positive_count;
    }
  }
  std::cout << "Average = " << average << std::endl;

  return 0;
}
