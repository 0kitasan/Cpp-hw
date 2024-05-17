#include <iostream>

using namespace std;

void findMaxAndSecondMax(int arr[], int n, int &maxVal, int &secondMaxVal) {
  maxVal = arr[0];
  secondMaxVal = arr[0];

  for (int i = 0; i < n; ++i) {
    if (arr[i] > maxVal) {
      secondMaxVal = maxVal;
      maxVal = arr[i];
    } else if (arr[i] >= secondMaxVal && arr[i] <= maxVal) {
      secondMaxVal = arr[i];
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int maxVal, secondMaxVal;
  findMaxAndSecondMax(arr, n, maxVal, secondMaxVal);
  cout << maxVal << ' ' << secondMaxVal << endl;
  return 0;
}

/*
任务描述
本关任务：修改ppt中分治法求最大最小数的程序，使之能够求最大和第二大数，同时还要求尽量节约空间

编程要求
根据提示，在右侧编辑器补充代码，用户先输入元素个数n(n>2)，然后依次输入这n个整数，输出其中最大和第二大数

测试说明
平台会对你编写的代码进行测试：

测试输入：5 4 -3 2 5 1
预期输出：
5 4

测试输入：5 5 -3 2 5 1
预期输出：
5 5

5  2 5 -3 2 5

*/