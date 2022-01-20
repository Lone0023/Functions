#include<iostream>
using namespace std;

bool check_alpha(char a)
{
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
        return true;
    }
    return false;
}
int main()
{
    char alpha;
    cout<<"Enter your alphabet: ";
    cin>>alpha;
    if(check_alpha(alpha)){
        cout<<"It ia a vowel."<<endl;
    }
    else{
        cout<<"It is a consonant."<<endl;
    }
    return 0;

}
