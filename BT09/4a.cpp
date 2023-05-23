#include <iostream>
using namespace std;
int main()
{
    int *a = new int;
    int *t = a;
    cout << t << endl;
    delete a;
    cout << t << endl;
}
