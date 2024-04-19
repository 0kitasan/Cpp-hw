#include <iostream>
using namespace std;

void search_char(char arr[], char target) {

  bool found = false;
  int index = 0;
  int index_target = 0;
  while (arr[index] != '\0') {
    if (arr[index] == target) {
      found = true;
      index_target = index;
    }
    index++;
  }
  if (found) {
    cout << index_target << endl;
  } else {
    cout << "Not Found" << endl;
  }
}

int main() {
  char input[80];
  cin.getline(input, 80);
  char target;
  cin >> target;
  search_char(input, target);
  return 0;
}


/*
任务描述
本关任务：编写一个程序，首先输入一个字符串（少于80个字符），接着再输入一个字符，查找该字符在字符串中是否存在。如果找到，则输出该字符串在字符串中所对应的最大下标（下标从0开始）；否则输出“Not Found”

编程要求
根据提示，在右侧编辑器补充代码，用户输入一个字符串（少于80个字符），接着再输入一个字符，输出该字符串在字符串中所对应的最大下标（下标从0开始），或者否则输出“Not Found”

测试说明
平台会对你编写的代码进行测试：

测试输入：
Hello, world! 
l
预期输出：
10
*/