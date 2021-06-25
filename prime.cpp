#include<iostream>
using namespace std;

int main(){

    #ifndef OP_beautify

        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    
    int num1, num2;
    
    cout<<"Enter the range to search for the primes"<<endl;
    cin>>num1>>num2;

    for(int a = num1; a<=num2; a++){

        bool isPrime = true;
        for(int i = 2; i<a/2; i++){
            if(a%i==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime==true){
            cout<<a<<endl;
        }
    }

}