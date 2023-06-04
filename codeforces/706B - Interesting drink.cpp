#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0; i<n; i++)
        cin>>x[i];

    int q;
    cin>>q;
    int m[q];
    int count;

    for(int i=0; i<q; i++)
    {
        cin>>m[i];

        count=0;

        for(int j=0; j<n; j++)
        {
            if(m[i]>=x[j])
                count++;
        }

        cout<<count<<endl;
    }

    return 0;
}
