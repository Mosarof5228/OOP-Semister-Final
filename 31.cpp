/*
Member Function
Definition:

A member function is defined within a class and operates on the data members of that class.
Access to Class Members:

It has direct access to the class's private and protected data members and member functions.
Invocation:

Called on an object of the class or using a pointer/reference to an object. Syntax: object.memberFunction().
Implicit this Pointer:

Member functions have an implicit this pointer that points to the object on which the function is called.
Overloading:

Member functions can be overloaded based on their number and types of parameters.
Use Cases:

Typically used to define behaviors specific to the class and to operate on its internal state.
Non-Member Function
Definition:

A non-member function is defined outside of any class and does not operate on class data members directly.
Access to Class Members:

It does not have direct access to the private or protected members of a class unless granted via friend functions.
Invocation:

Called independently without an object. Syntax: functionName().
No this Pointer:

Non-member functions do not have an implicit this pointer because they are not associated with any specific object.
Overloading:

Non-member functions can also be overloaded based on their number and types of parameters.
Use Cases:

Often used for functions that need to operate on multiple types or perform operations unrelated to the specific state of a class.
Summary:
Member Function: Part of a class, has access to class data, invoked on class objects, has an implicit this pointer.
Non-Member Function: Defined outside of a class, does not have access to class private members, invoked independently, does not have a this pointer.








*/