#include <iostream>
using namespace std;

int main()
{
    for(int i=1; ; i++)
    {
        int x;
        cin>>x;
        if(x<1)
            break;
        cout<<"Case "<<i<<": "<<x<<endl;
    }

    return 0;
}
