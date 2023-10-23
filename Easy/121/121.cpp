int maxProfit(vector<int>& prices) {
    int max = 0;
    int min = prices[0];
    for(int i = 1; prices.size() > i; i++) {
        max = std::max(max, prices[i]-min);
        min = std::min(prices[i], min);
    }
    return max;
}
