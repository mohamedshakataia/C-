#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    char op;
    int x,y,z;
    cout<<"enter the operator\n";
    cin>>x>>op>>y;
    switch(op) {
     case'+':
        z=x+y;
cout<<z;
        break;
      case'-':
        z=x-y;
cout<<z;
        break;
         case'*':
        z=x*y;
cout<<z;
        break;

case'/':        if(y==0){
            cout<<"error";}
        else{
            z=x/y;
        cout<<z;
        }
break;
default:cout<<"no operation";

return 0;
}
break;

    return 0;
}
