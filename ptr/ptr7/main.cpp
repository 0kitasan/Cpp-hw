#include <cstring>
#include <iostream>

using namespace std;

// 删除字符串中的指定字符
void removeChar(char *str, char ch) {
  int len = strlen(str);
  int pos = 0; // 用于记录保留字符的位置
  for (int i = 0; i < len; ++i) {
    if (str[i] != ch) {
      str[pos++] = str[i];
    }
  }
  str[pos] = '\0'; // 添加字符串结束符
}

// 字典逆序排序
void reverseSort(char **strArr, int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (strcmp(strArr[j], strArr[j + 1]) < 0) {
        char *temp = strArr[j];
        strArr[j] = strArr[j + 1];
        strArr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  char **strArr = new char *[n];

  // 输入字符串
  for (int i = 0; i < n; ++i) {
    strArr[i] = new char[31]; // 最多30个字符 + 1个结束符
    cin >> strArr[i];
  }
  char ch;
  cin >> ch;

  // 删除每个字符串中的指定字符
  for (int i = 0; i < n; ++i) {
    removeChar(strArr[i], ch);
  }

  // 字典逆序排序
  reverseSort(strArr, n);

  // 输出结果
  for (int i = 0; i < n; ++i) {
    cout << strArr[i] << endl;
  }

  // 释放内存
  for (int i = 0; i < n; ++i) {
    delete[] strArr[i];
  }
  delete[] strArr;

  return 0;
}

/*
任务描述
本关任务：输入若干个字符串(每个字符串的长度不超过30个字符，字符串总数不超过30)，和一个英文字符ch。
要求删除每个字符串中的字符ch(区分大小写)，得到新的字符串，然后将新的字符串按照字典逆序排序后输出。

编程要求
根据提示，在右侧编辑器补充代码，用户依次输入字符串数量n，n个字符串和一个英文字符ch。
删除每个字符串中的字符ch(区分大小写)，得到新的字符串，然后将新的字符串按照字典逆序排序后输出。

测试说明
平台会对你编写的代码进行测试：

测试输入：
3
abcddc
sxwcdez
ncvccvd
c

预期输出：
sxwdez
nvvd
abdd

*/