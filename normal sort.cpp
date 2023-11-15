#include <bits/stdc++.h>
using namespace std;
void bubble(string a[],int m){
	for (int i=0; i<m-1; i++){
		for(int k=i; k<m-i-1; k++){
			if ((a[k].length())>(a[k+1].length())) swap(a[k], a[k+1]);
			cout<<a[k]<<" "<<a[k+1]<<endl;
		}
	}
}
int main(){
	string a[100];
	cin.ignore();
	string str;
	getline (cin, str);
	stringstream ss(str);
	string temp;
	int m=0;
	while (ss>>temp){
		a[m]=temp;
		m++;
	}
	for (int j=0; j<m; j++){
		cout<<a[j]<<" ";
	}
	bubble(a, m);
	for (int i=0; i<m; i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
}
