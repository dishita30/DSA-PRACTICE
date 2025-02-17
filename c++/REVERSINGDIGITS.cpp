#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  Reversenum(int num){
    int reversed = 0;
    while(num != 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    return reversed;
    


}
int main(){
    int number;
    cout<<" Enter number :"<<endl;
    cin>>number;
    cout<<Reversenum(number)<<endl;
}