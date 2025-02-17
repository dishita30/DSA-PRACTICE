#include<iostream>
using namespace std;
int main(){
    int size,arr[100],i,sum=0;
    cout<<"enter the size of the array:";
    cin>>size;
    cout<<"enter"<<size<<"array elements:";
    for (i=0;i<size;i++){
        cin>>arr[i];
        sum= sum +arr[i];
    }
    cout<<"sum of all array elements=" <<sum<<endl;
    
    
}