from random import randrange
from time import time

f=250
matriz1=[]
matriz2=[]
resultado=[]

#creacion de matrices
for i in range(f):
	matriz1.append([0]*f)
	matriz2.append([0]*f)
	resultado.append([0]*f)
	
#valores aleatorios
for i in range(f):
	for j in range(f):
		matriz1[i][j]=randrange(0,10)
		matriz2[i][j]=randrange(0,10)
		
		
##calculo y asignacion multiplicacion de matrices
auxiliar = 0

tiempo_inicial=time()		#--------------------------------------------

for fila in range(f):
	for columna in range(f):
		auxiliar=0
		for i in range(f):
			auxiliar+=matriz1[fila][i]*matriz2[i][columna]
			
		resultado[fila][columna]=auxiliar
tiempo_final=time()
tiempo_ejecucion = tiempo_final - tiempo_inicial
		
print ("Tiempo:",tiempo_ejecucion,"tamanho",f)
		
