#include <iostream>
using namespace std;

int main() {
    while(1)
    {
        int height, width;
        cin>>height>>width;

        if(height==0 && width==0)
            break;

        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                if(i==1 || i==height)
                    cout<<"#";
                else if(j==1 || j==width)
                    cout<<"#";
                else
                    cout<<".";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
