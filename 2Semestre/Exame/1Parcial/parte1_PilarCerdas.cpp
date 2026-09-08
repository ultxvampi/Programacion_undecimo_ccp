#include <iostream>
#include <queue>
#include <string>
#include <vector>
///Farmacia, FIFO -> queue
using namespace std;

//Clase medicamento --Caada med tiene nombre, precio y stock. los pedidos son FIFO y hay
// que administrar el inventario y los pedidoss //Usar Pair

class Medicamento{
 private:
    string nombre_med;
    int precioUnitario;
    int stock;

 public:
  Medicamento(string nombre_med){
    this-> nombre_med = "Sin nombre";
    this-> precioUnitario = 0;
    this-> stock = 0;
  }

  Medicamento(string nombre_med){
    this->nombre_med = nombre;
  }

    Medicamento(int precioUnitario){
    this->stock = stock;
  }

    Medicamento(int stock){
    this->stock = stock;
  }

  string getNombre(){
    return nombre_med;
  }

 bool despachar( int cantidad){
    if(cantidad <= stock){
        stock -= cantidad;
        return true;
    } else return false;

 }

 int valorInventario(){
    return precioUnitacio * stock;
 }

};

// Procesar los comandos
int main(){
    int M;
    cin >> M;
    cin.ignore();

 vector<Medicamento>;

 queue<pair<string,in>>;

 for (int i = 0; i< M ; i++ ){
    string comando;
    cin >> comando;

 }

 if (comando == "agregar"){
    string nombre;
    int precio, stock;

    cin >> nombre >> precio >> stock;

    inventario.push_back(Medicamento(nombre, precio, stock));
 } 
 else if (comando == "pedido"){
    string nombre;
    int cantidad;
    cin >> nombre >> cantidad;
    pedidos.push({nombre, cantidad});

 }

 else if (comando == "procesar"){
    if(pedidos.empty()){
        cout << "No hay pedidos pendientes." << endl;
    }
 }


 ///COMANDOS

 //Agregar nombre precio stock, crea Medicamento con esos datos

 // Pedido nombre cantidad, registra pedido de cantidad unidades del medicamento nombre

 //Procesar atiende el pedido más antiguo en la fila, lo retira, lo busca y lo despacha
 //Si el despacho fue exitoso imprime Despachado: NOMBRE X CANTIDAD

 //Si no habia tanto stock imprime Stock insuficiente: NOMBRE

 //Si no hay pedidps pendientes: No hay pedidos pendientes

 //Inventario recorre el inventario, suma el valor Inventario() de cada med e imprime
 //Valor del inventario: x
}

