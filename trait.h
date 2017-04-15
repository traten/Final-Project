/*
 * File:   trait.h
 * Author: Claire
 *
 * Created on March 31, 2017, 4:03 PM
 */

#ifndef TRAIT_H
#define TRAIT_H
#include<vector>
#include <string>
#include <iostream>

using namespace std;

//defines a class Traits, which contains the following int trait fields
class Traits{
private:
    int violent;
    int pansy;
    int serious;
    int carefree;
    int imaginative;
    int practical;
    int religious;
    int thrillseeker;
    int playItSafe;
    int empathetic;
    int apathetic;
    int optimistic;
    int pessimistic;
    int predictable;
    int unpredictable;
    int adventure;
    int history;
public:
    Traits();
    int getTrait(string trait);
    void setTrait(string trait, int modAmount);
    void modifyCompliments(string trait1, int modAmount);
    void resetTraits();
    void returnAll();
    string max1Trait();
    string max2Trait(string max);
    string max3Trait(string max, string max2);
};

//constructor for Traits object, intitializes all traits to 50
Traits::Traits(){
    this->violent = 50;
    this->pansy = 50;
    this-> serious = 50;
    this-> carefree = 50;
    this-> imaginative = 50;
    this-> practical = 50;
    this-> religious = 50;
    this->thrillseeker = 50;
    this-> playItSafe = 50;
    this-> empathetic = 50;
    this-> apathetic = 50;
    this-> optimistic = 50;
    this-> pessimistic = 50;
    this-> predictable = 50;
    this-> unpredictable = 50;
    this-> adventure = 50;
    this-> history = 50;
}

//accessor method to return a given trait
int Traits::getTrait(string trait){
    if (trait == "violent"){
        return this->violent;
    }
    if (trait == "pansy"){
        return this->pansy;
    }
    if (trait == "serious"){
        return this->serious;
    }
     if (trait == "carefree"){
        return this->carefree;
    }
     if (trait == "imaginative"){
        return this->imaginative;
    }
     if (trait == "practical"){
        return this->practical;
    }
     if (trait == "religious"){
        return this->religious;
    }
     if (trait =="thrillseeker"){
        return this->thrillseeker;
    }
     if (trait =="playItSafe"){
        return this->playItSafe;
    }
     if (trait == "empathetic"){
        return this->empathetic;
    }
     if (trait=="apathetic"){
        return this->apathetic;
    }
     if (trait=="optimistic"){
        return this->optimistic;
    }
     if (trait=="pessimistic"){
        return this->pessimistic;
    }
     if (trait=="predictable"){
        return this->predictable;
    }
     if (trait=="unpredictable"){
        return this->unpredictable;
    }
     if (trait=="adventure"){
        return this->adventure;
    }
     if (trait=="history"){
        return this->history;
    }

    return 0;
}

//mutator method that takes in a trait and modifies both it and its compliment by a given amount (adds to trait1, subtracts from compliment)
void Traits::modifyCompliments(string trait1, int modAmount){

    if (trait1 =="violent"){
        this->violent += modAmount;
        this-> pansy -= modAmount;
    }
    if (trait1 =="pansy"){
        this->pansy += modAmount;
        this->violent -= modAmount;
    }
    if(trait1=="serious"){
        this->serious += modAmount;
        this->carefree -= modAmount;
    }
    if(trait1=="carefree"){
        this->carefree += modAmount;
        this->serious -= modAmount;
    }
    if(trait1=="imaginative"){
        this->imaginative += modAmount;
        this->practical -= modAmount;
    }
    if(trait1==("practical")){
        this->practical += modAmount;
        this->imaginative -= modAmount;
    }
    if(trait1==("thrillseeker")){
        this->thrillseeker += modAmount;
        this->playItSafe -= modAmount;
    }
    if(trait1==("playItSafe")){
        this->playItSafe += modAmount;
        this->thrillseeker -= modAmount;
    }
    if (trait1==("empathetic")){
        this->empathetic += modAmount;
        this->apathetic -= modAmount;
    }
    if (trait1==("apathetic")){
        this->apathetic += modAmount;
        this->empathetic -= modAmount;
    }
    if (trait1==("optimistic")){
        this->optimistic += modAmount;
        this->pessimistic -= modAmount;
    }
    if (trait1==("pessimistic")){
        this->pessimistic += modAmount;
        this->optimistic -= modAmount;
    }
    if (trait1==("predictable")){
        this->predictable += modAmount;
        this->unpredictable -= modAmount;
    }
    if (trait1==("unpredictable")){
        this->unpredictable += modAmount;
        this->predictable -= modAmount;
    }
}

//mutator method that modifies a single trait by a given amount, used only for traits that do not have compliments
void Traits::setTrait(string trait, int modAmount){
    if(trait==("adventure")){
        this->adventure += modAmount;
    }
    if(trait==("religious")){
        this->religious += modAmount;
    }
    if(trait==("history")){
        this->history += modAmount;
    }
}

