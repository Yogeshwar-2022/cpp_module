// C++ Map

// In C++, maps are associative containers that store paired data. These paired data are called key-value pairs, where the key is unique but the value is not.

// Map Methods
// In C++, the map class provides various methods to perform different operations on a map.

// Operation	Description
// insert()	adds an element (key-value pair) to the map
// erase()	removes an element or range of elements from the map
// clear()	removes all the elements from the map
// find()	searches the map for the given key
// size()	returns the number of elements in the map
// empty()	returns true if the map is empty

#include <iostream>
#include <map>
using namespace std;

int main() {
    
    map<int, string> student;
  
    // use [] operator to add elements
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // use insert() method to add elements
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    // add elements with duplicate keys
    student[5] = "Timothy";
    student[5] = "Aaron";

    for (int i = 1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]: " << student[i] << endl;
    }

    return 0;
}

