#include <iostream>
using namespace std;
int main()
{
    int row,i,j,k=1;
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            cout<<k;
        }
        cout<<"\n";

    }
    return 0;
}
