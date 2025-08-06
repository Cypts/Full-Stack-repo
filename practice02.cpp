#include<iostream>
using namespace std;
double powerFunc(int n, double x){
    double result = 1.0;
    if(n==0) return result;
    if(n < 0) {
        x= 1/x;
        n= -1*n;
    }
    while(n>0){
        if(n%2==1) result *= x;
        x*=x;
        n/=2;
    }
    return result;
    
}
int main(){
    int n;
    double x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>n;
    cout<<x<<" to the power "<< n << " is "<<powerFunc(n,x);
}