/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Navio.h
 * Author: Diogo Santos
 *
 * Created on 9 de Novembro de 2018, 20:18
 */

#ifndef NAVIO_H
#define NAVIO_H

class Navio {
    int tipo;
    int preco;
    int tripulacao;
    int quantAgua;
    int quantPeixe;
public:
    Navio();
    Navio(char c);
    Navio(const Navio& orig);
    virtual ~Navio();
private:

};

#endif /* NAVIO_H */
