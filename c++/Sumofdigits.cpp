#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Sumofdigits(int num){
    int sum  = 0;
    while(num != 0){
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;

}
int main(){
    int number;
    cin>>number;

    cout<<Sumofdigits(number);
}
