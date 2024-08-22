#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string sortSentence(string s) {
  string temp = "";
  int num = 0;
  unordered_map<int, string> map;
  for (int i = 0; s.size() > i; i++) {
    if (isalpha(s[i]))
      temp += s[i];
    else if (isdigit(s[i]) && (isspace(s[i + 1]) || s[i + 1] == '\0')) {
      num = s[i] - '0';
      map.insert(make_pair(num, temp));
      i++;
      temp = "";
    }
  }

  for (int i = 0; map.size() > i; i++) {
    unordered_map<int, string>::iterator it = map.find(i + 1);
    temp += it->second + ((i == map.size() - 1) ? "" : " ");
  }
  return temp;
}

int main() {
  std::cout << sortSentence("Myself2 Me1 I4 and3");
  return 1;
}
