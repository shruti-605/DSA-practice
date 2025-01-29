int main(){
	string str="babbar";
	stack<char> s;
	
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		s.push(ch);//push all element;
	}
	string ans= "";
	while(!s.empty()){
		char ch=s.top();
		ans.push_back(ch);
		
		s.pop();
	}
	cout<<"answer is: "<<ans<<endl;
}
