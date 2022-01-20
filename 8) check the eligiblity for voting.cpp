#include<iostream>
using namespace std;

bool check(int a)
{
    if(a>=18){
       return true;
    }
    return false;
}
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(check(age)){
        cout<<"You are eligible for voting."<<endl;
    }
    else{
        cout<<"You are not eligible for voting."<<endl;
    }
    return 0;
}
