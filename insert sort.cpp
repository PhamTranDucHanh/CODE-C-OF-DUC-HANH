//sap xep chenn
#include <bits/stdc++.h>
using namespace std;
void insert(int a[], int n){
	int vitri, out;
	for (int i=1; i<n; i++){
		out=a[i];
		vitri=i-1;
		while (vitri>=0 && a[vitri]>out){
			a[vitri+1]=a[vitri];
			vitri--;
		}
		a[vitri+1]=out;
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	insert(a, n);
	for (int k=0; k<n; k++){
		cout<<a[k]<<" ";
	}
	return 0;
}
