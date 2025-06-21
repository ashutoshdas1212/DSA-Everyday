#include <bits/stdc++.h>
using namespace std;


void reverseQueue(queue<int> &input) {
    if(input.empty())
    {
        return;
    }
    int x=input.front();
    input.pop();
    reverseQueue(input);
    input.push(x);
    return;
}