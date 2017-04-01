/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   trait.h
 * Author: Claire
 *
 * Created on March 31, 2017, 4:03 PM
 */

#ifndef TRAIT_H
#define TRAIT_H

#include <string>
#include <iostream>

using namespace std;

class Traits{
private:
    double violent;
    double pansy;
    double serious;
    double carefree;
    double imaginative;
    double practical;
    double religious;
    double thrillseeker;
    double playItSafe;
    double empathetic;
    double apathetic;
    double optimistic;
    double pessimistic;
    double predictable;
    double unpredictable;
    double adventure;
    double history;
public:
    void getTrait(double trait);
    void setTrait(double amountToSet);
    void modifyCompliments(string trait1, double modAmount);
};

void Traits::modifyCompliments(string trait1, double modAmount){
    if (trait1.compare("violent")){
        this->violent += modAmount;
        this-> pansy -= modAmount;
    }
    if (trait1.compare("pansy")){
        this->pansy += modAmount;
        this->violent -= modAmount;
    }
    if(trait1.compare("serious")){
        this->serious += modAmount;
        this->carefree -= modAmount;
    }
    if(trait1.compare("carefree")){
        this->carefree += modAmount;
        this->serious -= modAmount;
    }
    if(trait1.compare("imaginative")){
        this->imaginative += modAmount;
        this->practical -= modAmount;
    }
    if(trait1.compare("practical")){
        this->practical += modAmount;
        this->imaginative -= modAmount;
    }
    if(trait1.compare("thrillseeker")){
        this->thrillseeker += modAmount;
        this->playItSafe -= modAmount;
    }
    if(trait1.compare("playItSafe")){
        this->playItSafe += modAmount;
        this->thrillseeker -= modAmount;
    }
    if (trait1.compare("empathetic")){
        this->empathetic += modAmount;
        this->apathetic -= modAmount;
    }
    if (trait1.compare("apathetic")){
        this->apathetic += modAmount;
        this->empathetic -= modAmount;
    }
    if (trait1.compare("optimistic")){
        this->optimistic += modAmount;
        this->pessimistic -= modAmount;
    }
    if (trait1.compare("pessimistic")){
        this->pessimistic += modAmount;
        this->optimistic -= modAmount;
    }
    if (trait1.compare("predictable")){
        this->predictable += modAmount;
        this->unpredictable -= modAmount;
    }
    if (trait1.compare("unpredictable")){
        this->unpredictable += modAmount;
        this->predictable -= modAmount;
    }
}

#endif /* TRAIT_H */

