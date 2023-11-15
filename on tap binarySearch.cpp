#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[] ,int n, int x){
	set<int> ss1;
	for (int i=0; i<n; i++){
		ss1.insert(a[i]);
	}
	for (auto t=ss1.begin(); t!=ss1.end(); t++){
		cout<<*t<<" ";
	}
//	for (auto t2=ss1.begin(); t2!=ss1.end(); t2++){
//		int dem=0;
//		a[dem]=*t2;
//		dem++;
//	}
//	int l=0;
//	int r=n-1;
//	while (l<r){
//		int mid=(l+r)/2;
//		if (a[mid]==x) return mid;
//		else if (a[mid]>x) r=mid;
//		else if (a[mid]<x) l=mid;
//    }
    for (auto t1=ss1.begin(); t1!=ss1.begin(); t1++){
    	int dem=1;
		if (*t1==x){
			cout<<dem;
			break;
		}
		dem++;
    }
}
int main(){
	int n; cin>>n;
	int a[100];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int ans;
	int x; cout<<"Nhap vao so can tim x:";
	cin>>x;
	binarySearch(a, n, x);
}
