#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin>>n>>m;
	int a[n], b[m], c[m+n];
	for (int i=0; i<n; i++) cin>>a[i];
	for (int j=0; j<m; j++) cin>>b[j];
	int i=0, j=0, dem=0;
	while(i<n &&j<m){
		if (a[i]<=b[j]){
			c[dem]=a[i]; i++;
		}
		else {
			c[dem]=b[j]; j++;
		}
		dem++;
	}
	while(i<n){
		c[dem]=a[i]; dem++; i++;
	}
	while (j<m){
		c[dem]=b[j]; dem++; j++;
	}
	for (int k=0; k<m+n; k++){
		cout<<c[k]<<" ";
	}
	return 0;
	
}
