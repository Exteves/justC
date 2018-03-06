#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

const int LINE = 10;
const int COL = 10;

struct Contador
{
    unsigned int contador=0;
    bool teatro[LINE][COL];
    //CONSTRUTOR É SEMPRE UMA FUNÇÃO COM O NOME DA STRUCT
    Contador()
    {
        contador = 0;
        for(int i=0;i<LINE;i++){
            for(int j=0;j<COL;j++){
                teatro[i][j] = 0;
            }
        }
    }

    void incrementa(int LINE, int COL)
    {
        teatro[LINE][COL] = 1;
        contador++;
    }

    void decrementa(int LINE, int COL)
    {
        if(teatro[LINE][COL]==0)
        {
            teatro[LINE][COL]=0;
        }
        else
        {
            teatro[LINE][COL]=0;
            contador--;
        }
    }

    int mostraTeatro(int LINE, int COL){
            return teatro[LINE][COL];
        }
};


#endif // CONTADOR_H_INCLUDED
