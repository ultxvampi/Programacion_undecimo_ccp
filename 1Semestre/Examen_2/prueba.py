def mcd(a, b):
    while a != 0:
        a = b
        b = a % b
    return a

a = int(input("Valor de a: "))
b = int(input("Valor de b: "))

print(mcd(a,b))

