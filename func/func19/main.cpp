#include <iostream>
using namespace std;

long long quickPow(int n, int k) {
  if (k != 1) {
    if (k % 2 == 0) {
      return quickPow(n, k / 2) * quickPow(n, k / 2);
    } else {
      return n * quickPow(n, (k - 1) / 2) * quickPow(n, (k - 1) / 2);
    }
  } else {
    return n;
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  cout << quickPow(n, k);
  return 0;
}