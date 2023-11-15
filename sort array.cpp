//sort array
#include <iostream>
using namespace std;
int main(){
	int n, moi; 
	int a[n];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
    }  
	for (int h=0;h<n;h++){
		cout<<a[h]<<" "<<endl;	 		
	} 
	for(int k=0; k<n;k++){
		for (int z=0;z<n;z++){
			if (a[z]>a[z+1]){
				moi=a[z];  
				a[z]=a[z+1];
				a[z+1]=moi; 
			}
		}
	}
	for (int o=0;o<n;o++){
		cout<<a[o]<<" ";
	}
	return 0; 
}
