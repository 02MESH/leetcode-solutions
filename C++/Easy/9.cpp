#include<iostream>

bool isPalindrome(int x) {
  if (x < 0)
    return false;
  long temp = x;
  long reversed = 0;
  while (temp != 0) {
    int digit = temp % 10;
    reversed = reversed * 10 + digit;
    temp /= 10;
  }
  std::cout<<std::boolalpha<<(reversed==x)<<std::endl;
  return reversed == x;
}

int main() {
  isPalindrome(9);
  return 1;
}
