`%d` --> for integer,
`%f` --> for float,
`%lf` --> for double,
`%c` --> for character

\\------------------------------------------------------------------------------------------------

`operators`: -->>>
Arithmatic : `+ - * / %`
relational : `> < >= <=  == !=`
logical : `&&  ||  !` (syntax eg. (a>6) && (b<5), !(a>5))

\\------------------------------------------------------------------------------------------------

`extraction operator` : ---> used for cin.
`insertion operator` : ---> used for cout.

\\------------------------------------------------------------------------------------------------

`type conversions` -->>
--- `implicit` conversion --->> example (x+y+z / `3.0`)
--- `explicit` conversion --->> example type (`float`(x+y+z) / 3.0)

\\------------------------------------------------------------------------------------------------

function types: --->> built-in & user defined type.
In `function with default value/arguments` pass a `variable as argument first` and argument with `default value later`.

\\------------------------------------------------------------------------------------------------

`inline` :--->> run function in inline which reduce time of execution.

default access specifier is `private`.

\\------------------------------------------------------------------------------------------------

`method overloading` :--->>
--- it is the process where `name of functions are same` but `number of arguments` or `type of arguments` are `different` in those functions.

\\------------------------------------------------------------------------------------------------

`constructors` : --->
---types: default, paramaterized & copy.
---class name and function name same then its called constructor
---constructor doesnt return anything so doesnt required data type & dont need to call it seprately(when creating obj, it will automatically called.)

`constructors overloading` : --->
--- it is the process where name of constructor are same but number of arguments or type of arguments are different in those constructor.

while creating class, it doesnt use memory. while creating object, memory allocates.
to release memory, use destructuring.

\\------------------------------------------------------------------------------------------------

`scope resolution operator(::)`--->
--- its used to access the global variable. & define and access function out side of the class.

\\------------------------------------------------------------------------------------------------

`friend function` : --->
--- its used to access private & protected data of class.
--- it can't be called using object. / it can be called like normal function without using object.
--- it can't access members directly but it can access using object name & dot operator.

\\------------------------------------------------------------------------------------------------

`Destructor` : --->
--- its used to destroy objects which have been created by constructor.
--- it has same name as class name but precided by tild sign(~).
--- Destructor never takes any arguments & doesn't return any value.
--- it doesn't need to be called.
--- all destructors are run at end of the code.

\\------------------------------------------------------------------------------------------------

`inheritance` : --->
--- It allows user to create a new class from an existing class.
--- The new class is called `derived` or `child` class. & The existing class is called `base` or `parent` class.
--- The derived class has properties of base class and also additional properties of its own.

`single level inheritance` : --->
--- When class is derived from only one base class, its known as single inheritance.(A-->B)

`multi level inheritance` : --->
--- From one class, derived onther class & from that class derived one more class. (A-->B-->C)

`multiple inheritance` : --->
--- when class is derived from two or more classes, its known as multiple inheritance. (A-->C & B-->C)

`hierarchical inheritance` : --->

`hybrid inheritance` : --->
--- it is a combination of type of inheritance.

\\------------------------------------------------------------------------------------------------

`method overriding` : --->
--- when a member function of base class is redefined in a derived class then it is known as method/function overriding.

\\------------------------------------------------------------------------------------------------

`polymorphiasm` : --->
--- it's a ability to take more than one form.
--- Types of polymorphism :-
----- 1. Compile time polymorphism
----- 2. Run time polymorphism

`Compile time polymorphism`: --->
--- compile time polymorph is function overloading.

`Run time polymorphism`: --->
--- run time polymorphism is function overriding.

\\------------------------------------------------------------------------------------------------

`this->` : --->
--- `This` pointer is used to access object's data members.
--- It is used with the keyword `this`.

\\------------------------------------------------------------------------------------------------

`setw` : --->
--- manipulation operator (only for increment width). setw is used to set width of the output.

\\------------------------------------------------------------------------------------------------

`abstract class` : ---> (abstract = overview / summary)
--- It is a class which has atleast one `pure virtual function`.
--- `pure virtual function` does not have function body & it must end with `= 0`.
--- `pure virtual function` is a function with no defination.

\\------------------------------------------------------------------------------------------------

`compile time polymorphism`: --->
--- its also called `early binding`.

`run time polymorphism`: --->
--- its also called `late binding`.

\\------------------------------------------------------------------------------------------------

`operator overloading` : --->
--- Using operator overloading user can change behavior of operators.
--- user can specify more than one meaning for an operator.
--- syntax:
class classname{
...
public:
returnType operator symbol(params){
...
}
...
};
--- `operator` is keyword.
--- symbols are like : `+, -, *, /, %, ++` etc.

\\------------------------------------------------------------------------------------------------

`static data members`: --->
--- `static data members` are declared using `static` keyword.
--- `static data members` are shared between all objects.
--- It is visible only within a class but lifetime is entire program.
--- It is `initialized` outside the class declaration using `scope resolution operator`.

\\------------------------------------------------------------------------------------------------

`static functions`: --->
--- `static functions` can be declared using `static` keyword.
--- This function can be called using class name without creating an object.
--- `static functions` can access only `static members` declared in the class.
