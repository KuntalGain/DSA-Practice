// Best time Buy and Sell Stocks

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int> &price) {

    int SellPrice = 0;
    int BuyPrice = INT_MAX;

    for(auto i : price) {
        BuyPrice = min(BuyPrice,i);
        SellPrice = max(SellPrice,i - BuyPrice);
    }

    return SellPrice;
}

int main() {
    vector<int> v = {7,6,4,3,1};
    cout << maxProfit(v) << endl;
}