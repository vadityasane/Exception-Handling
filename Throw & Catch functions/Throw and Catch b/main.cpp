#include <iostream>

using namespace std;

int Division(int x, int y)
{
   if(y==0)
    throw 10;
   return x/y;
}


int main()
{ int a=50,b=10,c;

try
{
    c=Division(a,b);
    cout<<c<<endl;
}

catch(int e)
{
    cout<<"Division by zero "<<" Error Code: "<<e<<endl;
}

cout<<"------Bye-----";
    return 0;
}
