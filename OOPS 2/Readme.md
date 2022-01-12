# **Shallow and Deep copy**

In shallow copy, an object is created by simply copying the data of all variables of the original object. 
This works well if none of the variables of the object are defined in the heap section of memory. 
If some variables are dynamically allocated memory from heap section, then copied object variable will also reference then same memory location.
This will create ambiguity and run-time errors dangling pointer. 
Since both objects will reference to the same memory location, then change made by one will reflect those change in another object as well.
Since we wanted to create a replica of the object, this purpose will not be filled by Shallow copy.

In Deep copy, an object is created by copying data of all variables and it also allocates similar memory resources with the same value to the object.

In order to perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well if required.
Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.

## Copy Constructor
What is a copy constructor? 
A copy constructor is a member function that initializes an object using another object of the same class. A copy constructor has the following general function prototype: 

    ClassName (const ClassName &old_obj)
    
    
    #include<iostream>
using namespace std;

class Point
{
private:

	int x, y;

public:

Point(int x1, int y1) { x = x1; y = y1; }

	// Copy constructor

Point(const Point &p1) {x = p1.x; y = p1.y; }

	int getX()		 { return x; }

int getY()		 { return y; }

};

int main()
{

Point p1(10, 15); // Normal constructor is called here

Point p2 = p1; // Copy constructor is called here

	// Let us access values assigned by constructors

cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

	return 0;

}
