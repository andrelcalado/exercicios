#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


bool equal(float a, float b){
    return fabs(a - b) < 0.0001;
}

class Conta{
private:
    int numero;
    float saldo;
    vector<float> operacoes;

public:
    Conta(int numero, float saldo = 0.0){
        this->numero = numero;
        this->saldo = saldo;
        operacoes.push_back(saldo);
    }

    //nao permitir valor acima do saldo ou valor negativo
    bool saque(float value){
        if (value > 0 && value <= saldo) {
            saldo -= value;
            operacoes.push_back(-value);
            return true;
        }
        return false;
    }
    //nao permitir valor negativo
    bool deposito(float value){
        if (value > 0 ){
            saldo += value;
            operacoes.push_back(value);
            return true;
        }
        return false;
    }
    int getConta(){
        return numero;
    }

    float getSaldo(){
        return saldo;
    }

    //se this tiver saldo suficiente, retire
    //e deposite na conta other
    bool transferencia(Conta &other, float value){
        if(saque(value)){
            other.deposito(value);
            return true;
        }
        return false;
    }

    //valores positivos significam deposito
    //valores negativos significam saque
    vector<float> getExtrato(){
        return operacoes;
    }


};

int main()
{
    Conta c1(21, 0.0);
    Conta c2(22, 1.1);

    cout << (c1.getConta() == 21) << endl;
    cout << (equal(c2.getSaldo(), 1.1)) << endl;

    c2.deposito(400);

    cout << (equal(c2.getSaldo(), 401.1)) << endl;

    c2.transferencia(c1, 200);

    cout << (equal(c2.getSaldo(), 201.1)) << endl;
    cout << (equal(c1.getSaldo(), 200)) << endl;

    vector<float> resultado;
    resultado.push_back(1.1);
    resultado.push_back(400);
    resultado.push_back(-200);

    cout << (c2.getExtrato() == resultado) << endl;

    return 0;
}
