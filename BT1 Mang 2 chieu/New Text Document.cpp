#include<iostream>
using namespace std;
void tong_dong_va_cot(int a[500][500],int n,int m);
void findminmax(int a[500][500],int n,int m);
void findX(int a[500][500],int n,int m,int x);
int main(){
	int a[500][500];
	int n=rand()%10000+1,m=rand()%10000+1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j]=rand()%40000+1;
        }
	}
	tong_dong_va_cot(a,n,m);
	findminmax(a,n,m);
	int x;
	x = rand()%40000+1;
	cout <<"x="<<x<<endl;
	findX(a,n,m,x);
	return 0;
}
void tong_dong_va_cot(int a[500][500],int n, int m){
	for(int x=0;x<n;x++){
		int tong=0;
		for(int y=0;y<m;y++){
			tong+=a[x][y];
		}
		cout<<"Tong cua dong thu "<<x<<" la: "<< tong<<endl;
	}
	for(int x=0;x<m;x++){
		int tong=0;
		for(int y=0;y<n;y++){
			tong+=a[y][x];
		}
		cout<<"Tong cua cot thu "<<x<<" la: "<< tong<<endl;
	}
}
void findminmax(int a[500][500],int n,int m){
	int mx = a[0][0];
	int mn = a[0][0];
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((mn)>a[i][j]) mn=a[i][j];
            if((mx)<a[i][j]) mx=a[i][j];
        }
    }
	cout<< mn<<"\t"<<mx<<endl;
}
void findX(int a[500][500],int n,int m,int x){
	int dem=0;
	for(int i=0;i<n;i++)for(int j=0; j<m;j++){if(x==a[i][j]){dem++;}}
	cout << dem<<endl;
}
