#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, fact = 1;
  cin >> n;

  if (n > 0) {
    for (int i = 1; i <= n; i++) {
      fact *= i;
    }
  }
  cout << fact << endl;

  return 0;
}
