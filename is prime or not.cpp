int tt; cin>>tt;
    for(int i=0;i<tt;i++){
        int sz; cin>>sz;
        int arr[sz];
        for(int j=0;j<sz;j++){
            cin>>arr[j];
        }
        int sum = 0;
        for(int j=0;j<sz;j++){
            int num = arr[j];
            int digit_cnt=0;
            while(num>0){
                digit_cnt++;
                num/=10;
            }
            sum += digit_cnt;
        }
        int isprime = 1;
for(int j=2;j<sum;j++){
            if(sum%j == 0){
                isprime=0;
                cout<<"No"<<endl;
            } 
        }
        if(isprime) cout<<"Yes"<<endl;
