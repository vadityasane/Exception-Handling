#include <iostream>

using namespace std;

class MyException
{
    //We can throw a object of a class
};

int Division(int x, int y) throw(MyException)
{
    if(y==0)
        throw MyException();
    return x/y;

}

int main()
{
   int a=40,b=0,c;

    try
    {
        c=Division(a,b);
        cout<<c;
    }

    catch(MyException e)
    {

        cout<<"Division by Zero";
    }

    return 0;
}
