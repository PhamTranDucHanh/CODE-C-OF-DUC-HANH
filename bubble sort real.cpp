//sap xep noi bot
#include <bits/stdc++.h>
using namespace std;
void bubble(int a[], int n){
	for (int i=0; i<n; i++){
		for (int k=0; k<n-i-1; k++){
			if (a[k]>a[k+1]) swap(a[k], a[k+1]);
		}
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	bubble(a, n);
	for (int j=0; j<n; j++){
		cout<<a[j]<<" ";
	}
	return 0;
}
