#!/usr/bin/python3
#A Karla le gusta estudiar escuchando «Lofi 24/7», un canal de música 
# por internet que nunca deja de transmitir. Cuando una parte le gusta mucho, 
# Karla anota el segundo de la transmisión en el que ocurre para volver a escucharla después.
#hora Karla quiere anotar un tercer segundo: uno que quede igual de lejos de que de a y b
#imprima los tres segundos que anotó Karla, ordenados de menor a mayor.

import sys
segundo = []
a = int(input())
b = int(input())
segundo.append(a)
segundo.append(b)
if a >= b:
   c = abs((a - b) + 1)
elif b >= a:
   c = abs(a - b)  
segundo.append(c)
segundo.sort()
print(f"{segundo[0]}\n{segundo[1]}\n{segundo[2]}\n")
  