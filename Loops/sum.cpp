#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, sum = 0;
  cin >> n;

  // Handle the edge case where N is 0
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }

  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  cout << sum << endl;

  return 0;
}
