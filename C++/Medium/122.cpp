#include <vector>
#include <iostream>

using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0;
    for(int i = 1; prices.size() > i; i++) {
        if(prices[i] > prices[i-1])
            profit += prices[i] - prices[i-1];
    }
    return profit;
}