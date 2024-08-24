#include <iostream>
#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

string reformatDate(string date) {
  int n = date.size();
  vector<string> months{"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  string temp = "";
  int space = 0;
  for (int i = n - 1; i >= 0; i--) {
    while (i >= 0 && !isspace(date[i])) {
      temp = date[i] + temp;
      i--;
    }
    if (space == 1) {
      temp = to_string(
          distance(months.begin(), find(months.begin(), months.end(), temp)) +
          1);
      temp = (temp.size() > 1) ? temp : '0' + temp;
    } else if (space == 2) {
      int index = 0;
      while (isdigit(temp[index]))
        index++;
      temp = temp.substr(0, index);
      temp = (temp.size() > 1) ? temp : "0" + temp;
    }
    date += ((space == 2) ? temp : (temp + "-"));
    space++;
    temp = "";
  }
  return date.substr(n, date.size());
}

//Second solution
string reformatDate1(string date) {
  std::unordered_map<std::string, std::string> map{
      {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"},
      {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"},
      {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
  std::vector<std::string> vec(3, "");
  std::string temp;
  for (int i = 0, j = 0; date.size() >= i; i++) {
    if (isspace(date[i]) || i == date.size()) {
      vec[j] = temp;
      j++;
      temp = "";
    } else {
      temp += date[i];
    }
  }
  temp = "";
  std::reverse(vec.begin(), vec.end());

  int x = 0;
  while (isdigit(vec[2][x]))
    x++;
  std::string actualDate{vec[2].substr(0, x)};

  temp += vec[0] + '-' + map[vec[1]] + '-' +
          (actualDate.size() > 1 ? actualDate : '0' + actualDate);

  return temp;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  string test {"20th October 2052"};
  cout << reformatDate(test);
  return 1;
}
