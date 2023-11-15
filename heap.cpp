#include <bits/stdc++.h>
using namespace std;
void heapify(int a[],int n, int x){
	int l=x*2+1;
	int r=x*2+2;
	int max=x;
	if (l<n && a[l]>a[max]){
		max=l;
	}
	if (r<n&& a[r]>a[max]){
		max=r;	
	}
	if (max!=x){
		swap(a[max], a[x]);
		heapify(a, n, max);
	}
}
void heap(int a[], int n, int kq[]){
	for (int i=n; i>=0; i--){
		swap(a[0], a[i]);
		cout<<a[i]<<" "<<endl;
		int t=(i-1)/2-1;
		heapify(a,i,t);
		cout<<a[i]<<" "<<endl;
		int cnt=0;
		kq[cnt]=a[i]; cnt++;
	}
}
int main(){
	int a[100], kq[1000];
	int n; cin>>n;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	for (int t=n/2-1; t>=0; t--){
		heapify(a, n, t);
	}
	for (int i=0; i<n; i++){
		cout<<i<<" "<<a[i]<<endl;
	}
	heap(a, n-1, kq);
	for (int i=0; i<n; i++){
		cout<<kq[i]<<" ";
	}
	return 0;
}
