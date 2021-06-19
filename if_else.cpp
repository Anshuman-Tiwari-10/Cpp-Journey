#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_WORK // not part of code, used to beautify input and output

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    #endif

    int age;
    cin>>age;

    if(age<18){
        if(age<=0){
            cout<<"Invalid age hai yaar";
        }
        else{
            cout<<"You are not an adult yet";
        }
    }
    else if(age>=18 && age<60){
        cout<<"You are not a kid anymore";
    }
    else{
        cout<<"Time to retire and chill";
    }

}