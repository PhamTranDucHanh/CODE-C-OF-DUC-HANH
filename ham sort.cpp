//hàm sort
#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
	return a.size()>b.size();
}
int main(){
	string s;
	int n; cin>>n;
	string a[n];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n, cmp);
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
