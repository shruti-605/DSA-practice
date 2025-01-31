void insertAtBottom(stack<int> &s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    //side rkhegaa
    int num=s.top();
    s.pop();

    //recusive call
    insertAtBottom(s,element);
    s.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();
    //recursive call
    reverseStack(stack);
    //then insert at bottom
    insertAtBottom(stack,num);
}
