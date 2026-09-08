/*
 * Ejemplo integrador: combina STL (vector, string, set, map, pair, tuple,
 * iteradores, algoritmos, stack/queue/priority_queue) con POO
 * (clases, constructores, destructor, this, encapsulamiento).
 *
 * Escenario: un sistema simple de gestión de estudiantes y su cola de atención.
 */

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <utility>
#include <tuple>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

// ---------------------------------------------------------
// 6-8. POO: clase con encapsulamiento, constructores, destructor y this
// ---------------------------------------------------------
class Estudiante {
private:                          // 8.1 encapsulamiento
    string nombre;
    double promedio;

public:
    Estudiante() : nombre("Sin nombre"), promedio(0.0) {   // 7.1 constructor por defecto
        cout << "[Constructor por defecto] " << nombre << endl;
    }

    Estudiante(string nombre, double promedio) {           // 7.1 constructor parametrizado
        this->nombre = nombre;       // 7.4 puntero this (distingue atributo de parámetro)
        this->promedio = promedio;
        cout << "[Constructor parametrizado] " << this->nombre << endl;
    }

    Estudiante(const Estudiante& otro) {                    // 7.2 constructor de copia
        nombre = otro.nombre;
        promedio = otro.promedio;
        cout << "[Constructor de copia] " << nombre << endl;
    }

    ~Estudiante() {                                          // 7.3 destructor
        cout << "[Destructor] liberando a " << nombre << endl;
    }

    // 8.2 getters y setters
    string getNombre() const { return nombre; }
    double getPromedio() const { return promedio; }

    void setPromedio(double p) {
        if (p >= 0.0 && p <= 10.0) {   // 8.3 validación oculta al usuario externo
            promedio = p;
        } else {
            cout << "Promedio inválido para " << nombre << endl;
        }
    }
};

// 2.3 función que retorna múltiples valores usando tuple
tuple<double, double, double> analizarPromedios(const vector<Estudiante>& lista) {
    double suma = 0, mayor = lista[0].getPromedio(), menor = lista[0].getPromedio();
    for (const auto& e : lista) {           // 3.3 range-based for sobre vector (iterable)
        suma += e.getPromedio();
        mayor = max(mayor, e.getPromedio());
        menor = min(menor, e.getPromedio());
    }
    double promedioGeneral = suma / lista.size();
    return make_tuple(promedioGeneral, mayor, menor);
}

