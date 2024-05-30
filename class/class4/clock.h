#ifndef CLOCK_H
#define CLOCK_H

#include <string>

class Clock {
private:
  int hours;
  int minutes;
  int seconds;

public:
  // 构造函数
  Clock(const std::string &timeStr);

  // 设置时间
  void setTime(const std::string &timeStr);

  // 计算两个时间的差值
  static std::string calculateDifference(const Clock &c1, const Clock &c2);

  // 将时间转换为秒数
  int toSeconds() const;

  // 将秒数转换为hh:mm:ss格式
  static std::string formatTime(int totalSeconds);
};

#endif // CLOCK_H