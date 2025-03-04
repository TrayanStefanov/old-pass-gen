#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;

int main()
{

    int length,symbol,temp;
    string satisfied;
    char a;
    temp='z'-'0'+1;
    srand(time(NULL));
    do
    {
        cout<<"pass length:"<<endl;
        cin>>length;
        for(int i=1; i<=length; i++)
        {
            symbol=rand()% temp + '0';
            a=symbol;
            cout<<a;
        }
        cout<<endl;
        cout<<"do you want a new pass?answer with true or false"<<endl;
        cin>>satisfied;
    }
    while (satisfied!="false");
    return 0;
}
