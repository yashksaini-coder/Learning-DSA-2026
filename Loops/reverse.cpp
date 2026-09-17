#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;

  // Handle the edge case where N is 0
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }

  // Extract and print digits one by one
  while (n > 0) {
    int digit = n % 10;
    cout << digit;
    n /= 10;
  }
  cout << endl;

  return 0;
}
