#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int powerofnum(int base, int exponent){
    int result = 1;
    while(exponent != 0){
        result = result * base;
        exponent --;
    }
    return result;
}
int main(){
    int base;
    cin>>base;
    int power;
    cin>>power;
    cout<< powerofnum(base,power)<<endl;
}
