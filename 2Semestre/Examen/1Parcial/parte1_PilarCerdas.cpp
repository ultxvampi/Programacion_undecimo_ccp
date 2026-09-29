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
  Medicamento(){
    this-> nombre_med = "Sin nombre";
    this-> precioUnitario = 0;
    this-> stock = 0;
  }

  Medicamento(string nombre_med, int precioUnitario, int stock  ){
    this->nombre_med = nombre_med;
    this->precioUnitario = precioUnitario;
    this->stock = stock;
    }
    

  string getNombre(){
    return nombre_med;
  }

 bool despachar( int cantidad){
    if(cantidad <= stock){
        stock -= cantidad;
        return true;
    } 
    return false;

 }

 int valorInventario(){
    return precioUnitario * stock;
 }

};

// Procesar los comandos
int main(){
    int M;
    cin >> M;
    cin.ignore();

 vector<Medicamento> inventario;
 queue<pair<string,int>> pedidos;

 for (int i = 0; i < M ; i++ ){
    string comando;
    cin >> comando;

 if (comando == "agregar"){
    string nombre;
    int precio, stock;
    cin >> nombre >> precio >> stock;
    inventario.push_back(Medicamento(nombre, precio, stock));
    cout <<"Listo."<< endl; //esto es para ver yo si sirve en la terminal:c
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
    } else {
        string nombre = pedidos.front().first;
        int cantidad =  pedidos.front().second;
        pedidos.pop();

        // buscar inventario

        bool encontrado = false;
        for(auto& medicina : inventario){
            if(medicina.getNombre()== nombre){
                encontrado = true;
            }
            if(medicina.despachar(cantidad)){
                cout << "Despachado: " << nombre << " x " << cantidad << endl;
            } else{
                cout << "Stock insuficiente." << endl;
            }
            break;
        }   if(!encontrado){
             cout << "No hay." << endl;
        }
    }
 }
 else if(comando == "inventario") {
    int total = 0;
    for(auto& medicina : inventario){
        total += medicina.valorInventario();
    }
    cout << "Valor del inventario: " << total << endl;
 }
 return 0;
}
}

// CREO QUE NO SIRVEEEEEEEEEEEEEE, bueno al menos a mí no me deja tirar más (M)
// cuando hago el ejemplo de entrada y eso, pero si como q imprime lo de agregar, al menos
// no me da errores en todo :,,,,c
// igual en la parte del int tengo una confusioooon con los nombres, porq di si uno hace
// string nombre; debería de estar en ese comando(¿) pero ns si podia poner eso o 
// obligatoriamente nombre_med yyyyyy pues intente cambiarlo pero m mando como mil erroresssss