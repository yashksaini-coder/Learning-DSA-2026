#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n;

  int pos = 0, neg = 0, even = 0, odd = 0;

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;

    if (x > 0)
      pos++;
    else
      neg++;

    if (x % 2 == 0)
      even++;
    else
      odd++;
  }
  cout << "Positive Integers: " << pos << endl;
  cout << "Negative Integers: " << neg << endl;
  cout << "Even Integers: " << even << endl;
  cout << "Odd Integers: " << odd << endl;

  return 0;
}
