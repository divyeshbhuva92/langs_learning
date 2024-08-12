# Write a python program to find roots of quadratic equation & plot it.
# y = 3x^2 - 5x - 4
# in the range of -5 to 5 on plot. put axis lable and plot title.

# -b +_ (b^2 - 4ac)^0.5 / 2a

import matplotlib.pyplot as mptpy
import numpy as np

a = 2
b = -5
c = -4

x = np.arange(-5, 5, 0.5)                   # np.arrange(range_start, range_stop, step)
y = 3*(x**2) - (5*x) - 4

print('value of x :' , x)
print('value of y :' , y)

mptpy.plot(x, y)

mptpy.title("Quadratic equation")           # Graph name
mptpy.xlabel("values of x")                 # name of x axis
mptpy.ylabel("Values of y")                 # name of y axis

mptpy.grid(color = 'green', linestyle = '--', linewidth = 0.5)
mptpy.show()