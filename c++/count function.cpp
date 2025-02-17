#include<iostream>
using namespace std;
void Printcounting(int n){
    for(int i = 1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;

    Printcounting(n);

    return 0;
}