import numpy as np
import matplotlib.pyplot as plt

x = np.arange(-5, 5, 0.1)
y = np.sin(x)

# Plotting sine Graph
plt.title("Sine Plot")
plt.plot(x, y, color='red')
plt.grid()
plt.show()