/*
 * File:   quiz.h
 * Author: Claire
 *
 * Created on March 31, 2017, 4:03 PM
 */

#ifndef QUIZ_H
#define QUIZ_H

#include <cstdlib>
#include <string>
#include <iostream>
#include "trait.h"

Traits traitlist; //initializes an instance of a Traits object called traitlist

void question1(){
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 1" << endl;
    std::cout << "If you could describe yourself as any animal, what would it be?" << endl;
    std::cout << "1) Lion" << endl;
    std::cout << "2) Mouse" << endl;
    std::cout << "3) Unicorn" << endl;
    std::cout << "4) Owl \n" << endl;
    getline(std::cin, choice);

  	if(choice.size()!= 1){ //If string is not only one character, print error.

  			std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
  			continue;
  	}
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "violent";
        traitlist.modifyCompliments(traitMod, 5);
        traitMod = "thrillseeker";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "pansy";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "imaginative";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "serious";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;
    }

}
}

void question2() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 2" << endl;
    std::cout << "If you could choose any of the following drinks, which would you choose?" << endl;
    std::cout << "1) A bottle of scotch" << endl;
    std::cout << "2) Orange juice" << endl;
    std::cout << "3) The tears of my enemies" << endl;
    std::cout << "4) Water \n" << endl;
    getline(std::cin, choice);

    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "pessimistic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "carefree";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "violent";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "predictable";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;
    }
}
}

void question3() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 3" << endl;
    std::cout << "Someone breaks into your house. What is your reaction?" << endl;
    std::cout << "1) Attempt to fight them" << endl;
    std::cout << "2) Call the police" << endl;
    std::cout << "3) Hide" << endl;
    std::cout << "4) Set up Home Alone-style pranks \n" << endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "violent";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "practical";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "pansy";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "imaginative";
        traitlist.modifyCompliments(traitMod, 5);
        traitMod = "carefree";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;

    }
}
}

void question4() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 4" << endl;
    std::cout << "You are alone in the woods. What do you do?" <<endl;
    std::cout << "1) Panic" << endl;
    std::cout << "2) Make a weapon" << endl;
    std::cout << "3) Start a fire" << endl;
    std::cout << "4) Pray for help \n" << endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "pansy";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "violent";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "practical";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "religion";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
    default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;

    }
}
}

void question5() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 5" << endl;
    std::cout << "You are stranded on an island and can only bring one item. What is it?" <<endl;
    std::cout << "1) A rosary" << endl;
    std::cout << "2) A knife" << endl;
    std::cout << "3) A box of matches" << endl;
    std::cout << "4) A puppy \n" << endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "religious";
        traitlist.setTrait(traitMod, 15);
        pass = false;
        break;
    case '2':
        traitMod = "violent";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "practical";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "empathetic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;

    }
}
}

void question6() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 6" << endl;
    std::cout << "What is your activity of choice on a Sunday?" << endl;
    std::cout << "1) Go to church" << endl;
    std::cout << "2) Stay inside and sleep. The outside world is scary." << endl;
    std::cout << "3) Go for a hike" << endl;
    std::cout << "4)Do a puzzle \n" << endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "religious";
        traitlist.setTrait(traitMod, 15);
        pass = false;
        break;
    case '2':
        traitMod = "playItSafe";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "adventure";
        traitlist.setTrait(traitMod, 15);
        pass = false;
        break;
    case '4':
        traitMod = "imaginative";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;
    }
}
}

void question7() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 7" << endl;
    std::cout << "You are running late to an exam. While you are running to your testing site, you pass a young kid getting bullied out of his lunch money by some older children. Do you:" << endl;
    std::cout << "1) Confront the bullies and beat them up" << endl;
    std::cout << "2) Keep running to your test site. Gotta get that A!" << endl;
    std::cout << "3) Give the kid a dollar to buy lunch." << endl;
    std::cout << "4) Call over a teacher \n" << endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "violent";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "apathetic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "empathetic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "practical";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
      //if the user does not input a number 1-4
      default:
          std::cout << "Please enter a number 1-4" << std::endl;
          break;

    }
}
}

void question8() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 8" << endl;
    std::cout << "You just got an F on your exam (maybe because you stopped to help a bullied kid?). How do you react?" <<endl;
    std::cout << "1) Eh, it's whatever." << endl;
    std::cout << "2) Confront the professor about your grade." << endl;
    std::cout << "3) Wallow in the pain of your failure, eat a pint of ice cream, and sleep" << endl;
    std::cout << "4) Study much harder for the next one. You can redeem yourself. \n" <<endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "apathetic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "thrillseeker";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "pessimistic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "optimistic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;
    }
}
}

