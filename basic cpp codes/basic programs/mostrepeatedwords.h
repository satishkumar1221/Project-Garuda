#pragma once
#include<string>
#include<iostream>
#include<sstream>
#include<algorithm>
//#include <bits/stdc++.h>
#include<map>
using namespace std; 
class mostrepeatedwords
{
public:
	string y;
	string token;
	map<string, int> mos;
   //ap<string, int>::iterator itrx = mos.begin();
	int p=0;
	//int *x1 = new int[mos.size()];
	mostrepeatedwords(std::string x);
	//system("");
	~mostrepeatedwords();
};

