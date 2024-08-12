`oeperators` : --->>

`Arithmetic operators` : --->>

1. `+` :-->> for addition
2. `-` :-->> for subtraction
3. `*` :-->> for multiplication
4. `/` :-->> for division
5. `%` :-->> for modular division
6. `**` :-->> for exponentiation (power)
7. `//` :-->> for floor division (round the result to its nearest decimal point)

`Comparison operators` : --->>

1. `==` :--> for comparison of two values
2. `!=` :--> for check not equality
3. `<` :--> for
4. `<=` :-->
5. `>` :-->
6. `>=` :-->

`Logical operators` : --->>

1. `and` :--> for logical end operation
2. `or` :--> for logical or operation
3. `not` :--> for logical not operation
4. `is` :--> for check two variable are on same memory address(loacation).
   ---> `example :` x = ['apple', 'mango'], y = ['apple', 'mango'], z = x
   ---> print(x `is` z)
5. `is not` :--> for check two variable are not on same memory address(loacation).
   ---> `example :` x = ['apple', 'mango'], y = ['apple', 'mango'], z = x
   ---> print(x `is not` z)

// ----------------------------------------------------------------

`if else structure` : --->>

# if(condition):

    statement 1

# elif(condition):

    statement 2
    .
    .
    .

# else:

    statement 3

// ----------------------------------------------------------------

`for loop` : --->>

# for x in range(start, stop, step):

    body of loop

--- `default start` point is `zero`.
--- `default step` is `one`.
--- start & step are optional, but stop is required.

// ----------------------------------------------------------------

`while loop` : --->>

# while (condition):

    body of loop

// ----------------------------------------------------------------

`break` : --->>
--- break on specified condition.
`continue` : --->
--- skip specific iteration.
`pass` : --->
--- user do not want to contine upto specific point.

// ----------------------------------------------------------------

`user define function` : --->

# def function_name(a, b):

    function body.

// ----------------------------------------------------------------

`Data types` : --->

# Numberic : --->

1. integer
2. float
3. complex (3+4j)

# Dictionary : --->

--- It is collection of different data types in form of key:value pair.
--- The elements are enclosed in curly brackets.

# Boolean : --->

--- It provides two values `true` or `false`.

# set : --->

--- It is collections of different data types enclosed by curly brackets.
--- It is an unordered collection.

# sequence : --->

1. `string` : --->
   --- collection of character enclosed by single or double quote.
2. `tuple` : --->
   --- collection of different data types enclosed by round brackets.
   --- tuple is immutable.
3. `list` : --->
   --- collection of different data types enclosed by square brackets.

// ----------------------------------------------------------------

`indexing` : --->

1. positive : ---> goes in positive number / start from - 0, 1, 2,...(first letter)
2. negative : ---> goes in negative number / starts from -1 (last letter)
   str1 = "hello"
   print(str1[0], str1[-1])
   # str[0] = 'h' due to positive indexing.
   # str[-1] = 'o' due to negative indexing.

# **init**

--- This method is refered as a constructor.
--- it will be called automatically when object is created.

// ----------------------------------------------------------------

# File creation :

`access modes` :
--- w - write
--- w+/r+ - read/write
--- r - read
--- a - append
--- a+ - append & read

// ----------------------------------------------------------------

# csv = coma separated value

--- It is a file format used to store tabular data(database).

`newline=''` = enter data in new line after field names(name,age,country)

`syntax` for `csv.writer` class :---
--- `csv.writer(csvFile, dialect='excel', **fmtparams)`
--- `csvFile` = file object with write method
--- `dialect='excel'` = Optional. By default = excel
--- `**fmtparams` = used for formatting parameters

--- Write into csv file can be done using `writerow` & `writerows` methods.

--- The csv can be created using `csv.writer` class or `csv.DictWriter` class.

// ----------------------------------------------------------------

`try-except / try-catch` : --->
try: # Some Code
except: # Executed if error in the
    # try block

// ----------------------------------------------------------------

# Math module --->

--- `math.sqrt()` ---> for square Root
--- `math.pow()` ---> power, x^y
--- `math.factorial()` ---> factorial
--- `math.exp()` ---> e^x
--- `math.pi` ---> Value of pi
--- `math.radians()` ---> Convert degree to radians
--- `math.degrees()` ---> Convert radians to degree
--- `math.sin()` ---> value of sine angle in radian
---> This method returns sin of a number to find sine of the degree it must converted into radian
--- `math.floor()` ---> Rounds the number down to the nearest integer
--- `math.ceil()` ---> Rounds the number up to the nearest integer

# Random module --->

--- `random.randint(range)` --> Random number between specific range
--- `random.random()` --> Genrating Random floating points
--- `random.seed()` --> Required to genrate random numbers

// ----------------------------------------------------------------
