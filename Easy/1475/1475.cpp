vector<int> finalPrices(vector<int>& prices) {
    for(int i = 0; prices.size() > i; i++) {
        for (int j = i+1; prices.size() > j; j++) {
            if(prices[i] >= prices[j]) {
                prices[i] -= prices[j];
                break;
             }     
        }
    }
    return prices;
}
