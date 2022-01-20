// 0,1,1,2,3,5,7,12,19............
//next term = (n-2) + (n-1)
#include<iostream>
using namespace std;
void fib(int n)
{
    int t1,t2;
    t1 = 0;
    t2 = 1;
    int nextterm;

    for(int i = 1; i<=n; i++){
        cout<<t1<<endl;
        nextterm = t1 + t2;
        t1=t2;
        t2=nextterm;
    }
    return;
}
int main()
{
     int a;
     cout<<"Enter your nth term: ";
     cin>>a;
     cout<<endl;
     cout<<"The fibonacci series till "<<a<<" is: "<<endl;
     fib(a);
     return 0;
}
