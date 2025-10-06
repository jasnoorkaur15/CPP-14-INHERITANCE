# CPP-14-INHERITANCE
## Aim

To implement and understand different types of inheritance in C++ .

 ## Objectives

> To study the concept of inheritance in Object-Oriented Programming (OOP).

> To demonstrate single, multilevel, hierarchical, and multiple inheritance through real-life inspired programs.

> To understand how inheritance models "is-a" relationships between entities.

## Theory
### What is Inheritance?

Inheritance is an Object-Oriented Programming feature that allows a class (derived/child class) to acquire the properties and behaviors of another class (base/parent class). It promotes code reusability, reduces redundancy, and provides a way to create a natural hierarchy of classes.

### Key Concepts in Inheritance

Base Class (Parent Class): Provides common attributes and methods.

Derived Class (Child Class): Inherits from the base class and can add its own attributes/methods.

### Access Specifiers:

public: Members accessible outside the class.

protected: Members accessible only in base and derived classes.

private: Members not accessible by derived classes directly.

### Types of Inheritance in C++

#### Single Inheritance

A single base class and a single derived class.

Example: A College class having a derived Branch class.

#### Multilevel Inheritance

A chain where a class is derived from another derived class.

Example: A Mobile base class, an Origin derived class, and a Brand derived from Origin.

#### Hierarchical Inheritance

Multiple classes inherit from the same base class.

Example: A Clothes base class with derived classes Jeans, Tops, and Sweater.

#### Multiple Inheritance

A derived class inherits from more than one base class.

Example: A Car class inheriting from both Automobile and Features.

#### Hybrid Inheritance (Combination):

A mix of two or more inheritance types.

May lead to the diamond problem, which is resolved using virtual inheritance.

### Advantages of Inheritance

Encourages code reuse and reduces redundancy.

Makes programs modular and organized.

Allows extension and specialization of base class.

Supports polymorphism and dynamic binding.

Models real-world relationships naturally.

### Limitations of Inheritance

Increases coupling between base and derived classes.

Multiple inheritance can lead to ambiguity problems.

Multilevel inheritance may become overly complex.

Misuse of inheritance can make code harder to maintain.

##  Comparison of Inheritance Types
| **Inheritance Type**         | **Structure**            | **Example Used in Programs**     | **Advantages**                                              | **Limitations**                                                |
| ---------------------------- | ------------------------ | -------------------------------- | ----------------------------------------------------------- | -------------------------------------------------------------- |
| **Single Inheritance**       | One Base → One Derived   | `College → Branch`               | Simple, easy to implement, promotes reusability             | Limited reuse, not suitable for complex hierarchies            |
| **Multilevel Inheritance**   | Base → Derived → Derived | `Mobile → Origin → Brand`        | Allows stepwise refinement of classes, natural hierarchy    | Long chains increase complexity, debugging becomes harder      |
| **Hierarchical Inheritance** | One Base → Many Derived  | `Clothes → Jeans, Tops, Sweater` | Promotes reuse across many classes, supports specialization | Risk of code duplication in child classes                      |
| **Multiple Inheritance**     | Many Base → One Derived  | `Automobile + Features → Car`    | Combines features of multiple classes, flexible design      | May lead to ambiguity (Diamond Problem), harder to maintain    |
| **Hybrid Inheritance**       | Mix of two or more types | `Vehicle + Engine → Car`         | Provides flexibility, supports complex relationships        | Very complex, prone to diamond problem, debugging is difficult |

## Algorithm
### General Algorithm for Inheritance

Start.

Identify the base class (common attributes and methods).

Identify the derived class(es) (specialized attributes and methods).

Define the base class using the class keyword.

Define the derived class using the : symbol with an access specifier (public, protected, or private).

Add data members and member functions as required.

Create objects of the derived class.

Access base class and derived class functions using objects.

Display the results.

Stop.

### Single Inheritance (College → Branch)

Start.

Define base class College with data member college_name and function displayCollege().

Define derived class Branch (inherits from College).

Add data member branch_name and function displayBranch().

Create object of Branch.

Call functions of both base and derived classes.

Display output.

Stop.

### Multilevel Inheritance (Mobile → Origin → Brand)

Start.

Define base class Mobile with data member category and function displayCategory().

Define class Origin inheriting from Mobile, with data member origin_country.

Define class Brand inheriting from Origin, with data member brand_name.

Create object of Brand.

Call functions from all classes using the object.

Display output.

Stop.

### Hierarchical Inheritance (Clothes → Jeans, Tops, Sweater)

Start.

Define base class Clothes with data member brand and function displayBrand().

Define derived class Jeans with attribute color1.

Define derived class Tops with attribute color2.

Define derived class Sweater with attribute color3.

Create objects of Jeans, Tops, and Sweater classes.

Call functions of both base and derived classes.

Display output for each object.

Stop.

### Multiple Inheritance (Automobile + Features → Car)

Start.

Define base class Automobile with data member company and function displayCompany().

Define base class Features with data members like color, mileage.

Define derived class Car inheriting from both Automobile and Features.

Add function displayCar() to show combined details.

Create object of Car.

Call functions from both parent classes and the derived class.

Display final details.

Stop.

## Program Descriptions
### Single Inheritance

This program demonstrates single inheritance by creating a College class as the base and a Branch class as the derived class. 

The base class provides the name of the college and a method to print the stream, while the derived class adds a specific branch name.

This shows how a child class can extend the functionality of a parent class.

### Multilevel Inheritance

This program demonstrates multilevel inheritance using three classes: Mobile (base), Origin (derived), and Brand (derived from Origin). 

The base class contains the category and type, while the derived classes add details like origin and brand. 

This illustrates step-by-step refinement of information through multiple inheritance levels.

### Hierarchical Inheritance

This program demonstrates hierarchical inheritance with a Clothes class as the base class, and three derived classes: Jeans, Tops, and Sweater. 

The base class contains common attributes like the brand and types of clothes, while each child class provides unique color information. 

This highlights how multiple derived classes can share and extend a common parent class.

### Multiple Inheritance

This program demonstrates multiple inheritance with two parent classes: Automobile and Features, and one derived class Car. 

The Automobile class provides the category and company name, while the Features class provides attributes like color and mileage. 

The derived Car class inherits both, combining properties of multiple parents.

This shows how a class can bring together different functionalities but also introduces possible ambiguity.

## Concepts Used

Classes and Objects (basic building blocks of OOP).

Inheritance (Single, Multilevel, Hierarchical, Multiple).

Access Specifiers (public).

Function and Data Member Usage.

Code Reusability and Extensibility.

## Conclusion

Inheritance is a feature that promotes reusability, modularity, and extensibility.

Single inheritance is simple and effective, while multilevel inheritance allows gradual refinement.

Hierarchical inheritance demonstrates how multiple classes can share a single base, and multiple inheritance allows integration of multiple functionalities, though it may cause ambiguity.

Careful use of inheritance ensures cleaner, reusable, and maintainable code, while misuse can lead to unnecessary complexity.

Understanding inheritance is essential for building scalable and structured object-oriented programs.
