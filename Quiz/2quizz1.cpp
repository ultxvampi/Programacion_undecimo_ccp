int contarMayores(const vector<int>& datos, int limite) {
    int contar = 0;
    for (int valor : datos) {
        if (valor > limite) {
            contar++;
        }
    }
    return contar;
}
