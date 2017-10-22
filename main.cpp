#include <iostream>
#include "MyStack.hpp"

using namespace std;

/*
 *  PROTOTYPES
 */

void clearCIN();

/*
 * END PROTOTYPES
 */

int main() {

    /*

    MyStack<int> testing;

    cout << "push - 25" << endl;
    testing.push(25);

    cout << "push - 35" << endl;
    testing.push(35);

    cout << "push - 45" << endl;
    testing.push(45);

    cout << "push - 55" << endl;
    testing.push(55);


    cout << testing.peek() << endl;
    testing.pop();
    cout << testing.peek() << endl;
    testing.pop();
    cout << testing.peek() << endl;
    testing.pop();
    cout << testing.peek() << endl;

    if(testing.empty()){
        cout << "It's empty" << endl;
    }
    else{
        cout << "It's not empty." << endl;
    }

    testing.clear();


    if(testing.empty()){
        cout << "It's empty" << endl;
    }
    else{
        cout << "It's not empty." << endl;
    }

    */

    MyStack<double> calculator;
    MyStack<char> calculation;

    bool userInput = true;
    double num1, num2 = 0;
    char symbol = ' ';


    while (userInput) {

        cout << "Enter a number : (Q to quit)";
        cin >> num1;
        calculator.push(num1);
        clearCIN();
        cout << endl;
        if (cin.fail()) {

            cout << "Exiting...\n";
            userInput = false;
            break;

        } // if

        cout << "Enter another number: (Q to quit)";
        cin >> num2;
        calculator.push(num2);
        clearCIN();
        cout << endl;
        if (cin.fail()) {

            cout << "Exiting...\n";
            userInput = false;
            break;

        } // if

        cout << "Enter an addition (+), subtraction (-), "
                "multiplication(*) or division (/) symbol to apply that action: (Q to quit)";
        cin >> symbol;
        calculation.push(symbol);
        clearCIN();
        cout << endl;

        if (cin.fail() || symbol == 'q' || symbol == 'Q') {

            cout << "Exiting...\n";
            userInput = false;
            break;

        } else {
            if (symbol == '+') {

            }// if


        }


    }


    cout << "End Program." << endl;

    return 0;
}

void clearCIN() {

    cin.clear();
    cin.ignore(32768, '\n');

}//clearCIN
