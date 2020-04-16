#include <cstdlib>
#include <iostream>
#include <cmath>
 
using namespace std;
 
float function(float, float);
 
int main() { 
	setlocale(LC_ALL, "Russian"); 
	float x;
	cout << "¬ведите число ";
	cin >> x;
	float y = x;
	float y1 = 0;
	while(true) {
		y1 = 0.5 * (y + 3 * x / (2 * y * y + x / y));
		
		if(abs(y1 - y) < 0.00001)
			break;
		y = y1;	
	}
	cout << y << endl;
    system("pause");
	return 0;
}


