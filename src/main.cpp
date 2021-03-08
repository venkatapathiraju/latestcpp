#include <iostream>
#include "Integer.h"
#include "smartpointer.h"
#include <memory>
#include <string>
using namespace std;



std::ostream & operator << (std::ostream& out, const Integer &op)
{
	out << op.Getvalue();
	return out;
}

std::istream & operator >> (std::istream &in, Integer &op)
{
	int x;
	in >> x; 
	op.m_Value = x;
	return in; 
}


int main(int argc, char *argv[])
{

	std::unique_ptr<int> up(new int);


	std::cout << "Hello world!" << std::endl;
	Integer op1{1},op2{2};
	Integer op3 = op1 + op2;
	++op3;
	op3++;

	Integer op4{0};
	//op4 = op3 + 1;

	op4 = 1 + op4;
	std::cout << op4;
	op4();

	//std:: cin >> op4;
	//s/td::cout << op4;

	int y = op4;
	cout << y;

}