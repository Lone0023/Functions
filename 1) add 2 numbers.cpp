#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c ;
}
int main()
{
    cout<<"This is the programme to add 2 numbers."<<endl<<endl;
    int num1, num2;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your first number: ";
    cin>>num2;
    cout<<endl;
    cout<<"Your sum is: "<<sum(num1,num2)<<endl;
    return 0;
}
