#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;

    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row;
            col = col + 1;
            //by cout<<col output is 1
                                   //12
                                   //123
                                   //1234
                                   //12345
            

        }
        cout<<endl;
        row = row + 1;
    }
}