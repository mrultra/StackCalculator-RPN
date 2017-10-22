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


        if(calculator.size() != 1) {
            cout << "Enter a number : (Q to quit)";
            cin >> num1;
            if (cin.fail()) {

                cout << "Exiting...\n";
                userInput = false;
                break;

            } // if
            cout << endl;
            calculator.push(num1);
        } // if

        cout << "Enter another number: (Q to quit)";
        cin >> num2;
        if (cin.fail()) {

            cout << "Exiting...\n";
            userInput = false;
            break;

        } // if
        cout << endl;
        calculator.push(num2);

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
            while (calculator.size() != 1) {
                if (calculation.peek() == '+') {

                    num1 = calculator.peek();
                    calculator.pop();
                    num2 = calculator.peek();
                    calculator.pop();
                    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                    calculator.push((num1 + num2));
                    calculation.pop();

                }// if
                else if (calculation.peek() == '-') {

                    num1 = calculator.peek();
                    calculator.pop();
                    num2 = calculator.peek();
                    calculator.pop();
                    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                    calculator.push((num1 - num2));
                    calculation.pop();
                }// else if
                else if (calculation.peek() == '*') {

                    num1 = calculator.peek();
                    calculator.pop();
                    num2 = calculator.peek();
                    calculator.pop();
                    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                    calculator.push((num1 * num2));
                    calculation.pop();
                }// else if
                else if (calculation.peek() == '/') {

                    num1 = calculator.peek();
                    calculator.pop();
                    num2 = calculator.peek();
                    calculator.pop();
                    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                    calculator.push((num1 / num2));
                    calculation.pop();
                }// else if
                else {
                    cout << "Something went wrong." << endl;
                    for (int i = 0; i < calculator.size(); ++i) {
                        cout << "\t" << calculator.peek() << endl;
                    } // for !! Display Stack  !!
                    break;
                }// else
            }// while
        } // else

    } // while


    cout << "End Program." << endl;

    return 0;
}

void clearCIN() {

    cin.clear();
    cin.ignore(32768, '\n');

}//clearCIN
