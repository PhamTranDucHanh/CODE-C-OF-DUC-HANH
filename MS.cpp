#include <bits/stdc++.h>
using namespace std;
void Merge(int a[], int l, int r, int m){
	vector<int> v1={a+l, a+m+1};
	vector<int> v2={a+m+1, a+r+1};
	int i=0, j=0, cnt=0;
	while (i<=m && j<=r){
		if (v1[i]<=v2[j]){
			a[cnt]=v1[i];
			cnt++; i++;
		}
	while (i<=m && j<=r){
		if (v2[j]<v1[i]){
			a[cnt]=v2[j];
			cnt++; j++;
		}
	}
	while(i<=m){
		a[cnt]=v1[i];
		cnt++; i++;
	}
	while (j<=r){
		a[cnt]=v2[j];
		cnt++; j++;
	}
}
void MergeSort(int a[], int l, int r){
	if (l>=r) return;
	int m=(l+r)/2;
	MergeSort(a, m+1, r);
	Merge(a, l, r, m);
}
int main(){
	in
	int n; cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int m=(n-1)/2;
	Merge(a, 0, n-1, m);
	//MergeSort(a, 0, n-1);
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
