/*
The new operator is used to dynamically allocate memory on the heap for an object or an array of objects. And delete operator is used to deallocate the memory. This article focuses on two very important operators :New and delete operators in C++.
*/

#include <iostream>
int main()
{
    int *ptr1 = new int; // dynamically allocate memory for an int
    *ptr1 = 5;           // store the value 5 in the allocated memory
    float *ptr2 = new float(20.324);
    int *ptr3 = new int[28];
    std::cout << "Value of pointer variable 1 : " << *ptr1 << std::endl;
    std::cout << "Value of pointer variable 2 : " << *ptr2 << std::endl;
    if (!ptr3)
        std::cout << "Allocation of memory failed\n";
    else
    {
        for (int i = 1; i < 15; i++)
            ptr3[i] = i + 1;
        std::cout << "Value of store in block of memory: ";
        for (int i = 1; i < 15; i++)
            std::cout << ptr3[i] << " ";
    }
    std::cout << *ptr1; // output the value stored in the allocated memory
    delete ptr1;        // deallocate the memory to prevent memory leak
    delete ptr2;
    delete ptr3;
    return 0;
}