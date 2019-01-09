#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n, count = 0;
  float x[1000];

cout << "enter n: ";
cin >> n;



  for (int i = 0; i < n; i += 2) {
    count += (n - i - 1);
  }

  cout << "count: " << count << endl;

  return 0;
}