//resets all traits to their default values upon log out
void Traits::resetTraits(){
    this-> violent = 50;
    this-> pansy = 50;
    this-> serious = 50;
    this-> carefree = 50;
    this-> imaginative = 50;
    this-> practical = 50;
    this-> religious = 50;
    this-> thrillseeker = 50;
    this-> playItSafe = 50;
    this-> empathetic = 50;
    this-> apathetic = 50;
    this-> optimistic = 50;
    this-> pessimistic = 50;
    this-> predictable = 50;
    this-> unpredictable = 50;
    this-> adventure = 50;
    this-> history = 50;
}

//returns all the traits and their values, using accessor method getTrait
void Traits::returnAll(){
    cout << "Violent: " << getTrait("violent") <<endl;
    cout << "Pansy: " << getTrait("pansy") <<endl;
    cout << "Serious: " << getTrait("serious") <<endl;
    cout << "Carefree: " << getTrait("carefree") <<endl;
    cout << "Imaginative: " << getTrait("imaginative") <<endl;
    cout << "Practical: " << getTrait("practical") <<endl;
    cout << "Religious: " << getTrait("religious") <<endl;
    cout << "Thrillseeker: " << getTrait("thrillseeker") <<endl;
    cout << "Play It Safe: " << getTrait("playItSafe") <<endl;
    cout << "Empathetic: " << getTrait("empathetic") <<endl;
    cout << "Apathetic: " << getTrait("apathetic") <<endl;
    cout << "Optimistic: " << getTrait("optimistic") <<endl;
    cout << "Pessimistic: " << getTrait("pessimistic") <<endl;
    cout << "Predictable: " << getTrait("predictable") <<endl;
    cout << "Unpredictable: " << getTrait("unpredictable") <<endl;
    cout << "Adventure: " << getTrait("adventure") <<endl;
    cout << "History: " << getTrait("history") <<endl;

}

//identifies the highest value trait of the user and returns it from the string vector containing the trait names
string Traits::max1Trait(){
    int indexMax = 0;
    vector<string> traitVect= {"violent", "pansy", "serious", "carefree", "imaginative", "practical", "religious", "thrillseeker",
                              "playitsafe", "empathetic", "apathetic", "optimistic", "pessimistic", "predictable", "unpredictable", "adventure", "history" };
    vector<int> valuesVect;
    for(size_t i = 0; i < traitVect.size();i++){
        valuesVect.push_back(getTrait(traitVect[i]));
    }
    for(size_t i = 0; i < valuesVect.size();i++){
        if(valuesVect[indexMax] < valuesVect[i])
            indexMax = i;

    }
    return traitVect[indexMax];

}

//identifies and returns the second highest value trait of the user by taking in the result from max1Trait as an argument
string Traits::max2Trait(string max){
    int indexMax2 = 0;
    vector<string> traitVect= {"violent", "pansy", "serious", "carefree", "imaginative", "practical", "religious", "thrillseeker",
                              "playitsafe", "empathetic", "apathetic", "optimistic", "pessimistic", "predictable", "unpredictable", "adventure", "history" };
    for(size_t i = 0; i < traitVect.size();i++){
        if(traitVect[i] == max)
        traitVect.erase(traitVect.begin() + i);
    }
    vector<int> valuesVect;
    for(size_t i = 0; i < traitVect.size();i++){
        valuesVect.push_back(getTrait(traitVect[i]));
    }
    for(size_t i = 0; i < valuesVect.size();i++){
        if(valuesVect[indexMax2] < valuesVect[i])
            indexMax2 = i;
    }
    return traitVect[indexMax2];
}

//identifies and returns the third highest value trait of the user by taking in the results from max1Trait and max2Trait as arguments
string Traits::max3Trait(string max1, string max2){
    int indexMax3 = 0;
    vector<string> traitVect= {"violent", "pansy", "serious", "carefree", "imaginative", "practical", "religious", "thrillseeker",
                                "playitsafe", "empathetic", "apathetic", "optimistic", "pessimistic", "predictable", "unpredictable", "adventure", "history" };
    for(size_t i = 0; i < traitVect.size();i++){
        if((traitVect[i] == max1 )|| (traitVect[i] == max2))
        {
        traitVect.erase(traitVect.begin() + i);
        i = -1;
        }
    }
    vector<int> valuesVect;
    for(size_t i = 0; i < traitVect.size();i++){
        valuesVect.push_back(getTrait(traitVect[i]));
    }
    for(size_t i = 0; i < valuesVect.size();i++){
        if(valuesVect[indexMax3] < valuesVect[i])
            indexMax3 = i;
    }
    return traitVect[indexMax3];
}
#endif /* TRAIT_H */
