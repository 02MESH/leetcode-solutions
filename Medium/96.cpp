#include <iostream>

//Based on the catalan formula T(n) = 2nCn/n+1
int numTrees(int n) {
    int catalan[n+1];
    catalan[0] = catalan[1] = 1;

    for(int i = 2; n >= i; i++) {
        catalan[i] = 0;
        for(int j = 0; i > j; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }
    return catalan[n];
}

int main() {
    std::cout<<numTrees(3);
    return 0;
}