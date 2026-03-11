#include<iostream>
#include<queue>
using namespace std;

void queue_implimentation(){
    queue<int>q;

    // insert some sort of the element in the queue
    q.push(5);
    q.push(10);
    q.push(20);
    q.push(40);

    cout<<"see the back into the queue: "<<q.back()<<endl;

    // some sort fo the operation on the queue
    q.back() +=5;
    // now see this time back element of the queue
    cout<<"After adding something then back is : "<<q.back()<<endl;

    // now see the front element 
    cout<<"Front element of the queue is : "<<q.front()<<endl;

    // lets pop one iten then
    q.pop();

    cout<<"After use the one pop method then front is : "<<q.back()<<endl;

    // now add one item to the ques
    q.push(400);

    // then see the queue
    cout<<"front: "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;

    // print all element present in the dque
    // 1. Create a copy to avoid destroying the original queue
   queue<int> temp = q; 

   cout << "Queue elements: ";
    while (!temp.empty()) {
        // 2. Access the front element (oldest)
       cout << temp.front() << " "; 
        // 3. Remove it from the temp queue
        temp.pop(); 
    }
   cout <<endl;
}

// now define the main function
int main(){
    queue_implimentation();
    return 0;
}