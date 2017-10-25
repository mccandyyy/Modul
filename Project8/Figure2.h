#pragma once
#include "Source.cpp"

class Figure2 :
	public Figurka
{
public:
	void draw()
	{
		cout << "  ***  " << endl;
		cout << " *   *  " << endl;
		cout << "*******" << endl;
	}
	Figure2();
	~Figure2();
};

