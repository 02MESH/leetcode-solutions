string reformatDate(string date) {
    std::unordered_map<std::string, std::string> map {
        {"Jan", "01"},
        {"Feb", "02"},
        {"Mar", "03"},
        {"Apr", "04"},
        {"May", "05"},
        {"Jun", "06"},
        {"Jul", "07"},
        {"Aug", "08"}, 
        {"Sep", "09"},
        {"Oct", "10"},
        {"Nov", "11"},
        {"Dec", "12"}
    };
    std::vector<std::string> vec(3, "");
    std::string temp;
    for(int i = 0, j = 0; date.size() >= i; i++) {
        if(isspace(date[i]) || i == date.size()) {
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
    while(isdigit(vec[2][x])) x++;
    std::string actualDate {vec[2].substr(0, x)};
    
    temp += vec[0] + '-' + map[vec[1]] + '-' + (actualDate.size() > 1 ? actualDate: '0'+actualDate);

    return temp;
}
