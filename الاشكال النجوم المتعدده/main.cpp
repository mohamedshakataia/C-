#include <iostream>

using namespace std;

int main()
{
    for(int linenumber=1;linenumber<=5;linenumber++)
    {
       for(int i=1;i<=5-linenumber;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=2*linenumber-1;i++)
        {
            cout<<"*";
        }
      cout<<endl;
    }
    return 0;
}
