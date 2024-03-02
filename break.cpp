// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a n : ";
//     cin>>n;
//     for(int i=n/2; i>=1; i--){
//         if(n%i==0){
//                 cout<<i<<" ";
//                 break;
//         }
//     }
// }  

//composite number and prime 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a n : ";
//     cin>>n;
//     bool flag = true;
//     for(int i=2; i<=n/2; i++){
//         if(n%i==0){
//                 flag = false;
//                 break;
//         }
//     }
//     if(n==1) cout<<"Neither Prime Nor Composite";
//     else if(flag==true) cout<<"Prime";
//     else cout<<"composite";
// }  