#include<iostream>
using namespace std;
int counter = 0; 

void fun() {
    if (counter == 4) return;
    cout << counter << endl;
    counter++;
    fun();
}

int main(){
    fun();
    return 0;
}