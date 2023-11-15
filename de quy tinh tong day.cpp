#include <bits/stdc++.h>
using namespace std;
int dequy(int n){
	if (n==1) return 1;
	else n+dequy(n-1);
}
int main(){
	int n; cin>>n;
	cout<<"TONG ="<<dequy(n);
	return 0;
}
