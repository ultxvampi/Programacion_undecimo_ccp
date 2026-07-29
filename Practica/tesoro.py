matriz= [list(map(int, input().split())) for _ in range(3)] # matriz de 3*3

principal = [matriz[i][i] for i in range(3)] #diagonal 1
secundaria = [matriz[i][2 - i] for i in range(3)] #diagonal 2
#son iguales¿ si -> encontrado, no -> sigue
if principal == secundaria: 
    print("Tesoro encontrado")
else:
    print("Sigue buscando")
