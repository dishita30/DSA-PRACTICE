#include<iostream>
using namespace std;
bool search (int arr[], int size, int element)
{
    for (int i=0; i<size; i++){
        if (arr[i]==element){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"enter the element you want to search for";
    int element;
    cin>>element;
    bool found = search(arr,10,element);
    if (found) {
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not there"<<endl;
    }
}