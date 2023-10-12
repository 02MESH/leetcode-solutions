int differenceOfSums(int n, int m) {
    int indivisible = 0;
    int divisible = 0;
     for (int i = 1; n >= i; i++) {
        if (i % m != 0)
            indivisible += i;
        else 
            divisible += i;
    }
    return indivisible - divisible;
}
