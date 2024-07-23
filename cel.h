//
// Created by john on 5/31/24.
//

#ifndef CEL_H
#define CEL_H

class cel {
    cel *ante = nullptr;
    cel *prox = nullptr;
    int dado = 0;
    int prioridade = 0;

public:
    cel(int dado, int prioridade);
    cel* getAnte();
    cel* getProx();
    int getDado();
    int getPrio();
    void setAnte(cel *ante);
    void setProx(cel *prox);
    void setDado(int dado);
    void setPrio(int prioridade);
};

#endif //CEL_H
