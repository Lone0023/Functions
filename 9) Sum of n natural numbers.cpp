#include<iostream>
using namespace std;
int sum(int n)
{
    int add = 0;
    for(int i = 1; i <= n; i++){
        add=add+i;
    }
    return add;
}
int main()
{
    int n;
    cout<<"Enter the nth term: ";
    cin>>n;
    int c = sum(n);
    cout<<"The sum of first "<<n<<" natural number is "<<c<<endl;
    return 0;
}
