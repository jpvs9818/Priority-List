//
// Created by john on 5/31/24.
//

#ifndef FILAPRIORIDADE_H
#define FILAPRIORIDADE_H
#include "cel.h"

class filPr {
    cel *cabeca = nullptr;

    public:
    const unsigned int min = 1;
    const unsigned int max = 5;
    void addCel(int dado, int prioridade);
    void remCel();
    void exibeFila();
    void removeTudo();
};



#endif //FILAPRIORIDADE_H
