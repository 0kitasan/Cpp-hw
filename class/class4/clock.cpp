#include "clock.h"
#include <cmath>
#include <iomanip>
#include <sstream>

// 构造函数
Clock::Clock(const std::string &timeStr) { setTime(timeStr); }

// 设置时间
void Clock::setTime(const std::string &timeStr) {
  sscanf(timeStr.c_str(), "%d:%d:%d", &hours, &minutes, &seconds);
}

// 将时间转换为秒数
int Clock::toSeconds() const { return hours * 3600 + minutes * 60 + seconds; }

// 计算两个时间的差值
std::string Clock::calculateDifference(const Clock &c1, const Clock &c2) {
  int diffInSeconds = std::abs(c1.toSeconds() - c2.toSeconds());
  return formatTime(diffInSeconds);
}

// 将秒数转换为hh:mm:ss格式
std::string Clock::formatTime(int totalSeconds) {
  int h = totalSeconds / 3600;
  int m = (totalSeconds % 3600) / 60;
  int s = totalSeconds % 60;

  std::ostringstream oss;
  oss << std::setw(2) << std::setfill('0') << h << ":" << std::setw(2)
      << std::setfill('0') << m << ":" << std::setw(2) << std::setfill('0')
      << s;
  return oss.str();
}