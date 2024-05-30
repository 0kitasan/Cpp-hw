#include <iostream>
using namespace std;

// 定义嵌套的结构体
struct Date {
  int year;
  int month;
  int day;
};

struct Student {
  char name[21];    // 姓名，最多20个字符
  Date birthday;    // 生日
  char phone[21];   // 电话号码
  char address[51]; // 家庭地址，最多50个字符
};

// 比较两个学生的生日，用于排序
bool compareStudents(const Student &a, const Student &b) {
  if (a.birthday.year != b.birthday.year) {
    return a.birthday.year > b.birthday.year;
  } else if (a.birthday.month != b.birthday.month) {
    return a.birthday.month > b.birthday.month;
  } else {
    return a.birthday.day > b.birthday.day;
  }
}

int main() {
  int n;
  cin >> n; // 输入学生人数，n < 10
  Student students[10];

  // 输入学生信息
  for (int i = 0; i < n; ++i) {
    cin >> students[i].name >> students[i].birthday.year >>
        students[i].birthday.month >> students[i].birthday.day >>
        students[i].phone;
    cin.ignore(); // 忽略前一个输入后面的换行符
    cin.getline(students[i].address, 51);
  }

  // 按生日从小到大排序
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - 1 - i; ++j) {
      if (!compareStudents(students[j], students[j + 1])) {
        swap(students[j], students[j + 1]);
      }
    }
  }

  // 输出排序后的学生信息
  for (int i = 0; i < n; ++i) {
    cout << students[i].name << " " << students[i].birthday.year << " "
         << students[i].birthday.month << " " << students[i].birthday.day << " "
         << students[i].phone << " " << students[i].address << endl;
  }

  return 0;
}

/*
任务描述
本关任务：通信录包含

“姓名”（最多20个字符）、
“生日”（包括“年”、“月”、“日”）、
“电话号码”、
“家庭地址”（最多50个字符）。
定义一个嵌套的结构类型，输入n(n<10)个学生信息，再按照他们的年龄从小到大的顺序输出。

编程要求
根据提示，在右侧编辑器补充代码，用户先输入正整数n表示学生人数，然后输入这些学生的信息，再按照他们的年龄从小到大的顺序输出。

测试说明
平台会对你编写的代码进行测试：
测试输入：
2
Wangwu 1990 12 11 13901232222 No. 800 Dongchuan Road
Zhangsan 1993 1 23 18912337789 No.238 Huasan Road
预期输出：
Zhangsan 1993 1 23 18912337789 No.238 Huasan Road
Wangwu 1990 12 11 13901232222 No. 800 Dongchuan Road

*/