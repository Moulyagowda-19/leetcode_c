int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    return fmin(k, numOnes) - fmax(0, k - numOnes - numZeros);
}