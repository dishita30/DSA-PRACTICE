#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Addition(int a , int b){
    while(b!=0){
        
        unsigned carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
   
}
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    cout<<Addition(a,b)<<endl;
}