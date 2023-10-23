int largestAltitude(vector<int>& gain) {
    int x = 0;
    int variable = 0;
    for(int i : gain) {
        i += variable;
        variable = i;
        x = max(x, i);
    }
    return x;
}
