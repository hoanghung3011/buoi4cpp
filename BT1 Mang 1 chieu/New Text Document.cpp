#include <iostream>
using namespace std;
void maxmin(int a[],int n){
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    cout << max<< "\t"<< min << endl;
}
void FindX(int a[],int n,int x){
    int i=0;
    for(int i=1;i<0;i++){
        if(X==a[i]){
            cout << "X o vi tri thu: "<< i<<endl;    
        }    
    }
}
void countX(int a[],int n, int x){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            dem++;
        }
    }
    cout << dem<<endl;
}
bool check_SNT(int x){
    int i=2;
    while(i<x){
        if (x%i==0){
            return false;
        }
        i++;
    }
    return true;
}
void FindSNTandSum(int a[],int n){
    int result=0;
    for(int i=0;i<n;i++){
        if(check_SNT(a[i])){
            result+=a[i];
        }
    }
    cout<< result << endl ;
}
void SumODD_SumEVEN(int a[],int n){
    int result1=0;
    int result2=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            result1+=a[i];
        }else{result2+=a[i];}
    }
    cout << "tong cac so chan: "<< result1 << endl;
    cout << "tong cac so le: "<< result2 << endl;
}
void Sort(int a[],int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int t;
        if(a[j]<a[i]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
for(int i=0; i<n;i++){
    cout<< a[i]<<' ';
}
cout<<endl;
}
int main(){

    int a[50];
    int n= rand() %50+1;
    for(int i=1;i<n;i++){
        a[i]=rand() %10000+1;
    }
    int x=rand() %10000+1;;
    maxmin(a,n);
    FindX(a,n,x);// Tim het ra
    countX(a,n,x);
    FindSNTandSum(a,n);
    SumODD_SumEVEN(a,n);
    Sort(a,n);
}

