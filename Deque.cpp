/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/


class Deque {
   int arr[10];
   int front=0;
   int n;
   int size;
   Deque(int n)
   {
    this->n=n;  
   }
   bool empty()
   {
    return size;
   }
   insertfront(int x)
   {
    arr[front]=x;
   }
    
};
