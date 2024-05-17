#include <cstring> // 包含对 strcpy 的支持
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

void add_float(char *a, char *b, char *res) {
  // 将C字符串转换为C++字符串
  std::string str_a(a);
  std::string str_b(b);

  // 使用字符串流处理浮点数的加法
  std::stringstream ss;
  double num_a, num_b;
  ss << str_a;
  ss >> num_a;
  ss.clear(); // 清除字符串流状态
  ss << str_b;
  ss >> num_b;

  double sum = num_a + num_b;

  // 用来存储结果的字符串流
  std::stringstream result_ss;
  result_ss << std::fixed << sum;

  // 获取结果并进行格式处理
  std::string result = result_ss.str();

  // 移除尾部多余的0和小数点
  size_t dot_pos = result.find('.');
  if (dot_len != std::string::npos) {
    size_t end_pos = result.find_last_not_of('0');
    if (end_pos != std::string::npos && end_pos > dot_pos) {
      result.erase(end_pos + 1); // 移除尾部多余的0
    } else {
      result.erase(dot_pos + 1); // 保留小数点，移除多余的0
    }
  }

  // 如果整数部分为0，处理开头的0
  if (result[0] == '0' && result[1] == '.') {
    result.erase(0, 1); // 移除小数点前的0
  }

  // 复制结果到输出参数
  strcpy(res, result.c_str());
}

int main() {
  char a[129] = "0.1";
  char b[129] = "0.9";
  char result[129];

  add_float(a, b, result);
  std::cout << "Result: " << result << std::endl; // 应输出 "1."

  char a2[129] = ".01";
  char b2[129] = ".09";
  add_float(a2, b2, result);
  std::cout << "Result: " << result << std::endl; // 应输出 ".1"

  return 0;
}
