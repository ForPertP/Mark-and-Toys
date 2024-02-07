#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maximumToys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY prices
 *  2. INTEGER k
 */

int maximumToys(vector<int> prices, int k)
{
    int count = 0;
    long long int total = 0;

    std::sort(prices.begin(), prices.end());

    int pricesSize = prices.size();
    for (int i = 0; i < pricesSize; ++i)
    {
        total += prices[i];
        
        if (total <= k)
        {
            count++;
        }
    }

    return count;
}

int main()
{
}
