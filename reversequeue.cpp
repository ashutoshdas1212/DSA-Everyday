#include <queue>
void reverse(queue<int> &input, queue<int> &extra)
{

    if (input.empty())
    {
        return;
    }
    int x = input.front();
    input.pop();
    reverse(input, extra);
    extra.push(x);
}
void reverseQueue(queue<int> &input)
{
    queue<int> extra;
    reverse(input, extra);
    while(!extra.empty())
    {
        input.push(extra.front());
        extra.pop();
    }
}