int percentageLetter(string s, char letter) {
    int charCount = 0;
    for(int i = 0; s.size() > i; i++) {
        if(s[i]==letter) charCount++;
    }
    charCount = (charCount*100);
    return charCount/s.size();
}
