# 🤔 Description
These modules of C++ are designed to help you understand the specificities of the language when compared to C. Time to dive into Object-Oriented Programming!
This Project contains 8 modules every one of the 8 Modules designed To help me discover new Things in C++ (**Object Oriented Programming**).

# <img src="https://user-images.githubusercontent.com/54292953/142726987-139b4a51-9471-4aa3-9051-1bab383c38c9.png"  width="28px"> CPP Modules

- C++ - Module 00: This Module has three exercises and designed to help you understand the specifities of the language when compared to C.
  - **Exercise 00**: Megaphone: write a program that has the following behavior:
  ```
  $>./megaphone "shhhhh... I think the students are asleep..."
  SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
  $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
  DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
  $>./megaphone
  * LOUD AND UNBEARABLE FEEDBACK NOISE *
  ```
  - **Exercise 01**: My Awesome PhoneBook:
  ```
  When the program starts, the user is prompted for input: you should accept the ADD command,
   the SEARCH command or the EXIT command. Any other
  input is discarded. The program starts empty (no contacts), doesn’t use any dynamic allocation,
  and can’t store more than 8 contacts. If a ninth contact is added, replace the oldest contact.
  ```
  - **Exercise 02**: The Job Of Your Dreams:
  ```
  So you need to create a Account.cpp file and quickly write some lines of pure awesome
  C++ and after a couple of failed compilations, your program will compiles and passes the
  tests with a perfect output, except for the timestamps differences. Damn you’re good!
  ```
- C++ - Module 01: This Module Has 7 exercises designed to help you understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.
  - **Exercise 00**: BraiiiiiiinnnzzzZ.
  - **Exercise 01**: Moar brainz!.
  - **Exercise 02**: HI THIS IS BRAIN:
  ```
  Make a program in which you will create a string containing "HI THIS IS BRAIN".
  Create a stringPTR which is a pointer to the string; and a stringREF which is a reference to the string
  ```
  - **Exercise 03**: Unnecessary violence.
  - **Exercise 04**: Sed is for losers:
  ```
  Make a program called replace that takes a filename and two strings, let’s call them
  s1 and s2, which are NOT empty.
  ```
  - **Exercise 05**: Karen 2.0:
  ```
  We are going to automate Karen, she says always the same things. You have to create
  a class named Karen which will contain the following private member functions:
  • void debug( void );
  • void info( void );
  • void warning( void );
  • void error( void );
  NOTE: The goal of this exercise is to use pointers to member functions. This is not a suggestion, Karen has to complain without using a forest of if/elseif/else, she doesn’t hesitate o think twice!
  ```
  - **Exercise 06**: Karen-filter:
  ```
  You have to write the program karenFilter that will receive as a parameter the log
  level you want to listen to and display all the info that is at this level or above it. For
  example:
  $> ./karenFilter "WARNING"
  [ WARNING ]
  I think I deserve to have some extra bacon for free.
  I’ve been coming here for years and you just started working here last month.
  [ ERROR ]
  This is unacceptable, I want to speak to the manager now.
  $> ./karenFilter "I am not sure how tired I am today..."
  [ Probably complaining about insignificant problems ]
  ```
- C++ - Module 02: This Module has 4 Exercise and designed to help you understand Ad-hoc polymorphism, overloads and orthodox canonical classes in CPP.
- C++ - Module 03: This Module has 4 Exercise and designed to help you understand Inheritance in CPP.
- C++ - Module 04: this Module has 4 Exercise and designed to help you understand Subtype polymorphism, abstract classes and interfaces in CPP:
  - **Exercise 00**: Polymorphism.
  - **Exercise 01**: I don’t want to set the world on fire.
  - **Exercise 02**: abstract class.
  - **Exercise 03**: Interface & recap.
- C++ - Module 05: This Module has 4 Exercises and designed to help you understand Try/Catch and Exceptions in CPP.
- C++ - Module 06: This Module has 4 Exercises and designed to help you understand the different casts in CPP:
  - **Exercise 00**: Scalar conversion:
  ```
  Write a program that takes a string representation of a C++ literal value (in its most
  common form) as a parameter. This literal must belong to one of the following a scalar
  types: char, int, float or double. Only the decimal notation will be used.
  ```
  - **Exercise 01**: Serialization
  ```
  Write a function "uintptr_t serialize(Data* ptr);". This function will return
  the parameter in an integer type.
  Write a function "Data* deserialize(uintptr_t raw);". This function will return
  the raw data you created using "serialize" to a Data structure.
  You must create a valid data structure.
  Take a Data address use serialize on it.
  Send the return value in deserialize.
  Check if the return value is equal to the first pointer.
  ```
  - **Exercise 02**: Identify real type
  ```
  Create a class Base that only possesses a public virtual destructor. Create three
  empty classes A, B and C that publicly inherit from Base.
  Write a function "Base * generate(void);" that randomly instanciates A, B or C
  and returns the instance as a Base pointer. Feel free to use anything you like for the
  randomness.
  Write a function "void identify(Base* p);" that displays "A", "B" or "C" according to the real type of p.
  Write a function "void identify(Base& p);" You should never use a pointer inside
  this function. that displays "A", "B" or "C" according to the real type of p.
  ```