void question9() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 9" << endl;
    std::cout << "You find an envelope on the street and inside it is $1000. Do you:" <<endl;
    std::cout << "1) Keep it. Finders Keepers" << endl;
    std::cout << "2) Donate it" <<endl;
    std::cout << "3) Try and find the rightful owner" << endl;
    std::cout << "4) Burn it because the government is oppressive and this is the best way to get back at them. HA! \n" <<endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "thrillseeker";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "empathetic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "playItSafe";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "pessimistic";
        traitlist.modifyCompliments(traitMod, 5);
        traitMod = "unpredictable";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;
    }
}
}

void question10() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 10" << endl;
    std::cout << "What is your favorite color?" <<endl;
    std::cout << "1) Red" <<endl;
    std::cout << "2) Blue" <<endl;
    std::cout << "3) Black" <<endl;
    std::cout << "4) Yellow \n" <<endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "thrillseeker";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "playItSafe";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "pessimistic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "optimistic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
    default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;
    }
}
}

void question11() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 11" << endl;
    std::cout << "If you could meet one of the following Georges, who would it be?" << endl;
    std::cout << "1) George Washington" << endl;
    std::cout << "2) George Foreman" <<endl;
    std::cout << "3) George Lopez" <<endl;
    std::cout << "4) Curious George \n" <<endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "history";
        traitlist.setTrait(traitMod, 15);
        pass = false;
        break;
    case '2':
        traitMod = "practical";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "carefree";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "imaginative";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
   //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;
    }
}
}

void question12() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 12" << endl;
    std::cout << "If you could have any of the following skills, which one would you choose?" <<endl;
    std::cout << "1) Time travel, but only to the past" << endl;
    std::cout << "2) Transform, but only into household items" <<endl;
    std::cout << "3) Instantly read people's minds, but only when they think rude thoughts about you" << endl;
    std::cout << "4) Tame animals, but only infant raccoons \n" << endl;
    getline(std::cin, choice);
    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "history";
        traitlist.setTrait(traitMod, 15);
        pass = false;
        break;
    case '2':
        traitMod = "practical";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "pessimistic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "empathetic";
        traitlist.modifyCompliments(traitMod, 5);
        traitMod = "carefree";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;

    }
}
}

void question13() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 13" << endl;
    std::cout << "You have a seed. What do you do with it?" << endl;
    std::cout << "1) Plant it" << endl;
    std::cout << "2) Eat it. You're hungry now!" << endl;
    std::cout << "3) Attempt to throw it at a squirrel in the hopes that you will have dinner when the squirrel is knocked out" << endl;
    std::cout << "4) Talk to it and see if it will tell you its secrets \n" << endl;
    getline(std::cin, choice);

    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "practical";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '2':
        traitMod = "playItSafe";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "violent";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "imaginative";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
      default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;
    }
}
}

void question14() {
  bool pass = true;
  while(pass)
  {
    string choice;
    string traitMod = "";
    std::cout << "Question 14" << endl;
    std::cout << "You are on vacation in France. What do you do with your time?" << endl;
    std::cout << "1) Explore the city" << endl;
    std::cout << "2) Eat lots of food" << endl;
    std::cout << "3) Stay inside. You don't want to deal with people" << endl;
    std::cout << "4) Paint the view from your hotel room \n" << endl;
    getline(std::cin, choice);

    if(choice.size()!= 1){ //If string is not only one character, print error.

        std::cout << "\nIncorrect input: Please input a number 1 through 4\n" << std::endl;
        continue;
    }
    char c = choice[0];

    switch(c){
    case '1':
        traitMod = "adventure";
        traitlist.setTrait(traitMod, 15);
        pass = false;
        break;
    case '2':
        traitMod = "carefree";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '3':
        traitMod = "pessimistic";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    case '4':
        traitMod = "imaginative";
        traitlist.modifyCompliments(traitMod, 5);
        pass = false;
        break;
    //if the user does not input a number 1-4
    default:
        std::cout << "Please enter a number 1-4" << std::endl;
        break;

    }
}
}
void printQuiz(){
    question1();
    question2();
    question3();
    question4();
    question5();
    question6();
    question7();
    question8();
    question9();
    question10();
    question11();
    question12();
    question13();
    question14();

}

//getTopString(), getSecondString(), getLastString() return the User's top three traits for matching with movie traits
std::string getTopString()
{
  return traitlist.max1Trait();
}
std::string getSecondString()
{
  return traitlist.max2Trait(traitlist.max1Trait());
}

std::string getLastString()
{
  return traitlist.max3Trait(traitlist.max1Trait(),traitlist.max2Trait(traitlist.max1Trait()));
}
// std::cout << traitlist.max1Trait() << std::endl;
// std::cout << traitlist.max2Trait(traitlist.max1Trait()) << std::endl;
// std::cout << traitlist.max3Trait(traitlist.max1Trait(),traitlist.max2Trait(traitlist.max1Trait())) << std::endl;
#endif /* QUIZ_H */
