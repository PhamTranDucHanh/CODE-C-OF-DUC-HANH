#include <bits/stdc++.h>
using namespace std;
string x;
int max=0;
void insert(string a[], int m){
	int b[100];
	for (int i=0; i<m; i++){
		b[a[i].length()]++;
	}
	
	for (int j=0; j<size; j++){
		if (b[j]!=0){
			for (int k=0; k<b[j]; k++){
				cout<<j<<" ";
			}
		}
	}
	
}
int main(){
	string a[1000];
	int m=0;
	string s;
	getline(cin, s);
	stringstream ss(s);
	string temp;
	while (ss>>temp){
		a[m]=temp;
		m++;
	}
	insert(a, m);
	return 0;
	
}
