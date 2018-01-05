#include "task1.h"



task1::task1()
{
	std::cout << "this is task1" << endl; 
}
void task1::ledon(bool x)
{
	if (x)
		std::cout << "pop this fart" << endl;
	else
		std::cout << "pop this gems out of packet" << endl; 
}
vector<int> task1::enter_values(std::unique_ptr<int[]>p1)
{
	vector<int> x1; 
	p1[0] = 2; 
	p1[1] = 4; 
	p1[2] = 8; 
	p1[3] = 16; 
	p1[4] = 32;
	p1[5] = 64; 
	p1[6] = 128; 
	p1[7] = 256;
	for (int i = 0; i < 8; i++)
	{
		x1.push_back(p1[i]); 
	}
	return(x1);
} 
unique_ptr<vector<int>> task1::enter_values_vector(std::unique_ptr<vector<int>>p2)
{

	p2->push_back(2);
	p2->push_back(4);
	p2->push_back(8);
	p2->push_back(16);
	p2->push_back(32);
	p2->push_back(64);
	p2->push_back(128);
	p2->push_back(256);
	std::unique_ptr<vector<int>>px(std::move(p2));
	return(px);
}

int* task1 ::normalpointer(int p2[])
{
	
	p2[0] = 2;
	p2[1] = 4;
	p2[2] = 8;
	p2[3] = 16;
	p2[4] = 32;
	p2[5] = 64;
	p2[6] = 128;
	p2[7] = 256;
	int *p3;
	p3 = p2; 
	return(p3); 
}
task1::~task1()
{
}
