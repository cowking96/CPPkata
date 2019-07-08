#include "missingNumberKata.h"
#include <iostream>
#include <sstream>
#include <vector>
#include<list>

 void MissingNumberKata::run(list<std::string> args){
     if(!correctNumberOfParams(args,1,true)){
         return;
     }

     std::string vectorAsString = args.front();
     vector<std::string> stringVector;

    stringstream ss(vectorAsString);
    while( ss.good() ){
    string substr;
    getline( ss, substr, ',' );
    cout << "adding " << substr << endl;
    stringVector.push_back( substr );
}

    vector<int> intVector;

    //convert array of string to array of ints
    for(int i = 0;i<=stringVector.size()-1;i++){
        cout << "adding: " << stringVector[i] << " to int vector" << endl;
        intVector.push_back(stoi(stringVector[i]));
    }

    //create vector of diffrences
    vector<int> diffrenceVector;
    for(int i = 0;i<=intVector.size()-2;i++){
        diffrenceVector.push_back(abs(intVector[i]-intVector[i+1]));
        cout << "adding: " << abs(intVector[i]-intVector[i+1]) << " to diffrence list" << endl;
    }

    int expectedDiffrence;
    int lastCorrectValue;
    int missingNumber;
  
  
    for(int i = 2;i<=intVector.size()-2;i++){
       if(diffrenceVector[i] != diffrenceVector[i-1]){
           expectedDiffrence = diffrenceVector[i-1];
           lastCorrectValue = intVector[i];
           missingNumber = lastCorrectValue + expectedDiffrence;
           cout << "last correct value is: " << lastCorrectValue << endl; 
           cout << "expected diffrence is: " << expectedDiffrence << endl;
           cout << "the missing number is: " << missingNumber << endl;

       }
    }

 









}