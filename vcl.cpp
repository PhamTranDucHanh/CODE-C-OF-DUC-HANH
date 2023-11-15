#include <iostream>
#include <string>
using namespace std;
int main(){
	int n, muon;
	cin>>n; 
	int a[n+1];
	for (int i=0; i<n; i++){
		cin>>a[i]; 
	} 
	for (int k=0; k<n; k++){
		for(int j=k+1; j<n; j++){
			if (a[j]<a[k]){
				muon=a[k];
				a[k]=a[j];
				a[j]=muon;
			} 
		} 

	
	}
	for (int m=0; m<n; m++){
		cout<<a[m]<<" "; 
	} 
	 
} 
