import matplotlib.pyplot as plt

sem = [1,2,3,4,5,6,7,8]
spi_list = []

for i in range (0,8):
    spi = float(input('enter spi : '))
    spi_list.append(spi)

# Spi_per_sem = spi_list

plt.pie(sem, labels = spi_list)
plt.title("transcript")

# Adding the legends
# plt.legend(["pie"])
plt.show()