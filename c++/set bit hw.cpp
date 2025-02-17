#include <iostream>
#include <math.h>
using namespace std;
int bitconvert(int n){
    int ans = 0;
    for(int i = 0; i <=n ; i++){
        int bit = n&1;
        ans = ans + bit*pow(10,i);
    }
    return ans;
    


}
int bitcheck(int n){
    int ans = 0;
    int num = bitconvert(n);
    while (num!=0){
        int digit = num%10;
        if(digit == 1){
            ans = ans + digit;
        }
        num = num/10;

    }
    return ans;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b :"<<endl;
    cin>>a>>b;
    int answer = bitcheck(a) + bitcheck(b);
    cout<<"the number of 1's present are :"<<answer;
    
}