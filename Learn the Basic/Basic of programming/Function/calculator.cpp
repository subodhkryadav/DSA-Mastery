#include<iostream>
using namespace std;
void calculator(int a,int b){
    int sum=a+b;
    int sub=a-b;
    int mult=a*b;
    int div=a/b;

    cout<<"sum: "<<sum<<endl<<"sub: "<<sub<<endl<<"mult: "<<mult<<endl<<"div: "<<div<<endl;
}
int main(){
    int a,b;
    cout<<"Enter the number of a: ";
    cin>>a;
    cout<<"Enter the number of b: ";
    cin>>b;

    // call the function
    calculator(a,b);
}