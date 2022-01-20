#include<iostream>
using namespace std;

int maximum(int x, int y, int z)
{
    if(x>y){
        if(x>z){
            return x;
    }
    return z;
    }
    else{
        if(y>z){
            return y;
        }
        return z;
    }
}
int main()
{
    int a, b, c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    int maxi= maximum(a,b,c);
    cout<<"The maximum of three numbers is: "<<maxi<<endl;
    return 0;
}
