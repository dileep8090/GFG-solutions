void MyQueue :: push(int x)
{
        arr[rear] = x;
        rear++;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
      if(front==rear)
           return -1;
       int temp;
       if(rear==1){
           temp = arr[front];
           front = rear = 0;
       }
       else{
           temp = arr[front++];
           if(front>rear)
               front = rear = 0;
       }
       return temp;
}
