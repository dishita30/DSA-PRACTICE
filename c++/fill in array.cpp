#include <iostream>
using namespace std;
int main(){
    int array[10];
    fill_n(array,10,3);
    for (int i = 0; i<=10;i++){
        cout<<array[i]<<" ";
    }
}