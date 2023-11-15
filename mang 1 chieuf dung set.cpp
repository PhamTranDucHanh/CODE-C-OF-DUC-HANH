# include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x; 
	cin>>n;
	int a[n+1];
	set<int> s1;
	cout<<"Nhap vao mang so nguyen duong:";
	for (int i=0; i<n; i++){
		int x; cin>>x;
		s1.insert(x);
	}
	int minset=*s1.begin();
	s1.erase(s1.begin());
	int afterMinset=*(s1.begin());
	int khoangcach=abs(minset-afterMinset);
    cout<<khoangcach;
    return 0;
}
