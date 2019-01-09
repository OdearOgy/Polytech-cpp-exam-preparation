#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n, a, product = 1;
  float x[1000];

  cout << "enter n: ";
  cin >> n;
  cout << "enter a: ";
  cin >> a;


  for (int i = 2; i < n; i++){

    if (i < a) {
      product *= (n - i + 2);
    }
  }
  cout << "product: " << product << endl;

  return 0;
}
