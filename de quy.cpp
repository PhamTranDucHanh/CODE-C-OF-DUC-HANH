#include <bits/stdc++.h>
using namespace std;
int Search(int a[], int n, int x){
	if (n<1) return -1;
	else if (a[n-1]==x) return n;
	Search(a, n-1, x);
}
int main(){
	int n; cin>>n;
	int a[n+1];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int x; cin>>x;
	int test=Search(a, n, x);
	if (test!=-1) cout<<"ITEM FOUND. POS:"<<test;
	else cout<<"ITEM NOT FOUND";
	return 0;
}
