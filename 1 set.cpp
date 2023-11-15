#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, dem=0;
	int a[n+1];
	cin>>n;
	set<int> sets;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int k=0;k<n;k++){
		sets.insert(a[k]);
	}
	for (set<int>::iterator i1=sets.begin();i1!=sets.end();i1++){
		dem+=1;
	}
	cout<<dem;
	return 0;
}
