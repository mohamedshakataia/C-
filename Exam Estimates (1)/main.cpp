#include <iostream>

using namespace std;

int main()
{
    float p;
    char G;
    cout<<"enter the number";
    cin>>p;
    if(p>=90)
        G='A';
    if(p<90&&p>80)
        G='B';
    if(p<80&&p>70)
        G='C';
    if(p<70&&p>60)
        G='D';
    if(p<60)
        G='F';
      cout<<"the corresponding grad is:"<<G<<endl;

    return 0;
}
