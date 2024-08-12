# Lambda :--->
# ---> it's a special type of function without function name.
# ---> syntax : lambda argument(s) : expression

# declare a lambda function
greet = lambda : print('Hello World')

greet()                                 # Output: Hello World

# ------------------------------------------------------------------------

# lambda that accepts one argument
greet_user = lambda argument1 : print('Hey there,', argument1)

greet_user('Nilay')                     # Output: Hey there, Nilay