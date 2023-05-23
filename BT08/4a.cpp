#include <iostream>

using namespace std;

int main()
{
   char **s=new char*[1];
   char foo[] = "Hello World";
   *s = foo;
   printf("s is %x\n",s);
   s[0] = foo;
   printf("s[0] is %s\n",s[0]);
   delete []s;
   return(0);
}
