#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
  int n, k, array[1000][1000], count = 0;

  cout << "Enter the first parameter: ";
  cin >> n;
  cout << "Enter a number: ";
  cin >> k;

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      cout << i << ". Enter value: ";
      cin >> array[i][j];
    }
  }
  for (int i = 2; i < n + 1; i++) {
    for (int j = 1; j < i; j++) {
      if (array[i][j] % k == 0) {
        ++count;
      }
    }
  }
  cout << "Count of nums is " << count << endl;
}
