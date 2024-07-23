//
// Created by john on 5/31/24.
//

#include "cel.h"

cel::cel(int dado, int prioridade) {
    this->dado = dado;
    this->prioridade = prioridade;
}

cel* cel::getAnte() {
    return this->ante;
}

cel* cel::getProx() {
    return this->prox;
}

int cel::getDado() {
    return this->dado;
}

int cel::getPrio() {
    return this->prioridade;
}

void cel::setAnte(cel *ante) {
    this->ante = ante;
}

void cel::setProx(cel *prox) {
    this->prox = prox;
}

void cel::setDado(int dado) {
    this->dado = dado;
}

void cel::setPrio(int prioridade) {
    this->prioridade = prioridade;
}