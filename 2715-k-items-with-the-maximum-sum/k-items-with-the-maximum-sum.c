int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    if(k<=numOnes){
        return k;
    }if(k<=numZeros+numOnes){
        return numOnes;
    }
    return numOnes-(k-(numOnes+numZeros));
}