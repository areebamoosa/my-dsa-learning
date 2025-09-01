# Copy Constructor

In C++, a copy constructor is a special constructor that makes a new object as a copy of an existing object.

Its name is always the same as the class.

It takes a reference to the same class as a parameter.

**Syntax :**

```cpp
ClassName(const ClassName &other) {

    // copy code here

}
```

Why do we need it?

When you write:

ClassName obj2 = obj1;

C++ automatically tries to copy obj1 into obj2.

- If you don’t write your own copy constructor, C++ creates a default shallow copy for you.
- If you want deep copy, you must write your own copy constructor.

<br>

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int age;
    string name;

    // Normal constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &other) {
        name = other.name;  // copy name
        age = other.age;    // copy age
    }
};

int main() {
    Student s1("Areeba", 20);

    // Copy constructor is called here
    Student s2 = s1;

    cout << "s1: " << s1.name << ", " << s1.age << endl;
    cout << "s2: " << s2.name << ", " << s2.age << endl;

    return 0;
}
```

**Output :**

```cpp
s1: Areeba, 20
s2: Areeba, 20
```

Here s2 is created as a copy of s1.
That’s the job of a copy constructor.

**Summary in Simple Words :**

- Copy constructor = makes a new object as a copy of an existing one.

- Default version → does shallow copy.

- You can write your own → to do deep copy.

<br>

## Shallow Copy

Think of it like photocopying only the cover of a book — inside pages are still shared.

In programming, a shallow copy makes a new object, but inside it still points to the same inner data ( address is same).

If you change the inner data in one object, it also changes in the other (because both are looking at the same place).

**Example in C++:**

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    char* name;

    Student(const char* n) {
        name = new char[20];
        strcpy(name, n);
    }
};

int main() {
    Student s1("Areeba");

    // Shallow copy: just copies pointer address
    Student s2 = s1;

    cout << "Before change: " << s1.name << " | " << s2.name << endl;

    s2.name[0] = 'Z'; // change through s2

    cout << "After change: " << s1.name << " | " << s2.name << endl;
    return 0;
}
```

**Output:**

```cpp
Before change: Areeba | Areeba
After change: Zreeba | Zreeba
```

See? Changing s2 also changed s1.
That’s shallow copy.

## Deep Copy

Think of it like photocopying every page of the book separately — now each book is independent.

A deep copy makes a new copy of everything, including inner data. ( Basically creates a new object of different address )

If you change one object, the other remains safe.

**Example in C++:**

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    char* name;

    Student(const char* n) {
        name = new char[20];
        strcpy(name, n);
    }

    // Deep copy constructor
    Student(const Student& other) {
        name = new char[20];      // new memory
        strcpy(name, other.name); // copy actual data
    }
};

int main() {
    Student s1("Areeba");

    // Deep copy
    Student s2 = s1;

    cout << "Before change: " << s1.name << " | " << s2.name << endl;

    s2.name[0] = 'Z'; // change through s2

    cout << "After change: " << s1.name << " | " << s2.name << endl;
    return 0;
}
```

**Output:**

```cpp
Before change: Areeba | Areeba
After change: Areeba | Zreeba
```

See? Now changing s2 didn’t affect s1.
That’s deep copy.

### 📝 Summary in Simple Words

**Shallow Copy** → Copies the outer object only, inner data is shared.

**Deep Copy** → Copies both outer object and all the inner data separately.
