

void rev(stack<int> &input, stack<int> &extra)
{
    if(input.empty())
    {
        return;
    }
    int x=input.top();
    input.pop();
    reverseStack(input,extra);

   extra.push(x);
}

void reverseStack(stack<int> &input, stack<int> &extra)
{

    rev(input,extra);
    while(!extra.empty())
    {
        input.push(extra.top());
        extra.pop();
    }
}