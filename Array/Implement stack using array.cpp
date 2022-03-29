void MyStack :: push(int x)
{
    top++;
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top==-1)return top;
    int x=arr[top];
    top--;
    return x;    
}
