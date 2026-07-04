# include <iostream>
using namespace std;

int factorial(int n){
    if (n==1){
        return 1;
    }
    return n*factorial(n-1);
}

// void factorial(int n, int fact){
//     if (n<1){
//         cout<<fact;
//         return ;
//     }
//     factorial(n-1, fact*n);
// }

int main(){

    int n;
    cout<<"Enter a numbrer to find it's factorial :: ";
    cin>>n;

     cout<<"The factorial of "<<n<<" is "<<factorial(n);

    // cout<<"The factorial of "<<n<<" is ";
    // factorial(n,1);
    
    return 0;
}