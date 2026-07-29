N = int(input()) # num arbustos(¿ de café
orden = list(map(int, input().split())) #numerar posicion arbustos:b

posicion = {arb_cafe: i + 1 for i, arb_cafe in enumerate(orden)} # Costo de moverse 1 + i

costo_total = 0
for i in range(1, N): # arbustus de café d 1 hasta N 
    distancia = abs(posicion[i] - posicion[i + 1]) #comienza con el arbusto num 1, sin costo asociado.
    costo_total += i * distancia
    
print(costo_total)