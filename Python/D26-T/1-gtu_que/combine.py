# eq: y = x² + 2x + 1

import matplotlib.pyplot as mptpy
import numpy as np

a = 1
b = 2
c = 1

x = np.arange(-5, 5, 0.1)           # np.arrange(range_start, range_stop, step)
y = (x**2) + (2*x) + 1
y1 = np.sin(x*np.pi)
y2 = np.cos(x*np.pi)

print('value of x :' , x)
print('value of y :' , y)

mptpy.plot(x, y, color='purple')
mptpy.plot(x, y1, color='red')
mptpy.plot(x, y2, color='blue')

mptpy.title("x² + 2x + 1")           # Graph name
mptpy.xlabel("values of x")          # name of x axis
mptpy.ylabel("Values of y")          # name of y axis

mptpy.grid(color = 'green', linestyle = '--', linewidth = 0.3)
mptpy.show()