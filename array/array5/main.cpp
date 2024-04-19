#include <iostream>
using namespace std;

int main() {
  int arr[1000];
  int n;               // 数组的长度
  int uniqueCount = 0; // 记录数组中唯一元素的个数

  // 读取输入的数据并存储到数组中

  cin >> arr[0]; // 先读取第一个元素
  n = 1;         // 已读取的元素个数
  int x;
  while (cin >> x) {
    bool isDuplicate = false;
    for (int i = 0; i < n; ++i) {
      if (arr[i] == x) {
        isDuplicate = true;
        break;
      }
    }
    if (!isDuplicate) {
      arr[n++] = x; // 如果不是重复元素，则将其加入数组中
    }
  }

  cout << n << ' ';

  for (int k = 0; k < n; ++k) {
    cout << arr[k] << ' ';
  }

  return 0;
}
