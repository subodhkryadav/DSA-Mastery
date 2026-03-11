#include<iostream>
#include<queue>
using namespace std;

// define a function 
void priority_Q(){
    priority_queue<int>pq;

    // insert some sort of the iteam inside the queue
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(10);
    
    pq.emplace(20); // its also add the element on the queue

    priority_queue<int> temp = pq; 

   cout << "Queue elements after inserting elements: ";
    while (!temp.empty()) {
        // Use .top() instead of .front()
       cout << temp.top() << " "; 
        temp.pop(); 
    }
   cout << endl;

    // now see the top item of the queue
    cout<<"top_item: "<<pq.top()<<endl;

    // now pop method is use
    pq.pop();

    // after pop see the top item
    cout<<"After poping top element is: "<<pq.top()<<endl;

    //also contain the size,swap and empty method 
    
    // now see the all of the element in the present the queue
    // 1. Create a copy to avoid destroying the original queue
   priority_queue<int> temp1 = pq; 

   cout << "Queue elements: ";
    while (!temp1.empty()) {
        // 2. Access the front element (oldest)
       cout << temp1.top() << " "; 
        // 3. Remove it from the temp queue
        temp1.pop(); 
    }
   cout <<endl;
}
// define the main function
int main(){
    priority_Q();
    return 0;
}