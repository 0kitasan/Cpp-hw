#include <iostream>
using namespace std;

int main() {
  char *sentence = new char[100];
  cin.getline(sentence, 100);
  char *order = new char[10];
  cin.getline(order, 100);
  cout << sentence;
  return 0;
}

/*
任务描述
本关任务：设计一个程序，让用户输入一行句子，数出句子中有多少个单词并输出，
再让用户输入一串数字表示单词重新排序的顺序，最后按用户设定的顺序来输出一行新的句子。
要求所有数组都只能用new来定义。

编程要求
根据提示，在右侧编辑器补充代码，用户输入的句子里只包含字母和空格（句子末尾没有空格），
以回车完成输入，该句子最多100个字符，句子里最多10个单词。
用户输入的一串数字是正常表示单词顺序的，不用考虑异常情况。

测试说明
平台会对你编写的代码进行测试：

测试输入：
This is a good day to work
6543210
预期输出：
7
work to day good a is This

*/