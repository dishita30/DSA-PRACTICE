#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    
    while(i<=n){
        int j = 1;
        while (j<=i){

            char start = 'a'+ i - 1;
            cout<<start;
            j = j + 1;
            start = start + 1;

        }
        cout<<endl;
        i=i+1;
    }
   
}