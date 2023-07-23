// This data structure works on the FIFO technique, where FIFO stands for First In First Out. The element which was first inserted will be extracted at the first and so on. There is an element called as 'front' which is the element at the front most position or say the first position, also there is an element called as 'rear' which is the element at the last position. In normal queues insertion of elements take at the rear end and the deletion is done from the front.

// Queues in the application areas are implied as the container adaptors.

// The containers should have a support for the following list of operations:

// push()	inserts an element at the back of the queue
// pop()	removes an element from the front of the queue
// front()	returns the first element of the queue
// back()	returns the last element of the queue
// size()	returns the number of elements in the queue
// empty()	returns true if the queue is empty


#include <iostream>
#include <queue>
using namespace std;

// utility function to display queue
void display_queue(queue<string> q) {
  while(!q.empty()) {
    cout << q.front() << ", ";
    q.pop();
  }

  cout << endl;

}

int main() {

  // create a queue of string
  queue<string> animals;

  // push element into the queue
  animals.push("Cat");
  animals.push("Dog");
  animals.push("Fox");
  
  cout << "Initial Queue: ";
  display_queue(animals);
  
  // get the element at the front
 string front = animals.front();
  cout << "First element: " << front << endl;
  
  // get the element at the back
  string back = animals.back();
  cout << "Last element: " << back << endl;
  
  // remove element from queue
  animals.pop();
  
  cout << "Final Queue: ";
  display_queue(animals);

  // get the size of the queue
  int size = animals.size();
  cout << "Size of the queue: " << size;
 

  
  return 0;
}

