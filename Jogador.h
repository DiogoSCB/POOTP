/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Jogador.h
 * Author: Diogo Santos
 *
 * Created on 9 de Novembro de 2018, 20:17
 */

#ifndef JOGADOR_H
#define JOGADOR_H
#include "Includes.h"
#include "Navio.h"

class Jogador {
    int moedas = 0;
    vector<Navio> frota;
    int pontuacao = 0;
    int posX = 0, posY = 0;
public:
    Jogador();
    Jogador(const Jogador& orig);
    virtual ~Jogador();
    void comprarNavio(char c);
private:

};

#endif /* JOGADOR_H */

