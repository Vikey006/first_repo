#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,r;
    cout<<"Enter a number to check Armstrong number ::";
    cin>>n;
    if (n<0){
        cout<<"Enter positive number";
    }
    
    int sum=0,d=0;
    int temp1=n;
    int temp=n;
    while(temp1!=0){
        temp1/=10;
        ++d;
    }
    
    while (temp!=0)
    {
        r=temp%10;
        sum=sum+pow(r,d);
        temp=temp/10;
        cout<<r<<"\t"<<sum<<"\t"<<temp<<"\t"<<endl;
    }
    if(sum==n){
        cout<<"The number is Armstrong";
    }
    else cout<<"The number is not Armstrong";
         
    return 0;
}