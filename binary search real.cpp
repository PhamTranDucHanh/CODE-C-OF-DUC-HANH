#include <bits/stdc++.h>
using namespace std;
int dem=0,vitricuoi, vitridau=0;
bool bs(int a[], int n, int x){
	int l=0, r=n-1, m=(l+r)/2;
	while (l<=r){
		if (a[m]==x) return true;
		else if (a[m]>x){
			r=m-1;
			m=(l+r)/2;
		}
		else{
			l=m+1;
			m=(l+r)/2;
		}
	}
	return false;
}
int fp(int a[], int n, int x){
	int l=0, r=n-1, m=(l+r)/2;
	while (l<=r){
		if (a[m]==x){
			vitridau=m+1;
			r=m-1;
			m=(l+r)/2;
		}
		else if (a[m]>x){
			r=m-1;
			m=(l+r)/2;
		}
		else{
			l=m+1;
			m=(l+r)/2;
		}
	if (vitridau!=0) return vitridau;	
	}
}
int main(){
	int n, a[n],x;
	multiset<int> s;
	cout<<"Nhap vao so phan tu cua mang: ";
	cin>>n;
	cout<<endl<<"Nhap vao so can tim x=";
	cin>>x;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	for (int k=0; k<n; k++){
		s.insert(a[k]); 
	}
	for (auto i1=s.begin(); i1!=s.end(); i1++){
		a[dem]=*i1;
		dem+=1;
	}
//	for (auto i2=s.begin(); i2!=s.end(); i2++){
//		cout<<*i2<<" ";
//    }   
	for (int h=0; h<n; h++){
		cout<<a[h]<<" ";
	}
	cout<<endl;
	if (bs(a, n, x)) cout<<"FOUND"<<endl;
	else cout<<"NOT FOUND"<<endl;
	fp(a, n, x);
	cout<<vitridau;
	return 0;
}
