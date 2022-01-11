# **Object Oriented Programming**

Object	 Oriented	 Programming	 could	 be best understood	 with	 help	 of	
an example. Consider	 a	 library	 management	 system. Using	 procedural	
programming,	 the	problem will	be	viewed in	 terms	of	working happening in	 the	
library	 i.e.,	 issuing	 of	 book,	 returning	 the	 book,	 adding	 new	 book	 etc.	
The OOP paradigm,	 however	 aims	 at the	 objects	 and	 their	 interface.	 Thus	 in	
OOP, library management	problem	will	be	viewed	in	terms	of	the	objects	involved.	
Objects	 are	 real	 world	 entities	 around	 which	 the	 system	 revolves.	 The objects	
involved	 are:	 librarian,	 book, member	etc. Hence,	 the	 object-oriented	 approach	
views	a	problem	in	terms	of	objects	involved	rather	than	procedure	for doing it.

![oops1](https://user-images.githubusercontent.com/66161514/148973067-b96e4102-8cf8-4cab-bb5d-d96f8831cd0e.jpg)


**Why use Object Oriented Programming?**

In	real	life	we	deal	with	lot	of	objects	such	as people,	car,	account, etc.	Hence,	we
need	our	software	to	be	analogous	to real-world objects. Real world	objects	have	
data-type	properties	such	as	name, age	for	people, model	name	for	car	and balance	
for	account,	etc.	Moreover, real-world	objects	can	also	do	certain	things such	as	
people	talk,	cars	move,	account accumulates, etc. We want	our	code	to mimic the	
way	 these	 objects	 behave	 and	 interact. Hence, Object Oriented	 Programming	
allows	the	program	to	be closer	to	real	world	and	thereby	making it less complex.	
Also it makes	the	software	reuse	feasible	and possible,	for	example, we	don't	want	
to	 define	 a	 student every	 time we	 use	 it,	 hence	 using	 OOP,	 we	 just	 create	 the	
blueprint	for	the	student	object and use	it whenever required.
**Classes and objects**

The	class	is	a single	most	important	C++	feature	that	implements	OOP	concepts	and	
ties	them together. Classes	are	needed	to	represent	real-world entities. A class	is	a	
way	 to	 bind	 the	 data describing	 an	 entity	 and	 its	 associated	 functions	
together. For instance,	 consider	 a user having	
characteristics username and password and	 some	 of its associated	 operations	
are sign	up, sign	in and logout.		
Class	is	just	a	template, which	declares	and	defines	characteristics	and behavior,	
hence	we	need	to	declare objects	of	the class	for	it	to	be	usable.	In other words	
class represents a	group	of	similar	objects.
Data members and member functions
Data	members	are	the	data-type	properties	that	describe	the characteristics of	the	
class.
Member	 functions	 are	 the	 set	 of	 operations	 that	 may	 be	 applied	 to objects	 of	
that class, i.e.,	they	represent	the behavioral aspect	of	the	object.	They	are	usually	
referred	as	class interface.
Syntax	for	definition	of	a	class	:
class class_name {
Access	Modifier:		
Data	members
Member	functions
};
The	class	body	contains	the declaration of	members	(data	and	functions).
Declaring objects of a class
We	can	declare	objects	of	a	class	either	statically	or dynamically just	as	we	declare	
variables	of	primitive	data	types.
Statically
Syntax	for	declaring	objects	of	a	class	statically	is:		
class_name				object_name;
Example	code	:
class Student {
public :
int rollno;
char name[20];
					 };
					int main(	){
Student	s1;									//	Declaration	of	object s1	of	type	Student
Student	s2;									// Declaration	of	object s2	of	type	Student
					 }
Dynamically
Syntax	for	declaring	objects	of	a	class	dynamically is:		
class_name		*object_name =	new class_name
Example	code	:
class Student {
public :
int rollno;
char name[20];
					 };
					int main(	){
Student *s1 =new	Student;		 //	Declaration	of	object of	type	Student 																		
					// dynamically
					 }
