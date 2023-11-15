# include <bits/stdc++.h>
using namespace std;
void insertSort(int a[], int n){
	int vitriao;
	for(int i=1; i<n; i++){
		int x=a[i];
		vitriao=i-1;
		while(vitriao>=0&&x<a[vitriao]){
			a[vitriao+1]=a[vitriao];
			vitriao--;
		}
		a[vitriao+1]=x;
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void bubbleSort(int a[], int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]) swap(a[j], a[j+1]);
		}
	}
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void SelectSort(int a[], int n){
	for(int i=0; i<n; i++){
		for (int j=i; j<n; j++){
			if (a[i]>a[j]) swap(a[i],a[j]);
		}
	}
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
int binarySearch(int a[], int n, int x){
	int left=0;
	int right=n-1;
	while (left<=right){
		int mid=(right+left)/2;
		if (a[mid]==x) return mid+1;
		else if(a[mid]>x){
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	return -1;
}
int main(){
	int dem[1000];
	int a[100];
	int n; cin>>n;
	int m=0;
	for (int i=0; i<n; i++){
		cin>>a[i];
		dem[a[i]]++;
		m=max(m, a[i]);
	}
	for (int j=0; j<=m; j++){
		if (dem[j]!=0) cout<<j<<" ";
	}
//	int x; cin>>x;
//	int result=binarySearch(a, n, x);
//	if (result ==-1) cout<<"NOT FOUND";
//	else cout<<result;
//	SelectSort(a, n);
//	cout<<"\n";
	//bubbleSort(a, n); cout<<"\n";
//	insertSort(a, n);
	return 0;
	
}
