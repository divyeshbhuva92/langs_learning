# Write a python program to plot the algebraic equation: 10x + 14 for x=-10 to 10.

import matplotlib.pyplot as mptpy
import numpy as np

x = np.arange(-10, 10, 0.5)                   # np.arrange(range_start, range_stop, step)
y = (10*x) + 14 

print('value of x :' , x)
print('value of y :' , y)

mptpy.plot(x, y)

mptpy.title("10x + 14")                     # Graph name
mptpy.xlabel("values of x")                 # name of x axis
mptpy.ylabel("Values of y")                 # name of y axis

mptpy.grid(color = 'green', linestyle = '--', linewidth = 0.5)
mptpy.show()