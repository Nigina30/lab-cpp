#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char symbol;
    float result = 0;
    cout << "Enter num1 ";
    cin >> num1;
    cout << "Enter num2 ";
    cin >> num2;
    cout << "Enter symbol ";
    cin >> symbol;
    if (symbol == '+')
        result = num1 + num2;
    else if (symbol == '-')
        result = num1 - num2;
    else if (symbol == '*')
        result = num1 * num2;
    else if (symbol == '/')
        result = num1 / num2;

    cout << "result:" << result;

    return 0;
}
