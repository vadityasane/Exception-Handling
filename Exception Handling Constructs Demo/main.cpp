#include <iostream>

using namespace std;

int main()
{
    int x=10,y=5,z;

    try

    {
        if(y==0)
            throw 10;
        z=x/y;
        cout<<z<<endl;
    }
    catch(int e)
    {

        cout<<"Division with zero "<<e;
    }
    return 0;
}
