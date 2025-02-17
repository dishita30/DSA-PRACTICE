#include <iostream>
#include <limits.h>

using namespace std;
int getMax(int num[], int n){
    int maxvalue= INT_MIN;
    for (int i = 0; i<n;i++){
       maxvalue = max(maxvalue, num[i]);
    }
    return maxvalue;
}
int getMin(int num[], int n){
    int minvalue= INT_MAX;
    for (int i = 0; i<n;i++){
        minvalue = min(minvalue, num[i]);
        }
    
    return minvalue;   
}
int main(){
   int size;
   cin>>size;
   int num[100];
   for(int i = 0; i<size;i++){
    cin>>num[i];
   }
   cout<<"maximum value is : "<<getMax(num,size)<<endl;
   cout<<"minimum value is : "<<getMin(num,size)<<endl;
}
