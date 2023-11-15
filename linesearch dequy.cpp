#include<bits/stdc++.h>
using namespace std;
bool lineSearch(int a[], int x, int n){
	if (a[n]==x) return true;
	lineSearch( a,  x, n-1);
	return false;
}
int main(){
	int n; cin>>n;
	int a[n+1];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int x; cin>>x;
	if (lineSearch(a,x,n)) cout<<"True";
}
