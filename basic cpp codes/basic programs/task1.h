#pragma once
#include<memory>
#include<iostream>
#include<vector>
using namespace std; 
class task1
{
public:
public: 
	//write a task 1 and schedule and access it via unique pointers// 

	task1();
	void ledon(bool x); 
    vector<int> enter_values(std::unique_ptr<int[]>p1); 
	unique_ptr<vector<int>> enter_values_vector(std::unique_ptr<vector<int>>p2);
	int* normalpointer(int p2[]); 
	~task1();
};

