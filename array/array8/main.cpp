#include <iostream>
using namespace std;

int main() {
  int m, n;

  cin >> m >> n;

  int mat[10][10];

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> mat[i][j];
    }
  }

  bool found = false;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      // 判断是否为行最大值
      bool is_row_max = true;
      for (int k = 0; k < n; ++k) {
        if (mat[i][k] > mat[i][j]) {
          is_row_max = false;
          break;
        }
      }
      // 判断是否为列最小值
      bool is_col_min = true;
      for (int k = 0; k < m; ++k) {
        if (mat[k][j] < mat[i][j]) {
          is_col_min = false;
          break;
        }
      }
      // 如果是鞍点，输出其坐标
      if (is_row_max && is_col_min) {
        cout << "mat[" << i << "][" << j << "]=" << mat[i][j] << endl;
        found = true;
      }
    }
  }

  if (!found) {
    cout << "Not Found" << endl;
  }

  return 0;
}

/*
平台会对你编写的代码进行测试：

测试输入：3 3 5 1 2 1 1 1 2 1 5
预期输出：
mat[1][0]=1
mat[1][1]=1
mat[1][2]=1
*/