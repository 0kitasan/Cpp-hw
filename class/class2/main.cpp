#include "account.h"
#include <iostream>
using namespace std;

int main() {
  // 1st month
  int first_money, second_money;
  cin >> first_money >> second_money;
  SavingAccount first(first_money);
  SavingAccount second(second_money);
  first.display();
  second.display();

  // 2nd month
  float new_rate;
  cin >> new_rate;
  first.calculate();
  first.display();
  second.calculate();
  second.display();
  first.changerate(new_rate);
  second.changerate(new_rate);

  // 3rd month
  int third_money;
  cin >> third_money;
  first.calculate();
  first.display();
  second.calculate();
  second.display();
  SavingAccount *p = new SavingAccount(third_money);

  // 4th month
  first.calculate();
  first.display();
  second.calculate();
  second.display();
  p->calculate();
  p->display();

  delete p;
  return 0;
}

/*
测试输入：
20000 10000
0.01
30000

预期输出：
1 20000.00 0.05
2 10000.00 0.05
1 21000.00 0.05
2 10500.00 0.05
1 21210.00 0.01
2 10605.00 0.01
1 21422.10 0.01
2 10711.05 0.01
3 30300.00 0.01
*/
