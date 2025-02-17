 #include <iostream>
 using namespace std;
 bool IsEven(int a){
    //for even
    if(a&1){
        return 0;
    }
    //odd
    return 1;
 }
 
 int main(){
    int num;
    cin>>num;
    if (IsEven(num)){
        cout<<"number is even :"<<num<<endl;
        
    }
    else{
        cout<<"number is odd : "<<num<<endl;
    }
 }