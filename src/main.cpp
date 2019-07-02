#include <iostream>
#include <string>
#include <list>

#include "kataFactory.h"

int main( int argc, const char* argv[] )
{
	//check args - do we hae at least a kata name?
	if(argc < 2){
		cout << endl << "not enough arguments" << endl << endl;
		return -1;
	}

	//convert C strings to std lib
	string kataName(argv[1]);
	std::list<std::string> args;

	for(int i = 2; i <= argc - 1; i++){
		std::string s(argv[i]);
		args.push_back(s);
	}

	//create kata
	AbstractKata* kata = KataFactory::getKata(kataName);
	
	//run the kata
	kata->run(args);

	//cleanup
	delete kata;
}