#include <iostream>

using namespace std;

int main (int argc, char* argv[] ) {

	if ( argc < 2 ){
		cout << "Please provide an input for the theme" << endl;
		return 1;
	}

	string theme = argv[1];

	if ( theme == "dark" ){
		cout << "Theme Set to dark" << endl;
	}
	else if ( theme == "light" ){
		cout << "Theme set to light" << endl;
	}
	else {
		cout << "Not a valid theme" << endl;
		return 2;
	}
	return 0;
}