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
        } else if (std::isdigit(currentCharacter) && std::isspace(temp[i+1])) {
            int index = currentCharacter - '0';
            temp += s[i];
            values.insert({index, temp});
            i++;
            temp = "";
        }
    }
    return "haha";
}

int main() {
    sortSentence("haha1 haha2");
    std::cout<<"Hello World";
    return 1;
}
