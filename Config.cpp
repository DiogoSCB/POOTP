/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Config.cpp
 * Author: diogo_0oo7i2d
 * 
 * Created on 11 de Novembro de 2018, 16:06
 */

#include "Config.h"

Config::Config() {
}

Config::Config(const Config& orig) {
}

Config::~Config() {
}

bool Config::setDados(string s, Mapa& m, Jogador& j){
    ifstream f(s);
    if(!f) return false;
    int lin, col;
    string map, aux;
    
    f >> aux >> lin;
    f >> aux >> col;
    
    getline(f, aux);
    for(int i=0; i<lin; i++){
        getline(f, aux);
        map += aux + "\n";
    }
    m.setDados(map,lin,col);
    
    return true;
}