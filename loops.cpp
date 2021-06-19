#include<iostream>
using namespace std;

int main(){

    #ifndef ignore
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int size, sum = 1;
    cout<<"Enter the limit"<<endl;
    cin>>size;
    cout<<"you entered:"<<size<<endl;

    for (int i= 1; i<=size; i++){
        sum = (sum + i)*i/sum;
        cout<<"Sum for this iteration is : "<<sum<<endl;
    }

    

    return 0;
}