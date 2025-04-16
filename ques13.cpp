#include<iostream>
using namespace std;
int main(){

//print sum from 1 to n
//skip if num is divisible by 5
//sum should not more than 300

int n ;
cout<<"enter a number : ";
cin>>n;
int x = 0;
int sum = 0;
int i = 1;
while(i<=n){
if (i%5 != 0) x+=i;
if(x>=300) break;
sum = x;
i++;
}
cout<<"Sum from 1 to "<<n<<" is : "<<sum;
}