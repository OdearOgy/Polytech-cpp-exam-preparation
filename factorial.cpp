#include <iostream>
#include <string>
#include <cmath>

int main() {
  int i, n, factorial = 1;

  std::cout << "Enter a positive integer: ";
  std::cin >> n;

  for (i = 1; i <= n; ++i) {
    factorial *= i;
  }

  std::cout << "Factorial of " << n << " = " << factorial << std::endl;
}
