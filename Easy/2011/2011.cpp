 int finalValueAfterOperations(vector<string>& operations) {
    int result = 0;
    for (auto x : operations) {
        if (x == "--X" || x == "X--")
            result--;
        else 
            result++;
    }
    return result;
}
