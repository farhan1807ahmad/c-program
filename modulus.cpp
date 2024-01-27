//  modulus bascially is a remainder  symbol is %
//  and divided is bascially a quotient symbol is / 
//  x%y is a remainder when "x" is divided by "y"

// 1. a%b = a [ if a < b ]
// 2. a%a = 0
// 2. a%(-b) = a%b
// 2. (-a)%b = -[a%b]

#include<iostream>
using namespace std;
int main(){
    int x=-3;
    int y=9;
    // cout<<"Enter the first number : ";
    // cin>>x;
    // cout<<"Enter the second number : ";
    // cin>>y;
    cout<<"Modulus : "<<x%y;
}    