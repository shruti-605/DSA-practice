bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    for(int i=0;i<expression.length();i++){
        char ch=expression[i];//character in expression
        if(ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }
        //for opening bracket we have to push in ch
        //for closing bracket we have to pop in ch
        else{
            if(!s.empty()){
            char top=s.top();
            if((ch==')' && top=='(') || (ch==']' && top=='[') || (ch=='}' && top=='{')){
                s.pop();
            }else{
                return false;
            }
        }
        else{
            return false;
        }

    }
            
    }//if empty then return true and then false
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}
