#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2!=0)  // for odd rows
                cout<<"#";
            else    // for even rows
            {
                if(i%4!=0)  //for row number 2,6,10...
                {
                    if(j==m)
                        cout<<"#";
                    else
                        cout<<".";
                }
                else    //for row number 4,8,12...
                {
                    if(j==1)
                        cout<<"#";
                    else
                        cout<<".";
                }
            }
        }

        cout<<endl;
    }
}
