#include<iostream>
using namespace std;
int factorial(int a)
{
    int fact =1;
    for(int k = 2; k<=a; k++){
        fact=fact*k;
    }
    return fact;
}
int main()
{
    int n, i, j;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(i=0; i<=n; i++){
        for(j=0; j<=i; j++){
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
