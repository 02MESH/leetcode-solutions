#include <iostream>
#include <string>
#include <unordered_map>

std::string sortSentence(std::string s) {
    std::string temp;
    std::unordered_map<int, std::string> values;
    for(int i = 0; s.size() > i; i++) {
        char currentCharacter = s[i];
        if(std::isalpha(currentCharacter)) {
            temp += currentCharacter;
        } else if (std::isdigit(currentCharacter) && (std::isspace(s[i+1]) || s[i+1] == '\0')) {
            int index = currentCharacter - '0';
            values.insert(std::make_pair(index, temp));
            i++;
            temp = "";
        }
    }

    for(int i = 0; values.size() > i; i++) {
        auto search = values.find(i+1);
        temp += search->second + (i + 1 == values.size() ? "" : " ");
    }
    return temp;
}

int main() {
    std::cout<<sortSentence("Myself2 Me1 I4 and3");
    return 1;
}
