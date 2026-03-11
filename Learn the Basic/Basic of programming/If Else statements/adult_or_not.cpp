#include<iostream>
using namespace std;
int main(){
// this program is take user intput age and get the response youu are adult or not
    int age;
    cout<<"Enter your age: ";
    if(!(cin>>age)){
        cout<<"please give the interger input: ";
    }


    if (age>=18){
        cout<<"you are adult";
    }
    else{
        cout<<"you are not adult";
    }
}