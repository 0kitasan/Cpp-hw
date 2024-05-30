#include "account.h"
#include <iomanip>
#include <iostream>

// 静态成员初始化
int SavingAccount::nextAccountNumber = 1;
float SavingAccount::monthlyRate = 0.05;

// 构造函数
SavingAccount::SavingAccount(double initialAmount) : savingNum(initialAmount) {
  accountNumber = nextAccountNumber++;
}

// 计算新的存款金额
void SavingAccount::calculate() { savingNum *= (1 + monthlyRate); }

// 改变月利率
void SavingAccount::changerate(float newRate) { monthlyRate = newRate; }

// 显示账户信息
void SavingAccount::display() const {
  std::cout << accountNumber << " " << std::fixed << std::setprecision(2)
            << savingNum << " " << monthlyRate << std::endl;
}