#include <iostream>
#include <string>
using namespace std;

double charToDouble(char *str) {
  string input(str);
  double result = stod(input);
  return result;
}

void add_float(char *a, char *b, string &res_str) {
  double a_double, b_double, res_double;
  a_double = charToDouble(a);
  b_double = charToDouble(b);
  res_double = a_double + b_double;
  res_str = std::to_string(res_double);
  bool found = false;
  // found = false 说明是整数
  for (auto it : res_str) {
    if (it == '.') {
      found = true;
    }
  }
  if (found) {
    while (!res_str.empty() && res_str.back() == '0') {
      res_str.pop_back();
    }
    while (!res_str.empty() && res_str.front() == '0') {
      res_str.erase(0, 1);
    }
  }
  if (res_str == ".") {
    res_str.push_back('0');
    res_str = "0" + res_str;
  }
}

int main() {
  // char num1[128], num2[128], res[128];
  // cin >> num1;
  // cin >> num2;
  // add_float(num1, num2, res);
  // cout << res << endl;
  char num1[128] = "0.001";
  char num2[128] = "0.099";
  string res;
  add_float(num1, num2, res);
  cout << res << endl;

  return 0;
}

/*
根据提示，在右侧编辑器补充代码，定义函数add_float(char* a, char* b, char* res):
实现两个正浮点数a, b的精确加法。
注意：只需要实现函数add_float，函数中没有任何输入输出。
函数的输入参数char* a和char* b都是用字符串表示的正浮点数。
保证a, b一定都包含一个字符是小数点’.’，保证其余字符全是0-9的数字。保证a,
b不超过128个字符。 函数的输出参数char* res，保证浮点数a+b的结果不超过 128
个字符。 要求res字符串必须包含小数点’.’（即使结果是像下面 sample 1
这样并没有小数部分）。
要求res字符串没有任何多余的前缀字符’0’和后缀字符’0’（即使结果像下面 sample 2
这样没有整数部分）。
注意：虽然要求结果字符串res必须有小数点且没有任何前缀后缀0，但是并不保证字符串a,
b满足这两点。

平台会对你编写的代码进行测试：

测试输入：0.1 0.9
预期输出：
1.
注意：不是1.0

测试输入：.01 .09
预期输出：
.1
注意：不是0.1，也不是0.10

*/
