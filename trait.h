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
    getTrait(double trait);
    setTrait(double amountToSet);
    modifyCompliments(double trait1, double trait2);
};



#endif /* TRAIT_H */

