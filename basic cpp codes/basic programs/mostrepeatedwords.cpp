#include "mostrepeatedwords.h"
#include<string>


//have to be given from main 
mostrepeatedwords::mostrepeatedwords(string x)
{
	istringstream iss(x);
	//string token; 
	while (getline(iss, token, ' '))
	{
		if (mos.find(token) != mos.end())
		{
			mos[token] += 1;
		}
		else
		{
			mos.insert(make_pair(token, 1));
		}

	}
	for (map<string, int>::iterator itr = mos.begin(); itr != mos.end(); itr++)
	{
		int i = 0;
		//p = 0;
		//cout << itr->first << endl;
		//cout << itr->second << endl;
		if (itr->second > p)
		{
			
			p = itr->second;
		}
		//x1[i] = itr->second; 

	}
	cout << p; 
	for (map<string, int>::iterator itr = mos.begin(); itr != mos.end(); itr++)
	{
		///int p = itr->second; 
		if (itr->second == p)
		{
			cout << itr->first << endl;
		}
		//convert form the pointer to the int back again> // 
	//	p = reinterpret_cast<int>(max_element(x1,x1+5));



	}
}
	// there is a need to iterate // 
   


mostrepeatedwords::~mostrepeatedwords()
{
}
