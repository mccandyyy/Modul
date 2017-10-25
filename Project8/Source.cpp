#include <iostream>
#include "Figure1.h"
#include "Figure2.h"
using namespace std;

 class Figurka
{
 public:
	 int a;
	 virtual void draw()=0;
};

int main()
{
	Figurka* f;
int l;
cout << "choose the figure 1 or 2" << endl;
cin >> l;
if (l == 1)
f = new Figure1();
else
f = new Figure2();
f->draw();
system("pause");
return 0;
}

