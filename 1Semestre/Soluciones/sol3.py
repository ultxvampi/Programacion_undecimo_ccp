def agregar(vagones, p, v):
    for i in range(p):
        vagones[i] += v

def consultar(vagones, p):
    return vagones[p-1]

N = int(input())
Q = int(input())
vagones = [0 for _ in range(N)]

for i in range(Q):
    linea = input().split()

    if linea[0] == "A":
        p = int(linea[1])
        v = int(linea[2])

        agregar(vagones, p,v)
    elif linea[0] == "C":
        p = int(linea[1])

        print(consultar(vagones, p))