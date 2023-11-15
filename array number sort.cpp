#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int a[100];
	getline(cin, s);
	stringstream ss(s);
	string temp;
	int m=0, lon=0;
	while (ss>>temp){
		a[m]=temp.length();
		m++;
	}
	int b[100];
	for (int i=0; i<m; i++){
		b[a[i]]++;
		if (lon<a[i]) lon=a[i];
	}

	for (int j=0; j<lon; j++){
		if (b[j]!=0){
			for (int k=0; k<b[j]; k++){
				cout<<j<<" ";
			}
		}
	}
	return 0;
}
