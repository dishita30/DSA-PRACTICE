#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int>&arr, int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}
void RotateArray(vector<int>&arr , int d){
    int n = arr.size();
    d = d%n;
    Reverse(arr,0,d-1);
    Reverse(arr,d-1,n-1);
    Reverse(arr,0,n-1);
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int d;
    cin>>d;
    RotateArray(arr,d);
    for(int i = 0; i<n; i++){
        cout<<arr[i];
       
    }
}