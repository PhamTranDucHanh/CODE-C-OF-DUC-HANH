//tim kiem phan tu theo test case
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    int n;
    cin>>n;
	for (int i=0; i<n; i++){
		int x; cin>>x;
		m.insert({x,0});
	}
	int test; cin>>test;
	if (m.count(test)!=0) cout<<"Found";
	else cout<<"NOT FOUND"; 
	return 0;
}
