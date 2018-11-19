/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Config.h
 * Author: diogo_0oo7i2d
 *
 * Created on 11 de Novembro de 2018, 16:06
 */

#ifndef CONFIG_H
#define CONFIG_H
#include "Includes.h"
#include "Jogador.h"
#include "Mapa.h"

class Config {
    int probPirata;
    int precoNavio;
    int precoSold;
    int precoPeixe;
    int precoMercC;
    int precoMercV;
    int probEvent;
    int probTemp;
    int probSereia;
    int probCalm;
    int probMotim;
public:
    Config();
    Config(const Config& orig);
    virtual ~Config();
    bool setDados(string s, Mapa &m, Jogador &j);
private:

};

#endif /* CONFIG_H */

