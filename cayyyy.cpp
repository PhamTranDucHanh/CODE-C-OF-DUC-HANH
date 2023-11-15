#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int x){
	int l=0; 
	int r=n-1;
	while (l<=r){
		int mid=(l+r)/2;
		if (a[mid]==x) return mid;
		else if (a[mid]>x){
			r=mid-1;
		}
		else if (a[mid]<x){
			l=mid+1;
		}
	}
	return -1;
}
int main(){
	int n; cin>>n;
	int a[100];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int x; cin>>x;
	int test=binarySearch(a, n, x);
	if (test!=-1){
		cout<<" FOUND "<<" "<<test+1;
	}
	else cout<<"NOT FOUND";
	
	return 0;
}
