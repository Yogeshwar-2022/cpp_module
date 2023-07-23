// C++ Inheritance

// In C++, inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically. In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.

// In C++, the class which inherits the members of another class is called derived class and the class whose members are inherited is called base class. The derived class is the specialized class for the base class.

// Types Of Inheritance

// C++ supports five types of inheritance:

// Single inheritance
// Multiple inheritance
// Hierarchical inheritance
// Multilevel inheritance
// Hybrid inheritance

// Derived Classes: 
// A Derived class is defined as the class derived from the base class.

// Note:
// In C++, the default mode of visibility is private.
// The private members of the base class are never inherited.

// C++ Public, Protected and Private Inheritance:

// public, protected, and private inheritance have the following features:

// public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
// protected inheritance makes the public and protected members of the base class protected in the derived class.
// private inheritance makes the public and protected members of the base class private in the derived class.

// Example 1: C++ public Inheritance
// C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class PublicDerived : public Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;
  return 0;
}
// -------------------------------------------------------------------------------------------------//

// Example 2: C++ protected Inheritance
// C++ program to demonstrate the working of protected inheritance

#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

   public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class ProtectedDerived : protected Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }

    // function to access public member from Base
    int getPub() {
      return pub;
    }
};

int main() {
  ProtectedDerived object1;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.getPub() << endl;
  return 0;
}
// -------------------------------------------------------------------------------------------------//

// Example 3: C++ private Inheritance
// C++ program to demonstrate the working of private inheritance

#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class PrivateDerived : private Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }

    // function to access private member
    int getPub() {
      return pub;
    }
};

int main() {
  PrivateDerived object1;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.getPub() << endl;
  return 0;
}

// -------------------------------------------------------------------------------------------------//