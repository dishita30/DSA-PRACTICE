#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Subtraction(int a , int b){
    while(b != 0){
         int borrow = ~ a & b;
         a = a ^ b;
         b = borrow << 1 ;
    }
  return a;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<Subtraction(a,b)<<endl;

}
   