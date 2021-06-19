#include<iostream>
using namespace std;

int main(){

    #ifndef op_worker
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    #endif

    int num;
    cout<<"Enter a number"<< endl;
    cin>>num;

    if(num%2 == 0){
        cout<<"Even number"<< endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }
return 0;
}