#include <iostream>
#include <stdexcept>

using namespace std;
float Division(float a, float b)
{12
    if (b == 0)
    {
        throw runtime_error("Divided by zero.\n");
    }
    return (a / b);
}
int main()
{
    float x, y, result;
    cout << "Enter X: ";
    cin >> x;
    cout << "Enter Y: ";
    cin >> y;
    try
    {
        result = Division(x, y);
        cout << "Ans: " << result << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Exception occurred" << endl
             << e.what();
    }
}