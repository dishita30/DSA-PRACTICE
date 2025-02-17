#include <iostream>
using namespace std;
void printArray(int arr[] , int size){
    cout<<"printing the array"<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;

}
int main(){
    int first[10] = {1,2,3};
    printArray(first,10);
    int second[15] = {5,6};
    printArray(second,15);

}

