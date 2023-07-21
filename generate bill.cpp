/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/
#include<iostream>
using namespace std;
int main()
{
    float pr;
    int q;
    cin>>q;
    pr = q*100;
    if(pr>1000)
    {
        pr = pr - pr/10;
        cout<<"final price "<<pr;
    }
    else
    {
        cout<<"final price "<<pr;
    }

    return 0;
}
