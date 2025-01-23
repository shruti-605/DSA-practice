#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char str[]){
	int left=0;
	int right=strlen(str)-1;//get the length of the string
	while(left<right){
		if(str[left] != right){
			return false;
		}
		left++;
	     right--;
		}
		return true;
	}
	int main(){
		char str[1000];
		cout<<"Enter a string";
		cin>>str;
		if(checkPalindrome(str)){
			cout<<"true"<<endl;
		}else{
			cout<<"false"<<endl;
		}
		return 0;
	}
	

