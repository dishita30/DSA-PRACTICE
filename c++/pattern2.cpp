#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<n-j+1; 
           //note that for i output will be 111 222 333
           //for j output will be 123 123 123
           //for n-j+1 it will be 321 321 321
                       
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}