#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

string copy_substring(const string &source, int start, int end) {
  // 确保start和end有效
  if (start < 0 || end < start || end >= source.length()) {
    throw out_of_range("Invalid start or end position");
  }

  // 使用substr提取子字符串
  return source.substr(start, end - start + 1);
}

void input_cvt(string input) {
  int i = 0;
  bool found = false;
  int int_part, float_part;
  string int_part_, float_part_;
  while (input[i] != '\0') {
    if (input[i] == '.') {
      found = true;
      break;
    }
    i++;
  }
  if (found && i != input.length() - 1) {
    if (i == 0) {
      cout << "no int part(int part=0)" << endl;
      cout << "float part=" << copy_substring(input, i, input.length() - 1)
           << endl;
    } else {
      cout << "int part=" << copy_substring(input, 0, i - 1) << endl;
      cout << "float part=" << copy_substring(input, i + 1, input.length() - 1)
           << endl;
    }
  } else {
    cout << "int part=" << copy_substring(input, 0, i - 1) << endl;
    cout << "no float part" << endl;
  }
}

void add_float(char *a, char *b, char *res) {}

int main() {
  // char num1[128], num2[128], res[128];
  // cin >> num1;
  // cin >> num2;
  // string num1_(num1), num2_(num2);

  // input_cvt(num1_);
  // input_cvt(num2_);
  string test_str = ".12";
  input_cvt(test_str);

  return 0;
}
