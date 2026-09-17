#include <iostream>
using namespace std;

int main() {
  // n can be up to 10^18, so we must use long long
  long long int n, original, digit, reversed = 0;
  cin >> n;

  // Store the original value to compare later
  original = n;

  // Reverse the number
  while (n > 0) {
    digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }

  // A number is a palindrome if it equals its reverse
  if (original == reversed) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
