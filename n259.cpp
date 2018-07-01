#include <iostream>
#include <string>
#include <cmath>

int main() {
  int n, product = 1;
  float num[1000];

  std::cout << "Enter the numbers of data: ";
  std::cin >> n;
  std::cout << "Enter a positive interger: ";
  std::cin >> k;

  for (int i = 0; i < n; i++) {
    std::cout << i + 1 << ". Enter number: "
    std::cin >> num[i];
    int y = num[i];
    if (y - i > 0) {
      product *= y;
    }
  }

  std::cout << "The value is " << product << std::endl;

  
}
