/*
 * main.cpp
 *
 *  Created on: 19 nov. 2015
 *      Author: haboud910e
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>


#include "Parser.h"



using namespace std;


int main(){
	Parser a("j301_1.sm");
	cout<<a.jobs;
	return 0;
}
