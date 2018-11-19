/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Porto.h
 * Author: Diogo Santos
 *
 * Created on 9 de Novembro de 2018, 20:31
 */

#ifndef PORTO_H
#define PORTO_H

class Porto {
    char nome;
    int soldados;
    bool amizade;
public:
    Porto();
    Porto(const Porto& orig);
    virtual ~Porto();
private:

};

#endif /* PORTO_H */

