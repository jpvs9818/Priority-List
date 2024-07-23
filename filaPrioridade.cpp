//
// Created by john on 5/31/24.
//

#include "filaPrioridade.h"
#include <iostream>

void filPr::addCel(int dado, int prioridade) {
    if(this->cabeca == nullptr) {
        cabeca = new cel(dado,this->max);   //cabeca necessita ser removida por ultimo
    }
    else {
        cel *temp = cabeca, *temp2 = cabeca;
        while(temp->getProx() != nullptr) {
            temp2 = temp;
            temp = temp->getProx();
        }
        temp->setProx(new cel(dado,prioridade));
        temp = temp->getProx();
        temp->setAnte(temp2);
    }
}
void filPr::remCel() {
    if (cabeca != nullptr) {
        cel* temp1 = cabeca;
        cel* temp2 = cabeca->getProx();

        // Encontra a célula com a menor prioridade
        while (temp2 != nullptr) {
            if (temp2->getPrio() <= temp1->getPrio()) { //cuidando para nao remover a cabeca acidentalmente
                temp1 = temp2;
            }
            temp2 = temp2->getProx();
        }

        cel* temp3 = temp1->getAnte();
        temp2 = temp1->getProx();

        if (temp3 != nullptr) {
            temp3->setProx(temp2);
        } else {
            // temp1 é a cabeça
            cabeca = temp2;
        }

        if (temp2 != nullptr) {
            temp2->setAnte(temp3);
        }

        delete temp1;
    } else {
        std::cout << "Sem valores para remover.\n\n";
    }
}

void filPr::exibeFila() {
    cel *temp = cabeca;
    if(temp != nullptr) {
        int i = 1;
        while(temp != nullptr) {
            std::cout << "conteudo " << i << ": " << temp->getDado()
            << "\nprioridade: " << temp->getPrio() <<" \n\n";
            i++;
            temp = temp->getProx();
        }
    }
    else {
        std::cout << "Sem valores registrados\n\n";
    }
}
void filPr::removeTudo() {
    cel *temp = cabeca;
    if(cabeca != nullptr) {
        while(temp->getProx() != nullptr) {
            temp = temp->getProx();
        }
        while(temp != nullptr) {
            cel *temp2 = temp->getAnte();
            delete temp;
            temp = temp2;
        }
    }
}
