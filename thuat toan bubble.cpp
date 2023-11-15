//thuat toan sap xeps bot noi 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int min, n, tg;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	min=a[0];
	for (int k=0; k<n; k++){
		for (int j=k; j<n; j++){
			if (a[k]>a[j+1]){
				tg=a[k];
				a[k]=a[j+1];
				a[j+1]=tg;
			}
		}
	}
	for (int i=0; i<n; i++){
		cout<<a[i];
	}
	return 0;
}
