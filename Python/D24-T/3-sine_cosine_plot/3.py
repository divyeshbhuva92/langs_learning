# sine-cosine plot :

import numpy as np
import matplotlib.pyplot as plt
 
# Creating x axis with range and y axis with Sine
# Function for Plotting Cosine Graph

x = np.arange(0, 5*np.pi, 0.1)
y1 = np.cos(x)
y2 = np.sin(x)
 
# Plotting coine Graph
plt.title("Cosine Plot")
plt.plot(x, y1, color='red')
plt.plot(x, y2, color='blue')
plt.grid()
plt.show()