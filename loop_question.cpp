// COUNT OF DIGITS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int count=0;
//     while (n!=0)
//     {
//         n=n/10;
//         count++;
//     }
//     cout<<count;
//}

// SUM OF THE DIGITS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int sum=0;
//     while (n!=0)
//     {
//         int ld=n%10;
//         n=n/10;
//         sum += ld;
//     }
//     cout<<sum;
// }

// PRODUCT OF DIGITS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int produt=1;
//     while (n!=0)
//     {
//         int ld=n%10;
//         n=n/10;
//         produt *= ld;
//     }
//     cout<<produt;
// }

// SUMOF ALL EVEN DIGITS OF A NUMBER 
// #include <iostream>
// using namespace std;

// int main() {
//   int n, sum = 0;
//   cout << "Enter a number: ";
//   cin >> n;

//   while (n > 0) {
//     int digit = n % 10;
//     if (digit % 2 == 0) {
//       sum += digit;
//     }
//     n /= 10;
//   }

//   cout << "The sum of all even digits is "<< sum << endl;

//   return 0;
// }



// wap to print reverse of a number in C++
// #include <iostream>
// using namespace std;
// int main() {
//     int n, r=0, rem;
//     cout<< "Enter a number: ";
//     cin>> n; 
//     while (n!=0)
//     {
//         rem=n%10;
//         r=r*10+rem;
//         n /=10;
//     }
//     cout<<"Reverse Number : "<<r;
// }



// WAP T0 SUM OF N NUMBERS  
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<< "Enter a number: ";
//     cin>>n;
//     int sum=0;
//     for (int i = 1; i <=n ; i++)
//     {
//         sum += i;
//     }
//     cout<<sum;
// }


//PRINT THE SUM OF A GIVEN NUM 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<< "Enter a number: ";
//     cin>>n;
//     int sum=0;
//     for (int i = 1; i <=n ; i++)
//     {
//         sum += i;
//     }
//     cout<<sum;   
// }


//PRINT THE FACTORIAL OF A GIVEN NUM 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<< "Enter a number: ";
//     cin>>n;
//     int product=1;
//     for (int i = 1; i <=n ; i++)
//     {
//         product *= i;
//     }
//     cout<<product;   
// }


//WAP TO PRINT ASCII VALUE OF 26 ALPHABETS USING WHILE LOOP
#include<iostream>
using namespace std;
int main() {
  int i = 65; // ASCII value of 'A'
  while (i <= 90) { // ASCII value of 'Z'
    cout << char(i) << " = " << i << endl;
    i++;
  }
  return 0;
}

// int main() {
//   int i = 1; // ASCII value of 'A'
//   while (i <= 100) { // ASCII value of 'Z'
//     cout << char(i) << " = " << i << endl;
//     i++;
//   }
//   return 0;
// }
