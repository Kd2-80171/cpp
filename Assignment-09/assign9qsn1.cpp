#include <iostream>
using namespace std;

int Factorial(int num1)
{

    if (num1 < 0)
    {
        throw 1;
    }
    if (num1 == 0 || num1 == 1)
        
    {
        return 1;
    }
    return num1 * Factorial(num1 - 1);
}

int main()
{

    try
    {
        int res;
        res = Factorial(5);
        cout << res << endl;
    }
    catch (int error)
    {
        cout << "something went wrong" << endl;
    }

    return 0;
}