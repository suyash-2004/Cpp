#include <iostream>
using namespace std;
void occ(int a[],int n)
{
    int occ=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[i]<<" At Index = "<<i;
                return;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    occ(a,n);
    return 0;
}
