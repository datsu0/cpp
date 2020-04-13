#pragma once

#include <iostream>

//ˆø”‚ª‘f”‚©‚Ç‚¤‚©‚ğ”»’è‚·‚é
bool isPrime(int n) {
  if (n < 2) return false;//2–¢–‚È‚ç‘f”‚Å‚Í‚È‚¢
  if (n == 2) return true;//2‚Í‘f”

  for (int j = 2; j < n; ++j) {
    if (n % j == 0) return false;//2ˆÈãn–¢–‚Ì”‚ÅŠ„‚èØ‚ê‚½‚ç‘f”‚Å‚Í‚È‚¢
  }
  return true;
}

//—v‘f‚ÌÅ‰‚ÆÅŒã‚Ì5ŒÂ‚ğ•\¦‚·‚é
template<typename T>
void report(T first, T last) {
  const int num = 5;
  if (last - first < num) {//numŒÂ–¢–‚È‚ç‚·‚×‚Ä•\¦
    for (T i = first; i != last; ++i) std::cout << *i << ", ";
  }
  else {
    for (T i = first; i != first + num; ++i) std::cout << *i << ", ";
    std::cout << std::endl;
    for (T i = last - num; i != last; ++i) std::cout << *i << ", ";
  }
  std::cout << std::endl;
}