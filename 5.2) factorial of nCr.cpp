#include<iostream>
using namespace std;

int factorial(int a)
{
    int fac=1;
    for(int i=1; i<=a; i++){
        fac=fac*i;
    }
    return fac;
}

/*
nCr = n!/r!(n-r)!
*/

int main()
{
    int n, r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<endl;
    int Your_ans = (factorial(n)/(factorial(r)*factorial(n-r)));
    cout<<"The value of "<<n<<"C"<<r<<" is: ";
    cout<<Your_ans<<endl;
    return 0;

}
