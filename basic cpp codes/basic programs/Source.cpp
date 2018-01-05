#include<iostream>
#include<string>
#include<memory>
#include<vector>
#include<algorithm>
#include "mostrepeatedwords.h"
#include "reversestring.h"
#include"task1.h"
using namespace std;

void print(vector<int>pr)
{
	for (int i = 0; i <(pr.size()); i++)
	{
		cout << pr[i] << endl; 
	}
}

void print_vector(std::unique_ptr<vector<int>>p1)
{
	for (int i = 0; i < 7; i++)
	{
		// at defrerence a vector pointer// 
		cout << p1->at(i)<<endl;
		
	}
}
void normalpointerprint(int* x)
{
	for (int i = 0; i < 7; i++)
		cout << x[i] << endl; 

	delete(x);
}
int main()
{
	int cas; 
	cout << "enter the required option from 1 to4 " << endl; 
	cin >> cas; 
	
	switch (cas)

	{
	case 1: {
		std::unique_ptr<task1>tk1(new task1());
		cout << "unique pointer using array" << endl;
		std::unique_ptr<int[]>p1(new int[10]);
		// move is used becaue it doent allow the compiler to create copy of object// 
		// when move is not used the complier creaters copy of object// 
		auto pr = tk1->enter_values(std::move(p1));
		print(pr);
     	}
		break; 
	case 2: {
		std::cout << "unique pointer using vector" << endl;
		std::unique_ptr<task1>tk2(new task1());
		std::unique_ptr<vector<int>>pop(new vector<int>);
		auto pre = tk2->enter_values_vector(std::move(pop));
		print_vector(std::move(pre));
	         }
		break;
	case 3: {
		 std::cout << "umoptimized implementation" << endl; 
	     std::cout << "implement using normal pointer" << endl;
		 task1 *tk3 = new task1;
		 int *x;
		 x= new int[10];
		 auto x1 = tk3->normalpointer(x);
		 normalpointerprint(x1); 
		 break;
	}
	}        

			
	system("Pause");
	return 0; 
}