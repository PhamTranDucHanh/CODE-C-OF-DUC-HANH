#include <bits/stdc++.h>
using namespace std;
int a[100], demls, dembs, mid, left, right,f;
bool ls(int a[], int n, int x){
	for (int i=0;i<n;i++){
		if (a[i]==x){
			demls+=1;
			return true;
		}	
	return false;
}
bool bs(int a[], int n,int x){
	mid=(left+right)/2;
	while (left<=right){
		if (  =f) return true;
		else if(mid <f){
			left=mid+1;
			mid=(left+right)/2;
		}
		else{
			right=mid-1;
			mid=(left+right)/2;
		}
	}
	return false;
}
int main(){
	cin>>n;
	for (int z=0; z<n; z++){
		cin>>a[i];
	}
	if bs(a, n, 4) cout<<"Found"<<endl;
	else cout<<"Not Found"<<endl;
	return 0;
}
 
