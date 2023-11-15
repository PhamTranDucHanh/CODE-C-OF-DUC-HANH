#include <bits/stdc++.h>
using namespace std;
int find(int a[], int n, int i){
	for (int j=0; j<n; j++){
		if (a[j]==i) return a[j];
	}
	return -1;
}
int main(){
	int n; cin>>n;
	int a[n+1], b[n+1];
	for (int k=0; k<n; k++){
		cin>>a[k];
	}
	for (int i=0; i<n; i++){
		int x=find(a,n,i);
		b[i]=x;
	}
	for (int z=0; z<n; z++){
		cout<<b[z]<<" ";
	}
	return 0;
}
