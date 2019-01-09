#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n, a, count = 0, average;
  float x[1000];

  cout << "enter n: ";
  cin >> n;



  for (int i = 0; i < n - 1; i++) {
    if (i > 0) {
      count++;
      int gm = (x[i + 1]a) / count;
      average = pow(gm, 2);
    }
  }
cout << "product : " << average << endl;
  return 0;
}
