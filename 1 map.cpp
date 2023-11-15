#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,dem=0;
	int a[n];
	map<int, int> m;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int k=0; k<n;k++){
		m.insert(a[k],0);
	}
	for (auto i1=m.begin();i1!=m.end();i1++){
		dem+=1;
	}
	cout<<dem;
}
