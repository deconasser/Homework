#include <iostream>
using namespace std;
struct type
{
    int arr[10];
};
int main()
{
    type a;
    type b=a;
    cout << a.arr << " " << b.arr << endl;
    return 0;
}