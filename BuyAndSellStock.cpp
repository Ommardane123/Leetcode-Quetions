#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

int main() {
    // Example stock prices for each day
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Initialize minimum price to a very large value
    int minPrice = INT_MAX;

    // Initialize maximum profit to 0
    int maxProfit = 0;

    // Loop through each day's price
    for(int i = 0; i < prices.size(); i++) {
        // Update minimum price if current price is lower than minPrice
        if(prices[i] < minPrice) {
            minPrice = prices[i];
        }

        // Calculate profit if we sell today at current price
        int profit = prices[i] - minPrice;

        // Update maximum profit if this profit is greater than previous maxProfit
        if(profit > maxProfit) {
            maxProfit = profit;
        }

        // Optional: print debug information
        cout << "Day " << i 
             << ": Price = " << prices[i] 
             << ", Min Price so far = " << minPrice 
             << ", Profit if sold today = " << profit 
             << ", Max Profit = " << maxProfit << endl;
    }

    // Output the final maximum profit
    cout << "Maximum Profit = " << maxProfit << endl;

    return 0;
}
