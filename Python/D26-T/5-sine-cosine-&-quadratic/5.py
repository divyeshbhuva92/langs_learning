# Creating x axis with range and y axis with Sine
# Function for Plotting Cosine Graph

import numpy as np
import matplotlib.pyplot as plt

x = np.arange(-5,5,0.1)
y = np.cos(x)
y1 = np.sin(x)
y2 = ((x**2)+(2*x)+1)

plt.subplot(2,2,1)
plt.plot(x, y, color='green')
plt.title('subplot 1')

plt.subplot(2,2,2)
plt.plot(x, y1, color='blue')
plt.title('subplot 2')

plt.subplot(2,2,3)
plt.plot(x, y2, color='Red')
plt.title('subplot 3')

plt.subplot(2,2,4)
plt.plot(x, y, color='green')
plt.plot(x, y1, color='blue')
plt.plot(x, y2, color='Red')
plt.title('subplot 4')

plt.show()