// Priority Queue in C++

// The priority queue in C++ is a derived container in STL that considers only the highest priority element. The queue follows the FIFO policy while priority queue pops the elements based on the priority, i.e., the highest priority element is popped first.

// It is similar to the ordinary queue in certain aspects but differs in the following ways:

// In a priority queue, every element in the queue is associated with some priority, but priority does not exist in a queue data structure.

// The element with the highest priority in a priority queue will be removed first while queue follows the FIFO(First-In-First-Out) policy means the element which is inserted first will be deleted first.

// If more than one element exists with the same priority, then the order of the element in a queue will be taken into consideration.

// Note: The priority queue is the extended version of a normal queue except that the element with the highest priority will be removed first from the priority queue.


// Member Function of Priority Queue
// Function	Description
// push()	It inserts a new element in a priority queue.
// pop()	It removes the top element from the queue, which has the highest priority.
// top()	This function is used to address the topmost element of a priority queue.
// size()	It determines the size of a priority queue.
// empty()	It verifies whether the queue is empty or not. Based on the verification, it returns the status.
// swap()	It swaps the elements of a priority queue with another queue having the same type and size.
// emplace()	It inserts a new element at the top of the priority queue.


#include<iostream>
#include <queue>
using namespace std;

// function prototype for display_priority_queue()
void display_priority_queue(priority_queue<int> pq); 

int main() {

  // create a queue of int
  priority_queue<int> numbers;

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);
  numbers.push(30);
  numbers.push(27);
  numbers.push(2);
 
  cout << "Initial Priority Queue: ";
  display_priority_queue(numbers);
  
  // remove element from queue
  numbers.pop();
  
  cout << "Final Priority Queue: ";
  display_priority_queue(numbers);

  // get the element at the top
  int top = numbers.top();
  cout << "Top element: " << top<<endl;

  // get the size of queue
  int size = numbers.size();
  cout << "Size of the queue: " << size;

  return 0;
}

// utility function to dislay priority queue
void display_priority_queue(priority_queue<int> pq) {
  while(!pq.empty()) {
    cout << pq.top() << ", ";   
    pq.pop();
  }

  cout << endl;
}

//-----------------------------------------------------//

// Min-Heap Priority Queue

// We can also create a min-heap priority_queue that arranges elements in ascending order. Its syntax is:

// priority_queue<type, vector<type>, greater<type>> pq; 

#include<iostream>
#include <queue>
using namespace std;

int main() {

  // create a priority queue of int
  // arranges elements in ascending order
  priority_queue<int, vector<int>, greater<int>> numbers;

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);

  // print element with highest priority
  cout << "Top element: " << numbers.top();

  return 0;
}