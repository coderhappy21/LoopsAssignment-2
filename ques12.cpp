#include<iostream>
using namespace std;
int main(){

   // reverse of given digit
int n ;
cout<<"enter a number : ";
cin>>n;

int rev = 0;
while(n>0){
    rev*=10;
   rev += n%10;
   n/=10;
}


cout<<"reverse of given number: "<<rev;
}
