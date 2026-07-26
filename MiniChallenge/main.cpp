#include <iostream>
#include "myStack.h"   // uses the provided stack implementation

using namespace std;

int main()
{
    int decimal;
    stackType<int> stack;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0)
    {
        cout << "Binary: 0" << endl;
        return 0;
    }

    int n = decimal;

    // Push remainders onto stack
    while (n > 0)
    {
        int remainder = n % 2;
        stack.push(remainder);
        n /= 2;
    }

    cout << "Binary: ";

    // Pop values to print binary in correct order
    while (!stack.isEmptyStack())
    {
        cout << stack.top();
        stack.pop();
    }

    cout << endl;

    return 0;
}
