#pragma once
#include "Source.cpp"

class Figure1 :
	public Figurka
{
public:
	void  draw()

	{
		cout << " * " << endl;
		cout << "***" << endl;
		cout << " * " << endl;
	}

	Figure1();
	~Figure1();
};

