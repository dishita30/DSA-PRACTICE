#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;

    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<"*";
            col = col + 1;
            // for opposite star pattern keep int col = row;
            //and col<=n

        }
        cout<<endl;
        row = row + 1;
    }
}