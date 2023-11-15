#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	int sum;
	getline(cin, s);
	s1="vailonchimen";
	cout<<s1<<endl;
	cout<<sum;
	stringstream ss(s);
	string vcl;
	vector<string> v;
	while (getline(ss,vcl,'.')){
		cout<<vcl<<" ";
		v.push_back(vcl); 
	}
	for (auto i=v.begin(); i<v.end(); i++){
		cout<<*i;
	}
	

	
	return 0;
}
