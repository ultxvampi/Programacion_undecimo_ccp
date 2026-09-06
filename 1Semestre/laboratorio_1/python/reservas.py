def hay_cupo(reservas, capacidad,nombre):
   if capacidad > 0:
      print("Reserva registrada")
      capacidad -= 1
      print(f"Cupos disponibles: {capacidad}")
      reservas.append(nombre)
   else:
      print("Cupos llenos... :c")
   return capacidad
def mostrar_resumen(reservas, capacidad):
   if capacidad == 0:
       print(f"Ya no hay más cupos/n" \
       "---Resumen---" \
       "Reservas aceptadas: {reservas} {capacidad}/5")
       print(f"Cupos disponibles: {capacidad}") 
   else: 
       print(f"Aún quedan {capacidad} cupos")
def main():
   capacidad = 5
   reservas = []
   
   while capacidad > 0: #nosirve, porarreglar, yasirve
      nombre = input("Ingrese su nombre para reservar o salir para obviamente salir:")
      if nombre.lower() == "salir":
          break
      capacidad = hay_cupo(reservas, capacidad,nombre)
   mostrar_resumen(reservas, capacidad)
main() #>:C 