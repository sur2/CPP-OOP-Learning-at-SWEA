#include <iostream>
#include "SampleHeader.h"

using namespace std;

int main(void)
{
	sampleHeader::TYPE var;
	var.x = 10;
	var.y = 20;

	cout << var.x << ", " << var.y << endl;
 
	return 0;
}