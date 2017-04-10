#include "consultor.h"

Consultor::Consultor(int m, string n, float s) {
    setMat(m);
    setNome(n);
    setSal(s);
}
void Consultor::setMat(int m) {
    mat = m;
}
void Consultor::setNome(string n) {
    nome = n;
}
void Consultor::setSal(float s) {
    s = (110/100) * s;
    sal = s;
}
int Consultor::getMat() {
    return mat;
}
string Consultor::getNome() {
    return nome;
}
float Consultor::getSal() {
    return sal;
}
