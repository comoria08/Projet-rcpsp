/*
 * Parser.cpp
 *
 *  Created on: 19 nov. 2015
 *      Author: haboud910e
 */

#include "Parser.h"

Parser::Parser(string filename) {
	// TODO Auto-generated constructor stub
	ifstream fichier(filename.c_str(), ios::in);
	if(fichier)
	{
		string ligne;
		for (int i = 0; i < 6; ++i) {
			getline(fichier,ligne);
		}
		cout << ligne ;





		fichier.close();
	}
	else{
		cerr << "Impossible d'ouvrir le fichier !"<<endl;
	}
}

Parser::~Parser() {
	// TODO Auto-generated destructor stub
}

