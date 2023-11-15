#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int r, int m){
	int i=0, j=0, cnt=0;
	vector<int> v1(a+l,a+m);
	vector<int> v2(a+m, a+r+1);
	while (i<v1.size()&&j<v2.size()){
		if (v1[i]<=v2[j]){
			a[cnt]=v1[i];
			i++; cnt++;
		}
		else{
			a[cnt]=v2[j];
			j++; cnt++;
		}
	}
	while (i<v1.size()){
		a[cnt]=v1[i];
		i++; cnt++;
	}
	while (j<v1.size()){
		a[cnt]=v2[j];
		j++; cnt++;
	}
	for (int j=0; j<cnt; j++){
	    cout<<a[j]<<" ";
	}
}
int main(){
	int n; cin>>n;
	int a[n+1];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int r=n-1;
	int l=0;
	int m=(l+r)/2;
	merge(a, l, r, m);
	return 0;
}
