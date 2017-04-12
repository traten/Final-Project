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
    bool does_a_dog_die;
    
public:
    Traits();
    double getTrait(string trait);
    void setTrait(string trait, double amountToSet);
    void modifyCompliments(string trait1, double modAmount);
};

Traits::Traits(){
    this-> violent = 50.0;
    this-> pansy = 50.0;
    this-> serious = 50.0;
    this-> carefree = 50.0;
    this-> imaginative = 50.0;
    this-> practical = 50.0;
    this-> religious = 50.0;
    this-> thrillseeker = 50.0;
    this-> playItSafe = 50.0;
    this-> empathetic = 50.0;
    this-> apathetic = 50.0;
    this-> optimistic = 50.0;
    this-> pessimistic = 50.0;
    this-> predictable = 50.0;
    this-> unpredictable = 50.0;
    this-> adventure = 50.0;
    this-> history = 50.0;
}

double Traits::getTrait(string trait){
    if (trait.compare("violent")){
        return this->violent;
    }
    if (trait.compare("pansy")){
        return this->pansy;
    }
    if (trait.compare("serious")){
        return this->serious;
    }
     if (trait.compare("carefree")){
        return this->carefree;
    }
     if (trait.compare("imaginative")){
        return this->imaginative;
    }
     if (trait.compare("practical")){
        return this->practical;
    }
     if (trait.compare("religious")){
        return this->religious;
    }
     if (trait.compare("thrillseeker")){
        return this->thrillseeker;
    }
     if (trait.compare("playItSafe")){
        return this->playItSafe;
    }
     if (trait.compare("empathetic")){
        return this->empathetic;
    }
     if (trait.compare("apathetic")){
        return this->apathetic;
    }
     if (trait.compare("optimistic")){
        return this->optimistic;
    }
     if (trait.compare("pessimistic")){
        return this->pessimistic;
    }
     if (trait.compare("predictable")){
        return this->predictable;
    }
     if (trait.compare("unpredictable")){
        return this->unpredictable;
    }
     if (trait.compare("adventure")){
        return this->adventure;
    }
     if (trait.compare("history")){
        return this->history;
    }
}

void Traits::modifyCompliments(string trait1, double modAmount){
    if (trait1.compare("violent")){
        violent += modAmount;
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

void Traits::setTrait(string trait, double modAmount){
    if(trait.compare("adventure")){
        this->adventure += modAmount;
    }
    if(trait.compare("religious")){
        this->religious += modAmount;
    }
    if(trait.compare("history")){
        this->history += modAmount;
    }
}

#endif /* TRAIT_H */

