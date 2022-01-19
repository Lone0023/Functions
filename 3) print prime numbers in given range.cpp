#include<iostream>
#include<cmath>
using namespace std;

bool prime(int num)
{
    for(int j=2; j<(num); j++){
    if(num%j==0){
        return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cout<<"Enter your range: ";
    cin>>a>>b;
    cout<<endl<<"The prime numbers from "<<a<<" to "<<b<< " is:"<<endl;
    for(int i = a; i <= b; i++){
        if(prime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
