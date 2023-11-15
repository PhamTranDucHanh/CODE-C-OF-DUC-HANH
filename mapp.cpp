//so lan xuat hien cua phan tu;
#include <bits/stdc++.h>
using namespace std;
int main(){
	map<int, int> m;
	int n, x;
	cin>>n;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		m[x]++;
	}
	for (auto i1=m.begin(); i1!=m.end(); i1++){
		cout<<(*i1).first<<" "<<(*i1).second<<endl;
	}
	return 0;
}
