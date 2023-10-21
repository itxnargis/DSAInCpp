/*  Given a series ogf N dailt price quotes for a  stock,
    * we need to calculate the span of the stock's price for all N days.
    * The span of the stock's price in one day is the max. num. of consecutive days(starting from that day and going backward)
    * For which the stock price was less than or equal to the price of that day
*/
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> calculateStockSpan(vector<int> &prices) {
    int n = prices.size();
    vector<int> spans(n, 1); // Initialize spans with 1 as each day has at least one day in its span.

    stack<int> st;
    st.push(0); // Push the index of the first day into the stack.

    for (int i = 1; i < n; i++) {
        // Pop elements from the stack while they are smaller than or equal to prices[i]
        while (!st.empty() && prices[i] >= prices[st.top()]) {
            st.pop();
        }

        // Calculate the span for the current day
        if (!st.empty()) {
            spans[i] = i - st.top();
        } else {
            spans[i] = i + 1; // If there are no smaller elements to the left, the span is the current day + 1
        }

        // Push the current day's index into the stack
        st.push(i);
    }

    return spans;
}

int main() {
    int arraySize;
    cout << "Enter the number of days: ";
    cin >> arraySize;

    vector<int> stockPrices;
    cout << "Enter stock prices for each day: ";
    for (int i = 0; i < arraySize; i++) {
        int price;
        cin >> price;
        stockPrices.push_back(price);
    }

    vector<int> spans = calculateStockSpan(stockPrices);

    cout << "Stock spans for each day are: ";
    for (int i = 0; i < arraySize; i++) {
        cout << spans[i] << " ";
    }

    return 0;
}
