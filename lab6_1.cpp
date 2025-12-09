#include<iostream>
using namespace std;

int main(){
    int number = 1;
    int Even = 0;
    int Odd = 0;

    while(number != 0){
        cout << "Enter an integer: ";
        cin >> number;

        if (number == 0){
            break;
        }
        else if (number % 2 == 0){
            Even++;
        }
        else {
            Odd++;
        }
    }

    cout << "#Even numbers = " << Even << "\n";
    cout << "#Odd numbers = " << Odd ;
    return 0;
}