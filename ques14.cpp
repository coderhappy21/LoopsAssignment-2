#include<iostream>
using namespace std;
int main(){

   //armstrong number
int n ;
cout<<"enter a number : ";
cin>>n;
cout<<"All armstrong numbers bw 1 to "<<n<<" is : "<<endl;
for(int i = 1; i<=n; i++){
int x = i;
int product = 1;
int sum = 0;
int ld = 0;
while(x>0){
ld = x%10;
product = ld*ld*ld;
sum+=product;
x/=10;
}
if(sum == i)
 cout<<i<<endl;
}
}
