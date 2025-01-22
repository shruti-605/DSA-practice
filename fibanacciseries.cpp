#include <iostream>
using namespace std;

int main(){
        int n;
        cin>>n;
        if(n==1||n==2){
                cout<<1<<endl;
                return 0;
        }
        int a=1;
        int b=1;
        for(int i=3;i<=n;i++){
                int next=a+b;
                a=b;
                b=next;
        }
        cout<<b<<endl;
        return 0;
}
