#include <iostream>
#include <list>
using namespace std;\

int main()
{
    int p;
    char G[]={'A','B','C','D','F'};
    cout<<"enter three number";
    cin>>p;
    switch(p)
    {
    case 1:
    if(p>=90)
        cout<<G[0];
        break;
    default:cout<<"no";
    }

    return 0;
}
