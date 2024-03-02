// #include<iostream>
// using namespace std;
// int main(){
//     int i=100;
//     while(i>=1){
//         cout<<i<<" ";
//         i--;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     while(i=10){
//         cout<<i<<endl;
//         i=i+1;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int x=4,y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y)
            continue;
        else
            cout<<x<<""<<y<<endl;    
    }
}