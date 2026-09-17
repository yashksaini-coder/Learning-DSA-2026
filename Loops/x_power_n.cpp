#include <iostream>

using namespace std;

int main() {
  int base, exp;

  cin >> base >> exp;
  long long result = 1;
  for (int i = 0; i < exp; i++) {
    result *= base;
  }

  cout << result << endl;

  return 0;
}
