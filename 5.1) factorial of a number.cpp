//loops

#include<iostream>
using namespace std;

int factorial(int n)
{
    int fac=1;
    for(int i=1; i<=n; i++){
        fac=fac*i;
    }
    return fac;
}
int main()
{
    int a;
    cout<<"Enter  your number: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is: ";
    cout<<factorial(a);
    return 0;
}

