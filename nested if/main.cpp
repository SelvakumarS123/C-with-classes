#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter 3 nos"<<endl;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"max is "<<a<<endl;
    }
    else if(b>c)
        {
        //        if(b>a && b>c)
            cout<<"max is "<<b<<endl;
        }
        else
        {
        cout<<"max is "<<c<<endl;
        }
    return 0;
}



















