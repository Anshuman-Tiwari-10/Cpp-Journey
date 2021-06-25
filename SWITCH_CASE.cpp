#include<iostream>
using namespace std;

int main() {

    int num1, num2; 
    char op;
    cout<<"Enter 2 Numbers: "<<endl;
    cin>>num1>>num2;

    cout<<"Enter the operation: "<<endl;
    cin>> op;

    switch(op) {
        case '+':
            cout<< num1 + num2 <<endl;
            break;
        
        case '-':
            cout<< num1 - num2 <<endl;
            break;

        case '*':
            cout<< num1 * num2 <<endl;
            break;

        case '/':
            cout<< num1 / num2 <<endl;
            break;
        
        case '%':
            cout<< num1 % num2 <<endl;
            break;

        default:
            cout<<"Invalid operation"<<endl;
            break;
            
    }

    return  0;
}