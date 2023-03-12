#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (sqrt(pow(x, 2) + pow(y, 2)) > 200)
        {
            cout<<"outside"<<endl;
        }
        else
            cout<<"inside"<<endl;
    }
    return 0;
}