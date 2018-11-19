/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Diogo Santos
 *
 * Created on 9 de Novembro de 2018, 19:50
 */

#include "Includes.h"
#include "Consola.h"
#include "Config.h"

int lerComandos(string s, bool b){
    if(s == "sair") return 1;
    else if(b){
        if(s == "compranav") return 3;
    }
    else if(s == "config" && !b) return 2;
    else return 0;
}
int main(int argc, char** argv) {
    string cmd;
    string nomeFich;
    char tipo;
    Config cfg;
    Mapa map;
    Jogador jog;
    bool fase2 = false;
    
    //Cores
    Consola::setBackgroundColor(Consola::BRANCO);
    Consola::setTextColor(Consola::PRETO);
    //Tamanho consola
    Consola::setScreenSize(25,60);
    //Limpar Consola
    Consola::clrscr();
    
    //Enquanto nao e enter
    while(Consola::getch() != 13){
        Consola::gotoxy(20,9);
        cout << "Bem vindo";
        Consola::gotoxy(10,10);
        cout << "Prima ENTER para continuar...";
    }
    
    Consola::clrscr();
    Consola::gotoxy(0,0);
    cout << "Ajuda: " << endl;
    cout << "'sair' -> Terminar jogo" << endl;
    while(true){
        cout << "> ";
        cin >> cmd;
        //Interpreta
        switch(lerComandos(cmd, fase2)){
            case 1: cout << "Adeus!" << endl;
            exit(EXIT_SUCCESS);
            break;
            
            case 2: cin >> nomeFich;
            if(!cfg.setDados(nomeFich, map, jog)){
                cout << "Erro ao ler ficheiro!" << endl; break;
            }
            Consola::clrscr();
            Consola::gotoxy(0,0);
            cout << map.GetMapa();
            Consola::gotoxy(0,10);
            fase2 = true;
            break;
            
            case 3: cin >> tipo;
            if(tipo == 'V' || tipo == 'G' || tipo == 'E' || tipo == 'F'){
                
            }else cout << "Tipo de Navio errado!";
            break;   
            
            default: cout << "Comando Desconhecido" << endl;
        }
    }
    return 0;
}
