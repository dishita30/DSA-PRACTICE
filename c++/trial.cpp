#include <iostream>
using namespace std;
void printarray(int arr[],int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";

}cout<<endl;
}

void swaparray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};

    swaparray(even,8);
    printarray(even,8);

    swaparray(odd,5);
    printarray(odd,5);
}