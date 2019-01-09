#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n, min;
  float x[1000], sum = 0.0;

  cin >> n;

 for (int i = 0; i < n; i++) {
   cin >> x[i];

 }
 min = x[0];

 for (int i = 1; i < n; i++) {
   if (x[i] < min) {
     min = x[i];
     sum = min + i;
   }

 }
 cout << sum << endl;
 return 0;
}
