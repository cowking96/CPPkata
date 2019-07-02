#include "jumpingNumberKata.h"
#include <iostream>
#include <vector>
#include <sstream>

void JumpingNumberKata::run(std::list<std::string> args){

    if(!correctNumberOfParams(args,1,true)){
         return;
    }

    std::string  numberToCheckString = args.front();

    // one digit numbers are always jumping
    if(numberToCheckString.size()==1){
        cout << "number is one digit, is jumping number by default" << endl;
        return;
    }

    std::vector<int>valueVector;

    for(int currentNumber = 0;currentNumber <= numberToCheckString.size()-1;currentNumber++){
        cout << "adding number: " << numberToCheckString.substr(currentNumber,1) << endl;
        valueVector.push_back(stoi(numberToCheckString.substr(currentNumber,1)));
    }

    if(valueVector.size()==2){
        int firstalue = valueVector.front();
        int secondValue = valueVector.back();
        if(abs(firstalue-secondValue)==1){
            cout << "jumping number";
            return;
        }
        cout << "not a jumping number";
        return;
    }

    for(int currentPosition = 1; currentPosition < valueVector.size()-1; currentPosition++){
        cout << "checking position: " << currentPosition << " value is: " << valueVector[currentPosition] << endl;
        cout << "previouse position: " << currentPosition-1 << " value is: " << valueVector[currentPosition-1] << endl;
        cout << "next position: " << currentPosition+1 << " value is: " << valueVector[currentPosition+1] << endl;

        if(abs(valueVector[currentPosition]-valueVector[currentPosition-1]) !=1){
            cout << "not a jumping number prior" << endl;
            return;
        }

        if(abs(valueVector[currentPosition]-valueVector[currentPosition+1]) != 1){
            cout << "not a jumping number next" << endl;
            return;
        }
    }

    cout << "jumping number" << endl;










   /*  //convert string into array of chars
    std::vector<char> vectorChar(numberToCheckString.begin(), numberToCheckString.end());   
    
    //convert array of chars into array of strings
    std::vector<string> vectorString;
    stringstream ss;
    std::string charAsString;


    for(int i=0;i <= vectorChar.size()-1;i++){
        cout << "before: " << ss.str().size() << endl;
        ss << vectorChar[i];
        cout << "after insert: " << ss.str().size() << endl;
        ss >> charAsString;
        cout << "after extract: " << ss.str().size() << endl;
        cout << "char converted to string [" << charAsString <<"]" << endl;
        vectorString.push_back(charAsString);
    }

    //convert array of strings into array of ints
    int value;
    std::vector<int> vectorInt;

    for(int i=0;i <= vectorString.size()-1;i++){
        value =  std::stoi(vectorString[i]);
        cout << "string converted to int [" << value << "]" << endl;
        vectorInt.push_back(value);
    }

    if(vectorInt.size()==1){
        cout << "number is one digit, jumping number by default" << endl;
        return;
    }

    if(vectorInt.size()==2){
        int firstNumber = vectorInt.front();
        int secondNumber = vectorInt.back();
        if(abs(firstNumber-secondNumber) == 1){
            cout << "jumping number" << endl;
            return;
        }
        cout << "not jumping number" << endl;
        return;
    }





    
    

    
		


    
   
    
   

*/}
    



     

