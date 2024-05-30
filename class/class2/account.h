#ifndef ACCOUNT_H
#define ACCOUNT_H

class SavingAccount {
private:
  static int nextAccountNumber; // 下一个账户编号
  static float monthlyRate;     // 月利率
  int accountNumber;            // 当前账户编号
  double savingNum;             // 存款金额

public:
  // 构造函数
  SavingAccount(double initialAmount);

  // 计算新的存款金额
  void calculate();

  // 改变月利率
  void changerate(float newRate);

  // 显示账户信息
  void display() const;
};

#endif // ACCOUNT_H