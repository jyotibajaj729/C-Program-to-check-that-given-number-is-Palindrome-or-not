#include<iostream>
using namespace std;
int palindrome(int n)
{
    int rev=0,num=0;
    while(n>0)
    {
        num=n%10;
        rev=rev*10+num;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int rev=palindrome(n);
    if(n==rev)
    {
        cout<<"The given number is a Palindrome.";
    }
    else
        cout<<"The given number is not a Palindrome.";
    return 0;
}
