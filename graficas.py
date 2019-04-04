import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ Ejercicio_clase22.cpp")
os.system("./a.out > datos.dat")

data = np.loadtxt("datos.dat")

plt.figure()
plt.hist(data,bins=60)
plt.savefig("datos.png")
