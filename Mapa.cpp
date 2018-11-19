/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mapa.cpp
 * Author: Diogo Santos
 * 
 * Created on 10 de Novembro de 2018, 17:47
 */

#include "Mapa.h"

Mapa::Mapa() {
}

Mapa::Mapa(int l, int c, string mapa):linhas(l),colunas(c),mapa(mapa) {
}

Mapa::Mapa(const Mapa& orig) {
}

Mapa::~Mapa() {
}

void Mapa::setDados(string a, int b, int c){
    mapa = a;
    linhas = b;
    colunas = c;
}

string Mapa::GetMapa() const {
    return mapa;
}
