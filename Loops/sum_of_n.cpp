#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, sum = 0;
  cin >> n;
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  cout << sum << endl;

  return 0;
}
