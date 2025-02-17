#include <iostream>
using namespace std;
void fibonacci(int n){
    int a= 0;
    int b=1;
    cout<<a<< " "<< b<<" ";
    for(int i = 0;i<=n;i++){
        int next_number = a+b;
        cout<<next_number<<" ";
    
    a = b;
    b = next_number;
    }
    return;


}


int main(){
    int n;
    cout<<"enter a value till where you want to print fibonacci series till : "<<endl;
    cin>>n;

    fibonacci(n);
}