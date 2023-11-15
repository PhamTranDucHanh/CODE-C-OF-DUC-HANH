#include <bits/stdc++.h>
using namespace std;
int main(){
	set<int> s1;
	set<int> s2;
//	s1.insert(1);
//	s1.insert(2);
//	s1.insert(4);
//	s2.insert(1);
//	s2.insert(3);
//	s2.insert(4);
    int m,n;
	int a[3];
    int c[6];
	int b[3];
    for (auto x:n){
    	cin>>a[x];
	}
	for (auto y:m){
		cin>>b[m];
	}
//	for (auto i1:n){
//		s1.insert(a[i1]);
//	}
//	for (auto i1:m){
//		s2.insert(b[m]);
//    }  
    c=a+b;
    for (auto i:6){
    	s1.insert(a[i]);
	}
	for (auto i=s1.begin();i<s1.end();i++){
		cout>>*i;
	}
	
}	
