2/14/2022

#include <iostream>
using namespace std;

int main() {

	// 1 gallon paint = 340 sq ft
	// fence = 600 sq ft
	// 2 coats

	// inputs
	int numCoats = 2;
	int numSqFence = 600;
	int sqftGallon = 340;
	double gallonsPaint = 0;


	// calculations
	double totalSqFoot = (numCoats * 1.0) * (numSqFence * 1.0);
	gallonsPaint = totalSqFoot / sqftGallon;

	// output
	cout << "To paint " << numCoats << " coats on " << numSqFence << " square feet of fence, you will need " << gallonsPaint << " gallons of paint." << endl;

	return 0;
}
