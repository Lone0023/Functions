#include<iostream>
using namespace std;

void disp(int num)
{
    cout<<"The number you entered is: "<<num;
    return ;
}

int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    disp(a);   //Function called
    return 0;
}
