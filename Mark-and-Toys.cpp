int maximumToys(vector<int> prices, int k)
{
    int count = 0;
    long long int total = 0;

    std::sort(prices.begin(), prices.end());

    for (int i = 0; i < prices.size(); ++i)
    {
        total += prices[i];
        
        if (total <= k)
        {
            count++;
        }
    }

    return count;
}

