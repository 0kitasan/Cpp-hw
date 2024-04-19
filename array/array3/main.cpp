#include <iostream>
using namespace std;

int day_by_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 1 2 3 4 5 6 7 8 9 10 11 12
// 6 2 3 6 1 4 6 2 5  7  3  5  1
//   0 1 2 3 4 5 6 7  8  9 10 11

// 1 2 3 4 5 6 7
// 1 2 2 1 2 3 1

bool judge_LeapYear(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

int cal_day_by_gap(int day, int gap) {
  int res;
  if (day < 1 || day > 7 || gap < 0) {
    cout << "error!" << endl;
    return -1;
  } else {
    res = day + gap % 7;
    if (res > 7) {
      res = res - 7;
    }
    return res;
  }
}

void cal_month_13rd(int n) {
  bool isLeapYear = false;
  int days_of_13rd[7] = {0};
  int day_of_13rd = 6;
  int index = day_of_13rd - 1;
  days_of_13rd[index]++;
  // 1900 - 1900+n-1
  // 1900年1月1日是星期一
  // 1900年1月13日是星期六
  for (int year = 0; year < n; year++) {
    isLeapYear = judge_LeapYear(1900 + year);
    for (int month = 0; month < 12; month++) {
      if (year == n - 1 && month == 11) {
        break;
      }
      if (isLeapYear && month == 1) {
        day_of_13rd = cal_day_by_gap(day_of_13rd, day_by_month[month] + 1);
        // cout << day_of_13rd << ' ';
        index = day_of_13rd - 1;
        days_of_13rd[index]++;
      } else {
        day_of_13rd = cal_day_by_gap(day_of_13rd, day_by_month[month]);
        // cout << day_of_13rd << ' ';
        index = day_of_13rd - 1;
        days_of_13rd[index]++;
      }
    }
  }

  for (int i = 0; i < 7; i++) {
    cout << days_of_13rd[i] << ' ';
  }
  cout << endl;
}

int main() {
  int n;
  n = 20;
  // 34 33 35 35 34 36 33
  cal_month_13rd(n);
}