- C++ - Module 07: This Module has 3 Exercises and This module is designed to help you understand Templates in CPP:
  - **Exercise 00**: A few functions:
  ```
  Write the following function templates:
  • swap: Swaps the values of two arguments. Does not return anything.
  • min: Compares the two arguments and returns the smallest one. If the two arguments are equal, then it returns the second one.
  • max: Compares the two arguments and returns
  ```
  - **Exercise 01**: Iter:
  ```
  Write a function template iter that take 3 parameters and returns nothing. The first
  parameter is the address of an array, the second one is the length of the array and the
  third one is a function called for each element of the array
  ```
  - **Exercise 02**: Array
  ```
  Write a class template Array that contains elements of type T and that allows the
  following behavior:
  • Construction with no parameter: creates an empty array.
  • Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then
  display *a.)
  • Construction by copy and assignment operator. In both cases, modifying one of
  the two arrays after copy/assignment won’t affect anything in the other array.
  • You MUST use the operator new[] for your allocation. You must not do preventive
  allocation. Your code must never access non allocated memory.
  • Elements are accessible through the operator[].
  • When accessing an element with the operator[], if this element is out of the limits,
  a std::exception is thrown.
  • A member function size that returns the number of elements in the array. This
  member function takes no parameter and does not modify the current instance in
  any way.
  ```
- C++ - Module 08: This Module had 3 Exercises and designed to help you understand templated containers, iterators and algorithms in CPP.

# ⚙️ Compilation

NOTE: All Exercises has there own Makefile so you can compile them using `make`.</br>
NOTE 2 : Exercises of Module 08 has no Makefile so you need to compile the using the following command: `clang++ *.cpp` or `g++ *.cpp`

# 🔑 Execute

NOTE: After Making the Exercise You will find an Executable file (some exercises need more argument so check if they need it or not).

# 👨‍💻 Ressources

* [C++ Tutorial for Beginners - Full Course](https://www.youtube.com/watch?v=vLnPwxZdW4Y&ab_channel=freeCodeCamp.org)
* [Constructors in C++](https://www.geeksforgeeks.org/constructors-c/)
* [Constructor Overloading in C++](https://www.geeksforgeeks.org/constructor-overloading-c/)
* [Copy Constructor in C++](https://www.geeksforgeeks.org/copy-constructor-in-cpp/)
* [Destructors in C++](https://www.geeksforgeeks.org/destructors-c/)
* [Pointers vs References in C++](https://www.geeksforgeeks.org/pointers-vs-references-cpp/)
* [Operator Overloading in C++](https://www.geeksforgeeks.org/operator-overloading-c/)
* [OPERATORS and OPERATOR OVERLOADING in C++](https://www.youtube.com/watch?v=mS9755gF66w&ab_channel=TheCherno)
* [C++ Operator Overloading beginner to advanced (in-depth explanation)](https://www.youtube.com/watch?v=BnMnozsSPmw&ab_channel=CodeBeauty)
* [Find a Fixed Point (Value equal to index) in a given array](https://www.geeksforgeeks.org/find-a-fixed-point-in-a-given-array/)
* [Const member functions in C++](https://www.geeksforgeeks.org/const-member-functions-c/)
* [Increment (++) and Decrement (–) operator overloading in C++](https://www.geeksforgeeks.org/increment-and-decrement-operator-overloading-in-c/)
* [Static Keyword in C++](https://www.geeksforgeeks.org/static-keyword-cpp/)
* [stringstream in C++ and its applications](https://www.geeksforgeeks.org/stringstream-c-applications/)
* [Multiple Inheritance in C++](https://www.geeksforgeeks.org/multiple-inheritance-in-c/)
* [Virtual Function in C++](https://www.geeksforgeeks.org/virtual-function-cpp/)
* [Polymorphism in C++](https://www.geeksforgeeks.org/polymorphism-in-c/)
* [Exception Handling in C++](https://www.geeksforgeeks.org/exception-handling-c/)
* [How to access private/protected method outside a class in C++](https://www.geeksforgeeks.org/how-to-access-private-protected-method-outside-a-class-in-c/)
* [rand() and srand() in C/C++](https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/)
* [Converting Strings to Numbers in C/C++](https://www.geeksforgeeks.org/converting-strings-numbers-cc/)
* [Type Conversion in C++](https://www.geeksforgeeks.org/type-conversion-in-c/)
* [Templates in C++ (article)](https://www.geeksforgeeks.org/templates-cpp/)
* [Templates in C++ (Video)](https://www.youtube.com/watch?v=I-hZkUa9mIs&ab_channel=TheCherno)
* [Casting in C++](https://www.youtube.com/watch?v=pWZS1MtxI-A&ab_channel=TheCherno)
* [C++ Type Casting Playlist](https://www.youtube.com/playlist?list=PL1w8k37X_6L-KS5DQt7U0rCtgIgdIadWz)
* [Polymorphism In C++ | Static & Dynamic Binding](https://www.youtube.com/watch?v=mv5_l4kuVho&ab_channel=CppNuts)
* [Containers in C++ STL (Standard Template Library)](https://www.geeksforgeeks.org/containers-cpp-stl)
* [Vector in C++ STL](https://www.geeksforgeeks.org/vector-in-cpp-stl/)

---

[!["Buy Me A Coffee"](https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png)](https://www.buymeacoffee.com/barimehdi77)
[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/K3K45UOA7)
[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://paypal.me/barimehdi77)
