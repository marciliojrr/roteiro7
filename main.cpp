#include "funcionario.h"
#include "consultor.h"

int main () {
    int m;
    string n;
    float s;
    Consultor consult(m,n,s);

    cout << "Digite a matricula do funcionario:" << ">> " << endl;
    cin >> m;
    cout << "Digite o nome do funcionario:" << ">> " << endl;
    cin >> n;
    cout << "Digite o salario do funcionario:" << ">> " << endl;
    cin >> s;
    cout << "Funcionario: " << consult.getNome() << endl
    << "Matricula: " << consult.getMat() << endl
    << "Novo salario: R$ " << consult.getSal() << endl;
    return 0;
}
