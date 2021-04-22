#include <iostream>
#include <string>

using namespace std;

#include "consoleapi.h"

int main(){
    true;
    float z;
    int w;
    float x, y;
    float pow;
    float sum;
    float subtract;
    float multiply;
    float divide;
    while(true){
        cout << "-----------------------------Calculator-----------------------------\n";
        cout << "1 = Add, 2 = Subtract, 3 = Multiply, 4 = Divide, 5 = Power \n";
        cout << "Enter a number from the following above: ";
        cin >> z;
        if(z == 1){
            cout << "Enter a first number: ";
            cin >> x;
            cout << "Enter a second number: ";
            cin >> y;
            sum = x + y;
            cout << "The number is: ";
            cout << sum;
            cout << "\n";
            }
        else if(z == 2){
            cout << "Enter a first number: ";
            cin >> x;
            cout << "Enter a second number: ";
            cin >> y;
            subtract = x - y;
            cout << "The number is: ";
            cout << subtract;
            cout << "\n";
            }
        else if(z == 3){
            cout << "Enter a first number: ";
            cin >> x;
            cout << "Enter a second number: ";
            cin >> y;
            multiply = x * y;
            cout << "The number is: ";
            cout << multiply;
            cout << "\n";
            }
        else if(z == 4){
            cout << "Enter a first number: ";
            cin >> x;
            cout << "Enter a second number: ";
            cin >> y;
            divide = x/y;
            cout << "The number is: ";
            cout << divide;
            cout << "\n";
            }
        else if(z == 5){
            cout << "Enter a number to power: ";
            cin >> x;
            cout << "Select a number to power by the first number: ";
            cin >> w;
            pow = powf(x,w);
            cout << "The number is: ";
            cout << pow;
            cout << "\n";
            }
        else{
            cout << "Syntax Error \n";
            }
        cout << "--------------------------------------------------------------------\n\n";
        }
    }