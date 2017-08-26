#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Contato{
private:
    string nome, email;
    vector<string> fones;
public:

    Contato(string _nome = ""){
        nome = _nome;
    }

    static bool validateFone(string fone){
        for(auto c : fone)
            if(c < '0' || c > '9')
                return false;
        return true;
    }

    static bool validateEmail(string value){
        size_t posArroba = value.find("@");
        size_t posPonto = value.find(".");
        if(posArroba == string::npos)//nao encontrou
            return false;
        if(posPonto == string::npos)
            return false;
        if(posPonto <= posArroba + 1)//ponto depois de arroba
            return false;
        if(posPonto == (value.size() - 1))//algo depois de ponto
            return false;
        return true;
    }

    string getNome() const{
        return this->nome;
    }

    bool setNome(string nome){
        if(nome == "")
            return false;
        this->nome = nome;
        return true;
    }

    string getEmail() const{
        return email;
    }

    bool setEmail(const string &value){
        if(!validateEmail(value))
            return false;
        email = value;
        return true;
    }

    bool addFone(string fone){
        //numero invalido
        if(Contato::validateFone(fone) == false)
            return false;
        //ja existe esse numero
        for(string& tel : fones)
            if(tel == fone)
                return false;
        fones.push_back(fone);
        return true;
    }

    bool rmFone(string fone){
        //procura o telefone
        for(int i = 0; i < (int) fones.size(); ++i)
            if(fones[i] == fone){
                fones.erase(fones.begin() + i);
                return true;
            }
        return false;
    }

    vector<string> getAllFones() const{
        return fones;
    }

    string toString() const{
        stringstream ss;
        ss << "Nome: " << nome << "; Email: " << email
           << "; Fones:";

        for(int i = 0; i < (int) fones.size(); i++)
            ss  << " " << fones[i] << ",";
        string saida = ss.str();
        saida.back() = ' ';//removendo ultima virgula
        return saida;
    }
};

class Gui{
    Contato * contato;
public:
    Gui(Contato * contato){
        this->contato = contato;
    }

    void guiContato(){
        string op = "";
        while(op != "sair"){
            cout << "---------------\n";
            cout << contato->toString() << endl;
            cout << "Menu Contato\nnome _nome, email _email; add _fone, rm _fone, sair\n>> ";
            cin >> op;

            if(op == "nome"){
                string nome;
                cin >> nome;
                contato->setNome(nome);
            }
            else if(op == "email"){
                string email;
                cin >> email;
                if(!contato->setEmail(email))
                    cout << "Email invalido" << endl;
            }
            else if(op == "add"){
                string fone;
                cin >> fone;
                if(!contato->addFone(fone))
                    cout << "Telefone ja existe ou invalido" << endl;
            }
            else if(op == "rm"){
                string fone;
                cin >> fone;
                if(!contato->rmFone(fone))
                    cout << "Telefone nao existe" << endl;

            }
        }
    }
};

int main(){


    Contato contato("");
    Gui gui(&contato);
    gui.guiContato();

    return 0;
}
