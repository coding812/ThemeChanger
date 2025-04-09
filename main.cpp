#include <iostream>

using namespace std;

int main (int argc, char* argv[] ) {
	string theme = argv[1];

	if ( argc < 2 ){
		cout << "Please provide an input for the theme" << endl;
		return 1;
	}

	if ( theme == "dark" ){
		system("dconf write /org/cinnamon/theme/name \"'Mojave-Dark'\"");
		system("dconf write /org/cinnamon/theme/gtk-theme \"'Mojave-Dark'\""); // works for desktop theme
		system("dconf write /org/cinnamon/desktop/interface/gtk-theme \"'Mojave-Dark'\"");
		cout << "Theme Set to dark" << endl;
	}
	else if ( theme == "light" ){
		system("dconf write /org/cinnamon/theme/name \"'Mojave-Light'\"");
		system("dconf write /org/cinnamon/theme/gtk-theme \"'Mojave-Light'\""); // works for desktop theme
		system("dconf write /org/cinnamon/desktop/interface/gtk-theme \"'Mojave-Light'\"");
		cout << "Theme set to light" << endl;
	}
	else {
		cout << "Not a valid theme" << endl;
		return 2;
	}
	return 0;
}