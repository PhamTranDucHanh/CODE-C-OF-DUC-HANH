//dem so luong phan tu khac nhau hehe
#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, n;
	cin>>n;
	set<int> s;
	for (int i=0; i<n; i++){
		cin>>x;
		s.insert(x);
	}
	int size= s.size();
	cout<<size<<endl;
	map<int, int> m;
	cout<<"TEST CASE OF MAP:"<<endl;
	for (int k=0; k<n; k++){
		cin>>x;
		m.insert({x, 0}); 
	}
	int size1=m.size();
	cout<<size1;
	return 0;
}
