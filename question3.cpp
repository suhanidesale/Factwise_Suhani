#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int n = prices.size();
    int minPrice = prices[0];
    int ans = INT_MIN;

    for(int i = 0; i<n; i++)
    {
        ans = max(ans, prices[i]-minPrice);
        minPrice = min(minPrice, prices[i]);
    }
    return ans;
}

int main()
{
    vector<int> prices = {7, 6, 4, 3, 1};

    cout << maxProfit(prices) << endl;

    return 0;
}