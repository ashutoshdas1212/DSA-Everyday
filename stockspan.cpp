#include <bits/stdc++.h>
using namespace std;


void print1(stack<int> a)
{
    while(!a.empty())
    {
        cout<<a.top()<<",";
        a.pop();
    }
}
void calculateSpan(int prices[], int n, int spans[])
{
    stack<int> s;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.push(prices[i]);
            spans[0]=1;
        }

        else if (prices[i] > s.top())
        {
            while (s.top() < prices[i] && !s.empty())
            {
                s.pop();
                cnt += 1;
            }
             s.push(prices[i]);
            spans[i] = cnt + 1;
            cout<<i<<print1(s)<<endl;
        }
        else
        {
             s.push(prices[i]);
             spans[i]=1;
        }
        
    }
}
int main() {
    int n;
    cin >> n;

    int* prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int* spans = new int[n];
    calculateSpan(prices, n, spans);

    for (int i = 0; i < n; i++)
        cout << spans[i] << " ";

    delete[] prices;
    delete[] spans;

    return 0;
}