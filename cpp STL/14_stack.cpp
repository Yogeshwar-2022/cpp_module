// This data structure works on the LIFO technique, where LIFO stands for Last In First Out. The element which was first inserted will be extracted at the end and so on. There is an element called as 'top' which is the element at the upper most position. All the insertion and deletion operations are made at the top element itself in the stack.

// Stacks in the application areas are implied as the container adaptors.

// The containers should have a support for the following list of operations:

// empty
// size
// back
// push_back
// pop_back

#include <iostream>
#include <stack>
using namespace std;

// utility function to display stack elements
void display_stack(stack<string> st) {

  while(!st.empty()) {
    cout << st.top() << ", ";
    st.pop();
  }

  cout << endl;
}

int main() {

  // create a stack of strings
  stack<string> colors;

  // push elements into the stack
  colors.push("Red");
  colors.push("Orange");
  colors.push("Blue");
  
  cout << "Initial Stack: ";
  // print elements of stack
  display_stack(colors);
  
  // removes "Blue" as it was inserted last
  colors.pop();
  
  cout << "Final Stack: ";

  // print elements of stack
  display_stack(colors);

  // get top element
  string top = colors.top();

  cout << "Top Element: " << top<<endl;

  // get the size of the stack
  int size = colors.size();
  cout << "Size of the stack: " << size<<endl;
  
  cout << "Is the stack empty? ";

  // check if the stack is empty  
  if (colors.empty()) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }
  
  return 0;
}

