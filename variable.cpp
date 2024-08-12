//exampal for reference variable

#include <iostream>
using namespace std;
int &findmax(int &a, int &b);
int main()
{
    int x = 10;
    int y = 20;
    int &max = findmax(x, y);
    cout << "before changing max :" << endl;
    cout << "a =" << x << "b =" << y << "max =" << max << endl;
    max = 50;
    cout << "after changing max :" << endl;
    cout << "a =" << x << "b =" << y << "max =" << max << endl;
    return 0;
}
int&findmax(int &a,int &b){
    if (a>b)
    {
        return a;
    }
    else
    return b;
    
}
