#include <iostream> 
using namespace std; 

int main()  { 
    
	// Defining enum Gender 
	enum GFG { Male, Female }; 

	// Creating GFG type variable and assigning
	// value 
	GFG Geek = Female;

	switch (Geek) {
	case Male: 
		cout << "Who is he?"; 
		break; 
	case Female: 
		cout << "Who is she?"; 
		break; 
	default: 
		cout << "Who is they?"; 
	}
	
	return 0; 
}