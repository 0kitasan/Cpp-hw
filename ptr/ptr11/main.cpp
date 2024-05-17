#include <cstdlib> // 包含 strtod 函数的头文件
#include <cstring>
#include <iostream>
using namespace std;

double charToDouble(char *str) {
  char *endptr; // 用于指向转换后的结束字符
  // 使用 strtod 函数将字符串转换为 double
  double result = strtod(str, &endptr);
  // 检查转换是否成功
  if (*endptr != '\0') {
    cerr << "Error: Conversion failed. Invalid input: " << str << endl;
    exit(EXIT_FAILURE);
  }
  return result;
}

void add_float(char *a, char *b, char *res) {
  double a_double, b_double, res_double;
  a_double = charToDouble(a);
  b_double = charToDouble(b);
  res_double = a_double + b_double;
  string res_str;
  res_str = std::to_string(res_double);
  while (!res_str.empty() && res_str.back() == '0') {
    res_str.pop_back();
  }
  while (!res_str.empty() && res_str.front() == '0') {
    res_str.erase(0, 1);
  }
  strcpy(res, res_str.c_str());
}

int main() {
  char num1[128], num2[128], res[128];
  cin >> num1;
  cin >> num2;
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
*/
