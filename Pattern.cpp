//#include<iostream>
//using namespace std;
//int main(){
//	int n=4;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//int main(){
//	int n=4;
//	for(int i=0;i<n;i++){
//		char ch='A';
//		for(int j=0;j<n;j++){
//			cout<<ch<<" ";
//			ch=ch+1;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//int main(){
//	int n=3;
//	int sum=1;
//	for(int i=0;i<n;i++){
//		for(int j=0 ;j<n;j++){
//			cout<<sum;
//			sum++;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//int main(){
//	int n=3;
//	char ch='A';
//	for(int i=0;i<n;i++){
//		
//		for(int j=0;j<n;j++){
//			cout<<ch<<" ";
//			ch=ch+1;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//int main(){
//	int n=4;
//	int count=0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<i+1;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	return 0;
//	
//}
//int main(){
//	int n=4;
//	
//	for (int i=0;i<n;i++){
//		for(int j=0;j<i+1;j++){
//			cout<<(i+1);
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//int main(){
//	int n=5;
//	for(int i=0;i<n;i++){
//		char ch='A'+i;
//		for(int j=0;j<=i;i++){
//			cout<<ch<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include <iostream>
using namespace std;

//int main() {
//    int n = 5; // Number of rows
//    for (int i = 0; i < n; i++) {
//        char ch = 'A' + i; // Start character for each row
//        for (int j = 0; j <= i; j++) { // Print characters based on row number
//            cout << ch << " ";
//        }
//        cout << endl; // Move to the next line after each row
//    }
//    return 0;
//}
//int main(){
//	int n=4;
//	for(int i=0;i<n;i++){
//		for(int j=1;j<=i+1;j++){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//backward loop
//int main(){
//	int n=5;
//	for(int i=n;i>0;i--){
//		cout<<i<<endl;
//	}
//	return 0;
//}
//int main(){
//	int n=4;
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j>0;j--){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//int main(){
//	int n=4;
//	int num=1;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<i+1;j++){
//			cout<<num;
//			num++;
//		}
//		cout<<endl;
//	}
//	return 0;	
//}
//int main(){
//	int n=4;
//	char ch='A';
//	for(int i=0;i<n;i++){
//		for(int j=0;j<i+1;j++){
//			cout<<ch<<" ";
//			ch++;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//int main(){
//	int n=4;
//
//	for(int i=0;i<n;i++){
//		char ch='A'+ i;
//		for(int j=i+1;j>0;j--){
//			cout<<ch<<" ";
//			ch--;
//		}
//		cout<<endl;
//	}
//	return 0;
//}

int main(){
	int n=4;
	char ch='A';

	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		//character
		
		for(int j=0;j<n-i;j++){
			cout<<ch;	
		}
		ch++;
		cout<<endl;
	}
	return 0;
}
