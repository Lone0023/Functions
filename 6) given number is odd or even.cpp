#include<iostream>
using namespace std;
bool check(int n)
{
    if(n%2==0){
        return true;
    }
    return false;
}
int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    if(check(a)){
        cout<<"It is an even number."<<endl;
    }
    else{
        cout<<"it is an odd number."<<endl;
    }
    return 0;

}
