#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[2*n];
	int b[2*m];
	for (int i=0; i<2*n;i+=2){
		cin>>a[i];
	}
	for (int k=0; k<2*m;k+=2){
		cin>>b[k];
	}
	int c[(m+n)*2];
	for (int z=0;z<m+n;z++){
		if (a[z]>b[z]){
			c[z]=b[z];
			c[z+1]=a[z];
		}
		else if (b[z]<a[z]){
			c[z]=a[z];
			c[z+1]=b[z];
		}
		else{
			c[z]=a[z];
			c[z+1]=a[z];
		}
		
	}
	for (int x=0;x<(m+n)*2;x+=2){
		cout<<a[x]<<" ";
	}
	return 0;
}
