#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
//   int n;
//   float x[1000], sum;
//
//   cout << "enter n: ";
//   cin >> n;
//
//   for (int i = 0; i < n; i++) {
//     cin >> x[i];
//   }
// // 22, 2123, 3, 4, 6
//   int min = x[0];
//
//   for (int i = 1; i < n ; i++) {
//     int y = x[i];
//     if (y < min) {
//       min = y;
//       sum = min + i;
//
//     }
//     else if (y > min) {
//       sum = x[0];
//     }
//
//   }
//
//
//
//   // cout << "minimum: " << min << endl;
//
//   cout << "sum is : " <<  sum << endl;
//   // cout << "index: " << sum - min << endl;
//

int n, sum, min;
float x[1000];
cout << "enter length of an array: ";
cin >> n;

for (int i = 0; i < n; i++) {
  cout << "Enter data: ";
  cin >> x[i];

}

min = x[0];

for (int i = 1; i < n; i++) {
  if (min < x[i]) {
    sum = min + i;
    cout << "first: " << min << endl;
  }

  else if (min > x[i]) {
    min = x[i];
    sum = ms + i;
    cout << "sc: " << min << endl;

  }
  else if (min == x[i]) {
    break;
    cout << "sa: " << min << endl;

  }
}

cout << "min sum is: " << sum << endl;






return 0;


}
