#include <iostream>

using namespace std;

int main()
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}

int main()
{
    int a[3]={1,2,3};
    for (int* cp=a;cp<a+3;cp++)
    {
        cout << cp << " : " << *cp << endl;
    }
    return 0;
}

int main()
{
    double a[3]={1,2,3};
    for (double* cp=a;cp<a+3;cp++)
    {
        cout << cp << " : " << *cp << endl;
    }
    return 0;
}

int main()
{
    double a[3]={1,2,3};
    for (double* cp=a;cp<a+3;cp=cp+2)
    {
        cout << cp << " : " << *cp << endl;
    }
    return 0;
}
