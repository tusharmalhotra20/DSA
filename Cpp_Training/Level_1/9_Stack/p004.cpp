#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> ngel(vector<int> stock_prices)
{
    vector<int> stock_span;
    stack<int> st;

    st.push(0);              // index of first element
    stock_span.push_back(1); // span of first stock

    for (int i = 1; i < stock_prices.size(); i++)
    {
        while (!st.empty() and stock_prices[i] > stock_prices[st.top()])
            st.pop();

        if (st.empty()) 
            stock_span.push_back(i + 1);
        else
            stock_span.push_back(i - st.top());

        st.push(i);
    }
    return stock_span;
}
int main()
{
    int size{};
    cin >> size;

    vector<int> prices(size, 0);
    for (int i = 0; i < prices.size(); i++)
        cin >> prices[i];

    vector<int> stock_span = ngel(prices);

    for (const auto ele : stock_span)
        cout << ele << " ";

    return 0;
}