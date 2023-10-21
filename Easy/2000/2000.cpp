string reversePrefix(string &word, char ch) {
    int n;
    if(word.find(ch)!=std::string::npos) n = word.find(ch);
    else return word;
    std::string temp = word.substr(0, n+1);
    std::reverse(temp.begin(), temp.end());
    word.replace(0, temp.size(), temp);
    return word;
}
