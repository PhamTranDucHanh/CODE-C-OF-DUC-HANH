#include <iostream>
using namespace std;
int main(){
		int n, muon;
	cin>>n; 
	int a[n];
	for (int i=0; i<n; i++){
		cin>>a[i]; 
	} 
	a[1]=a[2];
	cout<<a[1]; 
} 
