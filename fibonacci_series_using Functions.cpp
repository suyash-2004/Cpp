#include <iostream>
using namespace std;
void fibo(int n)
{
    int t1=0,t2=1,nt;
    for(int i=1;i<=n;i++)
    {
        cout<<t1;
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}

