#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    while (cin >> a >> op >> b)
    {
        if (op == '?')
            break;
        switch (op)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
        }
    }
}
