#include <iostream>

using namespace std;

// Helper function to execute a command and check for errors
void runCommand(const string& command) {
    if (system(command.c_str()) != 0) {
        cerr << "Failed to execute: " << command << endl;
    }
}

int main (int argc, char* argv[] ) {
	
	if ( argc < 2 ){
		cout << "Please provide an input for the theme" << endl;
		return 1;
	}
	
	string theme = argv[1];
	
	if ( theme == "dark" ){
		(runCommand)("dconf write /org/cinnamon/theme/name \"'Mojave-Dark'\"");
		(runCommand)("dconf write /org/cinnamon/theme/gtk-theme \"'Mojave-Dark'\""); // works for desktop theme
		(runCommand)("dconf write /org/cinnamon/desktop/interface/gtk-theme \"'Mojave-Dark'\"");
		cout << "Theme Set to dark" << endl;
	}
	else if ( theme == "light" ){
		(runCommand)("dconf write /org/cinnamon/theme/name \"'Mojave-Light'\"");
		(runCommand)("dconf write /org/cinnamon/theme/gtk-theme \"'Mojave-Light'\""); // works for desktop theme
		(runCommand)("dconf write /org/cinnamon/desktop/interface/gtk-theme \"'Mojave-Light'\"");
		cout << "Theme set to light" << endl;
	}
	else {
		cout << "Not a valid theme" << endl;
		return 2;
	}
	return 0;
}