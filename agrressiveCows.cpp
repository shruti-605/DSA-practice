//#include<iostream>
//#include<vector>
//using namespace std;
//bool isPossible(vector<int> &arr,int N,int C,int minAllowedDist){//logn
//	int cows=1;
//	int laststalPos=arr[0];
//	for(int i=1;i<N;i++){
//		if(arr[i]-laststalPos >= minAllowedDist){
//			cows++;
//			laststalPos=arr[i];
//		}
//		if(cows==C){
//			return true;
//		}
//	}
//	return false;
//}
//int getDistance(vector<int> &arr,int N,int C){
//	sort(arr.begin(),arr.end());//nlogn
//	int st=1;
//	int e=arr[N-1]-arr[0];
//	int ans=-1;
//	while(st<=e){//O(log(range) *N)
//		int mid=s+(e-s)/2;
//		if(isPossible(arr,N,C,mid)){
//			ans=mid;
//			st=mid+1;
//		}else{
//			e=mid-1;
//		}
//	}
//	return ans;
//}
//
//int main(){
//	int N=5,C=3;
//	vector<int> arr={1,2,8,4,9};
//	
//	cout<<getDistance(arr,N,C)<<endl;
//	return 0;
//}
