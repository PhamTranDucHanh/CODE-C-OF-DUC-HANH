#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int r){
	int i=0; int j=0;
	int mid=(l+r)/2;
	vector<int> v1;
	vector<int> v2;
	for (int k=0; k<=mid; k++){
		v1.push_back(a[k]);
	}
	for (mid+1; mid<=r; mid++){
		v2.push_back(a[mid+1]);
	}
	while (i<v1.size() && j<v2.size()){
		if (v1[i]<=v2[j]){
			a[l]=v1[i]; i++; l++;
		}
		else if (v1[i]>v2[j]){
			a[l]=v2[j]; j++; l++;
		}
	}
	while(i<v1.size()){
		a[l]=v1[i]; l++; i++;
	}
	while (j<v2.size()){
		a[l]=v2[j]; l++; j++;
	}
}
void mergeSort(int a[], int l, int r){
	if (l>=r) return;
	int m=(l+r)/2;
	mergeSort(a, l, m);
	mergeSort(a,m+1,r);
	merge(a, l, r);
}

int main(){
	int a[100];
	int n; cin>>n;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	mergeSort(a, 0, n);
	for (int j=0; j<n; j++){
		cout<<a[j]<<" ";
	}
	return 0;
}
