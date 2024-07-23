#include <iostream>
#include "filaPrioridade.h"

int menu(){
    int i = 0;
    std::cout << "Insira a operacao desejada"<<'\n' << '\n'
         << "1.Add valor" << '\n'
         << "2.Rem valor" << '\n'
         << "3.Mostrar valores da lista de prioridades" << '\n'
         << "4.Sair" << '\n';
    std::cin >> i;
    return i;
}

void case1(filPr &fila) {
    int i = 0; //dado
    int j = 0; //prioridade
    std::cout << "Insira um inteiro \n\n";
    std::cin >> i;
    std::cout << "Insira uma ordem de prioridade \n\n"
    << "Min: " << fila.min << '\n' << "Max: " << fila.max << "\n\n";
    do {
        std::cin >> j;
    }while(j > fila.max || j < fila.min);
    fila.addCel(i,j);
}

int main(){
    filPr fila;
    int i;
    do {
        i = menu();
        switch (i) {
            case 1:
                case1(fila);
                break;
            case 2:
                fila.remCel();
                break;
            case 3:
                fila.exibeFila();
                break;
            case 4:
                std::cout << "Saindo.";
                break;
            default:
                std::cout << "Insira um valor valido\n\n";
        }
    }while(i != 4);
    fila.removeTudo();
}