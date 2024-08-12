# matplotlib example...

import matplotlib.pyplot as plt
import numpy as np

# linear graph --------------------------------
# xpoints = np.array([0, 6])
# ypoints = np.array([0, 250])

# zig-zag linear graph --------------------------------
xpoints = np.array([1, 2, 6, 8])
ypoints = np.array([3, 8, 1, 10])

plt.plot(xpoints, ypoints)

plt.xlabel("Time")                      # to name the x axis
plt.ylabel("Amplitude")                 # to name the y axis

plt.title("Weekly improvement")         # to name the graph

plt.show()