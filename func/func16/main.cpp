#include <iostream>
using namespace std;

int fun(int n) {
  if (n != 1) {
    return fun(n - 1) + 2;
  } else {
    return 10;
  }
}

int main() {
  int n;
  cin >> n;
  cout << fun(n);
  return 0;
}

/*
本关任务：编写一个使用递归法计算游戏人员年龄的小程序。

有n个人围坐在一起，问第n个人多大年纪，他说比第n-1个人大2岁；
问第n-1个人，他说比第n-2个人大2岁,…..,问第3个人，他说比第2个人大2岁；
问第2个人，他说比第1个人大2岁。第1个人说自己10岁，问第n个人多大年纪。

*/