#include <iostream>
using namespace std;

int change_base(int decimal, int Base) {
  int remain = 0;
  int res = 0;
  int base10 = 1;
  while (decimal) {
    remain = decimal % Base;
    res += remain * base10;
    base10 *= 10;
    decimal /= Base;
  }
  return res;
}

bool judge_palindrome(int num) {
  int reversed = 0;
  if (num % 10 == 0) {
    return false;
  } else {
    while (reversed < num) {
      reversed = reversed * 10 + num % 10;
      num /= 10;
    }
    return num == reversed || num == reversed / 10;
  }
}

void find_palindrome(int arr[], int n, int Base) {
  int num_inBase = 0;
  for (int i = 0; i < n; i++) {
    num_inBase = change_base(arr[i], Base);
    if (judge_palindrome(num_inBase)) {
      cout << change_base(i + 1, Base) << ' ' << num_inBase << endl;
    }
  }
}

int main() {
  // char input_base;
  // cin >> input_base;

  int num_arry[200];
  for (int i = 0; i < 200; i++) {
    num_arry[i] = (i + 1) * (i + 1);
  }
  find_palindrome(num_arry, 200, 8);
  // find_palindrome(num_arry, 200, input_base_);
  return 0;
}

// 1-200