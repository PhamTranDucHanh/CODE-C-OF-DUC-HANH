#include <bits/stdc++.h>
using namespace std;
void normalSort(int a[], int n){
	for(int i=0; i<n; i++){
		for (int j=i; j<n; j++){
			if (a[j]<a[i]) swap(a[j], a[i]);
		}
	}
	for (int k=0; k<n; k++){
		cout<<a[k]<<" ";
	}
}
void bubbleSort(int a[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			if (a[j]>a[j+1]) swap(a[j], a[j+1]);
		}
	}
	for (int k=0; k<n; k++){
		cout<<a[k]<<" ";
	}
}
void insertSort(int a[],int n){
	int muon,pos;
	for (int i=1; i<n; i++){
		muon=a[i];
		pos=i-1;
		while (pos>=0 && muon<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=muon;
	}
	for (int o=0; o<n; o++){
		cout<<a[o]<<" ";
	}
}
void selectionSort(int a[], int b[], int n){
	int max;
	for(int i=0; i<n; i++){
		b[a[i]]++;
		max=a[i];
	}
	for(int j=0; j<=max; j++){
		while (b[j]>0){
			cout<<j<<" ";
			b[j]--;
		}
	
	}
}	
int main(){
	int a[100];
	int b[100]={0};
	int n; cin>>n;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	selectionSort(a,b, n);
	return 0;
}
