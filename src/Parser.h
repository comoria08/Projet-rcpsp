/*
 * Parser.h
 *
 *  Created on: 19 nov. 2015
 *      Author: haboud910e
 */
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#ifndef PARSER_H_
#define PARSER_H_

using namespace std;


class Parser {
public:
	int jobs, horizon, renewable, nonrenewable, doubly_constrained, rel_dat, due_date, tard_cost, MPM_Time;
	vector< vector<int> > successor,requests;
	vector<int> duration,resource;
	Parser(string filename);
	virtual ~Parser();
	void initialize();

};

#endif /* PARSER_H_ */
