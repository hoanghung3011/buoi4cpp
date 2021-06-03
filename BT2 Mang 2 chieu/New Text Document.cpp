#include<iostream>
using namespace std;
void tong(int a[300][300],int b[300][300], int n);
void hieu(int a[300][300],int b[300][300],int n);
void tich(int a[300][300],int b[300][300],int n);
int main(){
	int a[300][300],b[300][300];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin >> a[i][j];
			cin >>b[i][j];
		}
	}
	tong(a,b,n);
	cout << "-----------------"<<endl;
	hieu(a,b,n);
	cout<<"-----------------"<<endl;
	tich(a,b,n);
	return 0;
}
void tich(int a[300][300],int b[300][300],int n){
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			int tong=0;
			for(int x=1;x<n;x++){
			tong+=a[i][x]+b[x][i];
			}
			cout<<tong<<"\t";
		}
		cout<<endl;
	}
}
void hieu(int a[300][300],int b[300][300],int n){
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout<<a[i][j]-b[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void tong(int a[300][300],int b[300][300],int n){
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout<<a[i][j]+b[i][j]<<"\t";
		}
		cout<<endl;
	}
}
