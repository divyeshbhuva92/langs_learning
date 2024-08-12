import numpy as np
import matplotlib.pyplot as plt

x = np.arange(-5, 5, 0.1)
y = np.cos(x)

# Plotting sine Graph
plt.title("Cosine Plot")
plt.plot(x, y, color='blue')
plt.grid()
plt.show()