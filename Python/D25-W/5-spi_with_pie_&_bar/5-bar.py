import matplotlib.pyplot as plt

sem = [1,2,3,4,5,6,7,8]
# spi_list = []
spi_list = [7.8,8.2,8.4,7.6,8.1,7.25,7.75,7.8]

# for i in range (0,8):
#     spi = float(input('enter spi : '))
#     spi_list.append(spi)

# Spi_per_sem = spi_list

plt.bar(sem, spi_list, color='skyblue')
plt.title("transcript")

# Adding the legends
plt.legend(["Bar"])
plt.grid()
plt.show()