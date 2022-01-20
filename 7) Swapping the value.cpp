#include<iostream>
using namespace std;

void Swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int x, y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<"The value of x and y before swapping is "<<x<<" and "<<y<<endl;
    Swap(x, y);
    cout<<"The value of x and y after swapping is "<<x<<" and "<<y<<endl;
    return 0;
}
