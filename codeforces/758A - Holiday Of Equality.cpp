#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int max=0;
    int s=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }

    for(int i=0; i<n; i++)
    {
        s+=max-a[i];
    }

    cout<<s;
    return 0;
}
