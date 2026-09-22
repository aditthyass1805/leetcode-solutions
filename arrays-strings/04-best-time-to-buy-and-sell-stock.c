#include <stdio.h>

// Test Case 1 (Typical): prices = [7,1,5,3,6,4]
// Expected Output: 5

// Test Case 2 (Edge): prices = [7,6,4,3,1]
// Expected Output: 0

int maxProfit(const int *prices, int pricesSize) {
    if (pricesSize < 2) {
        return 0;
    }

    int minimumPrice = prices[0];
    int bestProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        int currentProfit = prices[i] - minimumPrice;
        if (currentProfit > bestProfit) {
            bestProfit = currentProfit;
        }
        if (prices[i] < minimumPrice) {
            minimumPrice = prices[i];
        }
    }

    return bestProfit;
}

int main(void) {
    int typical[] = {7, 1, 5, 3, 6, 4};
    int edge[] = {5};

    printf("Typical case: %d\n", maxProfit(typical, 6));
    printf("Edge case: %d\n", maxProfit(edge, 1));

    return 0;
}
