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
		for (int i = 0; i < 5; ++i) {
			getline(fichier,ligne);
		}
		fichier>>ligne>>ws>>ligne>>ws>>ligne>>ws>>ligne>>ws>>jobs>>ws;
		fichier>>ligne>>ws>>ligne>>ws>>horizon>>ws;
		getline(fichier,ligne);
		fichier>>ligne>>ws>>ligne>>ws>>ligne>>ws>>renewable;
		getline(fichier,ligne);
		fichier>>ligne>>ws>>ligne>>ws>>ligne>>ws>>nonrenewable;
		getline(fichier,ligne);
		fichier>>ligne>>ws>>ligne>>ws>>ligne>>ws>>ligne>>ws>>doubly_constrained;
		for (int i = 0; i < 4; ++i) {
			getline(fichier, ligne);
		}
		fichier>>ligne>>ws>>ligne>>ws>>rel_dat>>ws>>due_date>>ws>>tard_cost>>ws>>MPM_Time>>ws;
		for (int i = 0; i < 3; ++i) {
			getline(fichier, ligne);
		}
		int nbs;
		for (int i = 0; i < jobs; ++i) {
			successor.push_back(vector<int>());
			fichier>>ligne>>ws>>ligne>>ws>>nbs>>ws;
			for (int j = 0; j < nbs; ++j) {
				int tmp;
				fichier>>tmp>>ws;
				successor[i].push_back(tmp-1);
			}
		}
		for (int i = 0; i < 4; ++i) {
			getline(fichier, ligne);
		}
		for (int i = 0; i < jobs; ++i) {
			int d;
			fichier>>ligne>>ws>>ligne>>ws>>d>>ws;
			duration.push_back(d);
			requests.push_back(vector<int>());
			for (int j = 0; j < renewable; ++j) {
				int tmp;
				fichier >> tmp >> ws;
				requests[i].push_back(tmp);
			}
		}
		for (int i = 0; i < 3; ++i) {
			getline(fichier, ligne);
		}
		for (int i = 0; i < renewable; ++i) {
			int r;
			fichier>>r>>ws;
			resource.push_back(r);
		}
		fichier.close();
	}
	else{
		cerr << "Impossible d'ouvrir le fichier !"<<endl;
	}
}

Parser::~Parser() {
	// TODO Auto-generated destructor stub
}

