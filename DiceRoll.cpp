#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int dice = 0;
	srand(time(0));
	dice = (rand() % 6) + 1;
	cout << "You rolled a " << dice << endl;
	
	return 0;
}

