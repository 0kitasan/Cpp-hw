#include <iostream>
using namespace std;

int main() {
  int arr[1000];
  int unique[1000]; // 用于保存唯一的元素
  int n = 0;        // 输入数据的个数
  int count = 1;    // 记录unique数组中的元素个数

  // 读取输入的数据
  int x;
  while (cin >> x) {
    arr[n++] = x;
  }
  // ctrl+d停止

  unique[0] = arr[0];

  // 判断是否重复，如果不重复则添加到unique数组中
  for (int i = 0; i < n; ++i) {
    bool isDuplicate = false;
    for (int j = 0; j < count; ++j) {
      if (arr[i] == unique[j]) {
        isDuplicate = true;
        break;
      }
    }
    if (!isDuplicate) {
      unique[count++] = arr[i];
    }
  }

  // 输出unique数组中的元素，按原顺序输出
  for (int k = 0; k < count; ++k) {
    cout << unique[k] << " ";
  }
  cout << endl;

  return 0;
}

// 1 2 3 2 1