fila = []
capacidad = 100

# Recibe fila, indica si esta alguien en espera o no
def estaVacia(fila):
    return len(fila)== 0

#Recibe fila y capacidad, indica si se alcanzó el límite de personas esperando en fila
def estaLlena(fila, capacidad):
       if  len(fila) >= capacidad:
        print("La fila está llena")


#Recibe fila, capacidad y nombre de la persona que llega
def encolar(fila, capacidad, nombre):
    if not estaLlena(fila, capacidad):
        fila.append(nombre)
    else:
        print("Fila llena") 

# Recibe fila y atiende a la persona que ha esperado más, la retira de la fila y muestra su nombre
def atender(fila):
    if not estaVacia(fila):
     p = fila.pop(0)
     print(format("Atendiendo a {p}"))
    else:
        print("No hay nadie en fila")

#Recibe fila, muestra sin retirar a la persona que sigue
def frente(fila):
    if not estaVacia(fila):
        print(format("El siguiente es {fila[0]}"))
    else:
        print("No hay nadie en la fila")

#Recibe fila y da la cantidad de personas en la fila
def cantidad(fila):
    print(format("La cantidad en fila es {len(fila)}"))

# 1- Encolar, 2- Atender, 3- Quien sigue, 4- Cantidad en fila 5- Salir
def main():
    continuar = True
    while continuar == True:  
      print("---Cafeteria CCP---")
      print("1- Encolar persona")
      print("2- Atender al que sigue")
      print("3- Ver quien sigue")
      print("4- Cantidad de personas en fila")
      print("5- Salir") #se ve feo pero peor se veia con el salto de lineaaa n\
      opcion = int(input("Ingrese una opción: "))

      #Opcionesss del menú
      if opcion == 1:
         nombre = input("Ingrese su nombre:")
         encolar(fila, capacidad, nombre)
      if opcion == 2:
         atender(fila)
        
      if opcion == 3:
          frente(fila)
        
      if opcion == 4:
         cantidad(fila)
        
      elif opcion == 5:
          continuar == False
            
main()

#No sirvo para la programación ajdfeijuemevoyaquedarayudadiosv perdon por todoooooooooo