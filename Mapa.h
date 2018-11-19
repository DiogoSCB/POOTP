/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mapa.h
 * Author: Diogo Santos
 *
 * Created on 10 de Novembro de 2018, 17:47
 */

#ifndef MAPA_H
#define MAPA_H
#include "Includes.h"
#include "Porto.h"

class Mapa {
    vector<vector<char>> mapa;
    int linhas, colunas;    
    vector<Porto> portos;
public:
    Mapa();
    Mapa(const Mapa& orig);
    virtual ~Mapa();
    void setDados(vector<vector<char>> a, int b, int c);
private:

};

#endif /* MAPA_H */

