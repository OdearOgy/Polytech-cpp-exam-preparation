#include <iostream>
#include <string>
#include <cmath>

int main() {
  unsigned long octat1, octat2, octat3, octat4, decimal_value, decimal_num, ip_address;

  std::cout << "\nEnter an IP address in dottet quad notation (x.x.x.x)";
  std::cout << "\nWith each section separated by a space: ";
  std::cin >> octat1 >> octat2 >> octat3 >> octat4;

  octat1 *= 16777216; //(256^3);
  octat2 *= 65536; //(256^2);
  octat3 *= 256;
  decimal_value = octat1 + octat2 + octat3 + octat4;

  std::cout << "\nThe converted address is: " << decimal_value << std::endl;


  std::cout << "\nEnter a decimal: ";
  std::cin >> decimal_num;

  octat1 = decimal_num / pow(256, 3);
  octat2 = decimal_num / 256 / 256 % 256;
  octat3 = decimal_num / 256 % 256;
  octat4 = decimal_num % 256;

  std::cout << octat1 << '.' << octat2 << '.' << octat3 << '.' << octat4 << std::endl;
}
