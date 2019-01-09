#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n, k, count = 0;
  float x[1000];

  cout << "enter n: ";
  cin >> n;
  cout << "enter k: ";
  cin >> k;

  for (int i = 0; i < n; i++) {
    cout << "enter x[i]: ";
    cin >> x[i];
    int y = x[i];
    if (y % k == 0) {
      count += 1;
    }
  }

  cout << count << endl;
  return 0;
}
