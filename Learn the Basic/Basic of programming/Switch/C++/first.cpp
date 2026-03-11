#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter Day from 0-7: ";
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"wednessday";
        break;
    
        case 4:
        cout<<"thrusday";
        break;

    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"saturday";
        break;
    
        case 7:
        cout<<"sunday";
        break;
    default :
        cout<<"invalid";
    }
}
