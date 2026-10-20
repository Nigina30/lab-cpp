#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter N:";
    cin>>n;
    long  a=0, b=1;
    long  sum;
    cout<<"Fibonacci numbers";
    for(int i=0;i<n;i++){
        cout<<a<<"";
        sum =a+b;
        a=b;
        b=sum;
    
    }
clout<<endl;

}
