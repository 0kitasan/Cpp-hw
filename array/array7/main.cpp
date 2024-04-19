#include <iostream>
using namespace std;

int get_num(int arr[], int n, int i, int j) {
  int index = (i * i + i) / 2 + j;
  if (index >= n) {
    cout << "error: index overflow!" << endl;
    return -1;
  } else {
    return arr[index];
  }
}

int max(int a, int b) { return a > b ? a : b; }

int f(int arr[], int n, int i, int j) {
  int num = get_num(arr, n, i, j);
  if (i == 0) {
    return arr[0];
  } else if (j == 0) {
    return num + f(arr, n, i - 1, 0);
  } else if (j == i) {
    return num + f(arr, n, i - 1, i - 1);
  } else {
    return num + max(f(arr, n, i - 1, j - 1), f(arr, n, i - 1, j));
  }
}

int main() {
  int row, n, n_ofLastRow, f_ofLastRow;
  cin >> row;
  n = (row * row + row) / 2;
  n_ofLastRow = row;
  int arr[1000];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int res = 0;

  for (int i = 0; i < n_ofLastRow; i++) {
    f_ofLastRow = f(arr, n, row - 1, i);
    if (f_ofLastRow > res) {
      res = f_ofLastRow;
    }
  }

  cout << res << endl;

  return 0;
}

/*
任务描述
本关任务：观察下面的数字金字塔，寻找一个算法查找从最高点到底部任意处结束的路径，使路径经过的数字的和最大。、
每一步可以走到左下方的点也可以到达右下方的点。
0        7      1   0
1       3 8     2   1
2      8 1 1    4   3
3     2 7 4 4   7   6
4    4 5 2 6 5  11  10

a_n=(n^2+n)/2

在上面的例子中，从 7 到 3 到 8 到 7 到 5 的路径产生了最大的数字和。

编程要求
根据提示，在右侧编辑器补充代码，编写一个程序，首先输入数字金字塔层次数R（1≤R≤10），接着输入这个数字金字塔每行包含的整数（所有整数大于等于0且小于100），输出计算出来的最大的和。

提示：设置一个两维数组 f，f[i，j] 表示从最高点（最高点为第 1 层）到达第 i 层第 j
个位置时经过路径数字的最大和， 则
f[i，j]+=Max{f[i-1，j-1]，f[i-1，j]}（1≤i≤R，1≤j≤i）。
请注意边界值的处理，f[i，0]=0。

测试说明
平台会对你编写的代码进行测试：

测试输入：5 7 3 8 8 1 1 2 7 4 4 4 5 2 6 5
预期输出：
30
输入说明：与任务描述中的图形对应

*/