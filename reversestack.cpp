void reverse(stack<int> &input, stack<int> &extra)
{
    if (input.size() == 0)
    {
        return;
    }
    int x = input.top();
    input.pop();
    reverseStack(input, extra);
    extra.push(x);
}

void reverseStack(stack<int> &input, stack<int> &extra)
{
reverse(input,extra);
while(!extra.empty())
{
    input.push(extra.top());
    extra.pop();
}

}