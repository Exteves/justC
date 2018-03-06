#include <iostream>
#include "contador.h"
using namespace std;

int main()
{
    cout <<  "Teatro" << endl;

    int opc;
    int linha, coluna;
    Contador t1;

    do{
       for(int i=0;i<LINE;i++){
            for(int j=0;j<COL;j++){
                cout<<"["<<t1.teatro[i][j]<<"]";
            }
            cout<<endl;
        }

        cout<<"1-Reservar"<<endl;
        cout<<"2-Devolver"<<endl;
        cout<<"3-Exibir"<<endl;
        cout<<"4-Fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
        case 1:
            cout<<"selecione"<<endl;
            cin>>coluna;
            cin>>linha;
            t1.incrementa(linha, coluna);
            break;
        case 2:
            cout<<"selecione"<<endl;
            cin>>coluna;
            cin>>linha;
            t1.decrementa(linha, coluna);
            break;
        case 3:
            cout<<"Valor atual:"<<t1.mostraTeatro(linha, coluna)<<endl;
            break;
        case 4:
            cout<<"Fim...."<<endl;
            break;
        default:
            cout<<"opcao invalida..."<<endl;
            break;
        }
    }while (opc!=4);

    return 0;
}
