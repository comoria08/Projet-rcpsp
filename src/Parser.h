/*
 * Parser.h
 *
 *  Created on: 19 nov. 2015
 *      Author: haboud910e
 */
#include <vector>

#ifndef PARSER_H_
#define PARSER_H_

using namespace std;


class Parser {
public:
	int jobs, horizon, renewable, nonrenewable, doubly_constrained, rel_dat, due_date, tard_cost, MPM_Time;
	vector< vector<int> > successor;
	vector< vector<int> > duration;
	Parser();
	virtual ~Parser();
	void initialize();

};

#endif /* PARSER_H_ */
