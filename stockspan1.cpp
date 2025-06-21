
void calculateSpan(int prices[], int n, int spans[])
{
    stack<int> s;
    s.push(0);
    spans[0] = 1;
    for (int i = 1; i < n; i++)
    {

        while (!s.empty() && prices[i] > prices[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            spans[i] = i + 1;
        }
        else
        {
            spans[i] = i - s.top();
        }
    }
}