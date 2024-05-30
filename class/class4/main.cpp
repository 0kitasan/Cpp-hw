#include "clock.h"
#include <iostream>

int main() {
  std::string time1, time2;
  std::cin >> time1 >> time2;

  Clock clock1(time1);
  Clock clock2(time2);

  std::string difference = Clock::calculateDifference(clock1, clock2);
  std::cout << difference << std::endl;

  return 0;
}

/*
测试输入：
10:30:25
14:20:34

预期输出：
03:50:09
*/