int main() {
    // ---------------------------------------------------------
    // 1.1 vector como contenedor dinámico de objetos
    // ---------------------------------------------------------
    vector<Estudiante> estudiantes;
    estudiantes.push_back(Estudiante("Ana", 8.5));
    estudiantes.push_back(Estudiante("Luis", 6.2));
    estudiantes.push_back(Estudiante("Marta", 9.1));
    estudiantes.push_back(Estudiante("Jose", 7.0));

    cout << "\n--- Lista de estudiantes ---\n";
    // 3.2 iterador explícito para recorrer el vector
    for (vector<Estudiante>::iterator it = estudiantes.begin(); it != estudiantes.end(); ++it) {
        cout << it->getNombre() << ": " << it->getPromedio() << endl;
    }

    // ---------------------------------------------------------
    // 4.1 sort: ordenar por promedio usando una lambda como comparador
    // ---------------------------------------------------------
    sort(estudiantes.begin(), estudiantes.end(),
         [](const Estudiante& a, const Estudiante& b) {
             return a.getPromedio() > b.getPromedio(); // descendente
         });

    cout << "\n--- Ordenados por promedio (mayor a menor) ---\n";
    for (const auto& e : estudiantes) {
        cout << e.getNombre() << ": " << e.getPromedio() << endl;
    }

    // ---------------------------------------------------------
    // 4.3 max_element / min_element
    // ---------------------------------------------------------
    auto mejor = max_element(estudiantes.begin(), estudiantes.end(),
                              [](const Estudiante& a, const Estudiante& b) {
                                  return a.getPromedio() < b.getPromedio();
                              });
    cout << "\nMejor promedio: " << mejor->getNombre() << " (" << mejor->getPromedio() << ")\n";

    // ---------------------------------------------------------
    // 2.3 / 2.2 tuple para retornar múltiples resultados
    // ---------------------------------------------------------
    auto [promedioGeneral, mayor, menor] = analizarPromedios(estudiantes); // structured bindings
    cout << "\nPromedio general: " << promedioGeneral
         << " | Mayor: " << mayor << " | Menor: " << menor << endl;

    // ---------------------------------------------------------
    // 1.3 set: nombres únicos registrados (sin duplicados, ordenado)
    // ---------------------------------------------------------
    set<string> nombresUnicos;
    for (const auto& e : estudiantes) {
        nombresUnicos.insert(e.getNombre());
    }
    nombresUnicos.insert("Ana"); // duplicado, se ignora

    cout << "\n--- Nombres únicos (set, orden alfabético) ---\n";
    for (const string& n : nombresUnicos) {
        cout << n << " ";
    }
    cout << endl;

    // ---------------------------------------------------------
    // 1.4 map: asociar nombre -> promedio para búsquedas rápidas
    // ---------------------------------------------------------
    map<string, double> mapaPromedios;
    for (const auto& e : estudiantes) {
        mapaPromedios[e.getNombre()] = e.getPromedio();
    }

    cout << "\n--- Consulta en map ---\n";
    string buscado = "Marta";
    if (mapaPromedios.find(buscado) != mapaPromedios.end()) {
        cout << buscado << " tiene promedio " << mapaPromedios[buscado] << endl;
    }

    // ---------------------------------------------------------
    // 2.1 pair: agrupar nombre y estado de aprobación
    // ---------------------------------------------------------
    vector<pair<string, bool>> estados;
    for (const auto& e : estudiantes) {
        estados.push_back(make_pair(e.getNombre(), e.getPromedio() >= 7.0));
    }

    cout << "\n--- Estado de aprobación (pair) ---\n";
    for (const auto& p : estados) {
        cout << p.first << ": " << (p.second ? "Aprobado" : "Reprobado") << endl;
    }

    // ---------------------------------------------------------
    // 5.1 stack: pila de revisión (últimos en llegar, primeros en revisar)
    // ---------------------------------------------------------
    stack<string> pilaRevision;
    for (const auto& e : estudiantes) {
        pilaRevision.push(e.getNombre());
    }

    cout << "\n--- Pila de revisión (LIFO) ---\n";
    while (!pilaRevision.empty()) {
        cout << pilaRevision.top() << " ";
        pilaRevision.pop();
    }
    cout << endl;

    // ---------------------------------------------------------
    // 5.2 queue: cola de atención en orden de llegada
    // ---------------------------------------------------------
    queue<string> colaAtencion;
    colaAtencion.push("Ana");
    colaAtencion.push("Luis");
    colaAtencion.push("Marta");

    cout << "\n--- Cola de atención (FIFO) ---\n";
    while (!colaAtencion.empty()) {
        cout << "Atendiendo a: " << colaAtencion.front() << endl;
        colaAtencion.pop();
    }

    // ---------------------------------------------------------
    // 5.3 priority_queue: atender primero al de mejor promedio
    // ---------------------------------------------------------
    priority_queue<pair<double, string>> colaPrioridad;
    for (const auto& e : estudiantes) {
        colaPrioridad.push(make_pair(e.getPromedio(), e.getNombre()));
    }

    cout << "\n--- Cola de prioridad (mejor promedio primero) ---\n";
    while (!colaPrioridad.empty()) {
        auto tope = colaPrioridad.top();
        cout << tope.second << " (" << tope.first << ")" << endl;
        colaPrioridad.pop();
    }

    // Al terminar main(), los destructores de cada Estudiante se ejecutan
    // automáticamente (7.3), liberando cada objeto del vector.
    cout << "\n--- Fin del programa ---\n";
    return 0;
}