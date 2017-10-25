#include <iostream>
#include "Figure1.h"
#include "Figure2.h"
using namespace std;

 class Figurka
{
 public:
	 int a;
protected:
	 virtual void draw()=0;
};

int main()
{
	int l;
cout << "choose the figure 1 or 2" << endl;
cin >> l;
}