#include <bits/stdc++.h>
using namespace std;

void test_case() {
  int x, y, z;
  cin >> x >> y >> z;
  cout << x - y + z << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  for (int cs = 1; cs <= t; cs++) {
    // cout << "Case " << cs << ": ";
    test_case();
  }

  return 0;
}