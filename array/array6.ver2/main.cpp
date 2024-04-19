#include <iostream>
#include <string>
using namespace std;

string decimalToBase(int decimal, int target_base) {
  string digits = "0123456789ABCDEFGHIJ"; // F到16进制，
  string result = "";
  while (decimal > 0) {
    int remainder = decimal % target_base;
    result =
        digits[remainder] + result; // 将余数对应的字符添加到结果字符串的前面
    decimal /= target_base;
  }
  return result;
}

bool isPalindrome(string str) {
  int left = 0;
  int right = str.length() - 1;

  while (left < right) {
    if (str[left] != str[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

void findPalindrome(int arr[], int n, int base) {
  string num_inBase;
  for (int i = 0; i < n; i++) {
    num_inBase = decimalToBase(arr[i], base);
    if (isPalindrome(num_inBase)) {
      cout << decimalToBase(i + 1, base) << ' ' << num_inBase << endl;
    }
  }
}

int main() {
  int input_base;
  cin >> input_base;
  int num_arry[200];
  for (int i = 0; i < 200; i++) {
    num_arry[i] = (i + 1) * (i + 1);
  }
  findPalindrome(num_arry, 200, input_base);

  return 0;
}

// 1-200