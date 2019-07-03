#include "marketKata.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
 

 void MarketKata::run(std::list<std::string> args){
     if(!correctNumberOfParams(args,2,true)){
         return;
     }
    std::string vectorAsString = args.front();

    int numberOfStations = stoi(args.back());

    vector<std::string> stringVector;

    cout <<"number of stations is: " << numberOfStations << endl;

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

    //if only one station result is just the sum of all times
    if(numberOfStations == 1){
        int totalTime = 0;
        for (int i = 0;i<=intVector.size()-1;i++){
            totalTime = totalTime + intVector[i];
        }
        cout << "total time is: " << totalTime << endl;
        return;
    }

    vector<int> stationTimes(numberOfStations,0);
    int lowestNumberPosition = 0;

    // add first times into stations
    for(int i = 0;i<=numberOfStations-1;i++){
        stationTimes[i] = intVector[i];
        cout << "station " << i << "'s inital time is: " << intVector[i] << endl;
    }

    
    for(int i = numberOfStations; i<=intVector.size();i++){ 
        int lowestValue = std::min(stationTimes.front(),stationTimes.back());
        int indexOfLowestValue = std::distance(stationTimes.begin(),find(stationTimes.begin(), stationTimes.end(), lowestValue));
        stationTimes[indexOfLowestValue] = lowestValue + intVector[i];
        cout << " current lowest value is: " << lowestValue << endl;
    }
    cout << "time to complete is: " << std::max(stationTimes.front(),stationTimes.back()) << endl;











    

     
     

}