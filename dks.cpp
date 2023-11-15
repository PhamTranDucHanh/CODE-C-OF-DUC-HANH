#include <bits/stdc++.h>
using namespace std;
void demsort(int a[], int b[], int n){
	for (int i=0; i<n; i++){
		b[a[i]]++;
	}
	for (int k=0; k<n; k++){
		if (b[k]!=0){
			for (int j=0; j<b[k]; j++){
				cout<<k<<" ";
			}
		}
	}
}
int main(){
	int n; cin>>n;
	int a[n+1], b[1000];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	demsort(a, b, n);
	return 0;
}
