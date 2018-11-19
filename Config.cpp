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
#include "Consola.h"

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
    string aux;
    char c, cc;
    
    f >> aux >> lin;
    f >> aux >> col;
    
    vector<vector<char>> mapa(lin);
    
    Consola::clrscr();
    for(int i=0; i<lin; i++){
        for(int j=0; j<=col; j++){
            f.get(c);
            mapa[i].push_back(c);
            if(c == '.'){
                Consola::setBackgroundColor(Consola::AZUL_CLARO);
                cout << c << c;
            }else if(c == '+'){
                Consola::setBackgroundColor(Consola::VERDE_CLARO);
                cout << c << c;
            }else if(c == 'a' || c == 'b'){
                Consola::setBackgroundColor(Consola::VERMELHO_CLARO);
                cout << c << ' ';
            }else if(c == 'A' || c == 'B'){
                Consola::setBackgroundColor(Consola::CYAN_CLARO);
                cout << c << ' ';
            }
        }
        cout << endl;
        for(int k=1; k<=col; k++){
            cc = mapa[i][k];
            if(cc == '.'){
                Consola::setBackgroundColor(Consola::AZUL_CLARO);
                cout << cc << cc;
            }else if(cc == '+'){
                Consola::setBackgroundColor(Consola::VERDE_CLARO);
                cout << cc << cc;
            }else if(cc == 'a' || cc == 'b'){
                Consola::setBackgroundColor(Consola::VERMELHO_CLARO);
                cout << ' ' << ' ';
            }else if(cc == 'A' || cc == 'B'){
                Consola::setBackgroundColor(Consola::CYAN_CLARO);
                cout << ' ' << ' ';
            }
        }
        cout << endl;
    }
    Consola::setBackgroundColor(Consola::BRANCO);
    m.setDados(mapa,lin,col);
    
    return true;
}