#include<iostream>
using namespace std;
int main(){

   //sum of all even digit of a number 
int n ;
cout<<"enter a number : ";
cin>>n;
int digit = 0;
int sum = 0;
while(n>0){
   digit = n%10;
   if(digit % 2 == 0)
   sum+=digit;
   n/=10;
}

cout<<"Sum of all even digits: "<<sum;
}
