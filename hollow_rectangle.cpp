#include<iostream>
using namespace std;
int main()
{
    int col,row,i,j;
    cin>>col>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
