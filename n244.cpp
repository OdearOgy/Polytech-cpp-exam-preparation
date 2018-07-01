#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, negative_count = 0;
  float num[1000], sum = 0.0, average;

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: ";
    std::cin >> num[i];
    if (num[i] < 0) {
      negative_count++;
      sum += pow(num[i], 2);
      average = sum / negative_count;
    }
  }

  std::cout << "Average = " << average << std::endl;

  return 0;
}
