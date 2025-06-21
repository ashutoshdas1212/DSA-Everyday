void calculateSpan(int prices[], int n, int spans[]) {
   stack<int> s;
   s.push(0);
   spans[0]=1;
   for (int i = 1; i < n; i++) {
     while(prices[i]>prices[s.top()] &&!s.empty())
     {
        s.pop();
     }
     if(s.empty())
     {
        spans[i]=1+i;
     }
     else{
        spans[i]=i-s.top();
     }
     s.push(i);

   }
}