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
    string mapa;
    int linhas, colunas;
    vector<Porto> portos;
public:
    Mapa();
    Mapa(int l, int c, string mapa);
    Mapa(const Mapa& orig);
    virtual ~Mapa();
    void setDados(string a, int b, int c);
    string GetMapa() const;
    
private:

};

#endif /* MAPA_H */

