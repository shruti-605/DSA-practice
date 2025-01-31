void sortedInsert(stack<int> & stack,int num){
	//base case
	if(stack.empty() || (!stack.empty() && stack.top() < num) ){
		stack.push(num);
		return;
	}
	int n=stack.top();
	stack.pop();
	//recursive call
	sortedInsert(stack,num);
	stack.push(n);
}
#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();
	//recursive call
	sortStack(stack);

	sortedInsert(stack,num);

}
