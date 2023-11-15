#include <bits/stdc++.h>
using namespace std;
void Merge(int a[], int l, int m, int r){
	vector<int> v1(a+l, a+m+1);
	vector<int> v2(a+m+1, a+r+1);
	int j=0, i=0;
	while (i<v1.size() && j<v2.size()){
		if (v1[i]<=v2[j]){
			a[l]=v1[i]; i++; l++;
		}
		else{
			a[l]=v2[j]; j++; l++;
		}
	}
	while (i<v1.size()){
		a[l]=v1[i];
		l++; i++;
	}
	while (j<v2.size()){
		a[l]=v2[j];
		l++; j++;
	}
}
void MergeSort(int a[], int l, int r){
	if (l>=r) return;
	int m=(l+r)/2;
	MergeSort(a, l, m);
	MergeSort(a, m+1, r);
	Merge(a, l, m, r);
}
int main(){
	int a[1000];
	int n; cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
//	int m=(n-1)/2;
//	Merge(a, 0, n-1, m);
	MergeSort(a, 0, n-1);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
