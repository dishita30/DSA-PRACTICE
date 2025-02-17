#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    char start = 'a';
    while(i<=n){
        int j = 1;
        while (j<=n){
            
            cout<<start;
            j = j + 1;
            start = start + 1;

        }
        cout<<endl;
        i = i +1;
    }
   
}