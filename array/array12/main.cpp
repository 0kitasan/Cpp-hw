#include <iostream>
using namespace std;

int char2int_mult(char arr[], int n) {
  int res = 0;
  int num = 0;
  for (int i = 0; i < n; i++) {
    num = arr[i] - '0';
    for (int j = 0; j < n - i - 1; j++) {
      num *= 10;
    }
    res += num;
  }
  return res * 2;
}

int main() {
  char input[100];
  char output[100];
  cin.getline(input, 100);
  int index_in = 0;
  int index_out = 0;
  while (input[index_in] != '\0') {
    if (input[index_in] >= '0' && input[index_in] <= '9') {
      output[index_out++] = input[index_in];
    }
    index_in++;
  }
  cout << char2int_mult(output, index_out) << endl;

  return 0;
}

// Hello world!
// Hell3o w1orl2d!