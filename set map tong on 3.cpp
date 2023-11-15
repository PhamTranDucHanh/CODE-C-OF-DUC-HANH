//dem so phan tu thuoc mot mang ma khong thuoc mang con lai
#include <bits/stdc++.h>
using namespace std;
int main(){
	int dem1=0;
	set<int> s1;
	set<int> s2;
	int n; 
	cout<<"Nhap vao so phan tu s1:";
	cin>>n;
	for (int i=0; i<n; i++){
		int x; cin>>x;
		s1.insert(x);
	} 
	cout<<endl<<"Nhap vao so phan tu s2";
	int m; cin>>m;
	for (int k=0; k<n; k++){
		int x; cin>>x;
		s2.insert(x);
	}
	for (auto i1=s1.begin(); i1!=s1.end(); i1++){
		if (s2.count(*i1)==0) dem1+=1;
	}
	if (dem1!=0) cout<<dem1;
	else cout<<"NOT FOUND";
	int dem2=0;
	cout<<"TEST CASE OF MAP";
	map<int, int> m1; 
	map<int, int> m2;
	cout<<"NHAP VAO PHAN TU CUA M1";
	int p; cin>>p;
	for (int z=0; z<p; z++){
		int x; cin>>x;
		m1.insert(x, 0); 
	}
	cout<<endl<<"NHAP VAO PHAN TU CUA M2";
	int q; cin>>q;
	for (int o=0; o<q; o++){
		int x; cin>>x;
		m2.insert(x, 0); 
	}
	for (auto i2=m1.begin(); i2!=m1.end(); i2++){
		if (m2.count(*i2)!=0) dem2+=1;
	}
	if (dem2==0) cout<<"NOT FOUND";
	else cout<<dem2;
	return 0; 
}
