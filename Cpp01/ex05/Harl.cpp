
#include <iostream>
#include <string>

int main(){

	std::string a = "coucou";
	std::string b = "ABSOLUMEBT PAS";
	std::string c = "bla";
	std::string d = "BLA";

	std::string name[5] = {"coucou", "non", "oui", "bla"};


	int i = 0;
	while(i < 5){
		if (name[i] == a)
			break;
		i++;
	}
	switch (i){
		case 0:
			std::cout << "bravo" << std::endl;
			break;
		case 1:
			std::cout << "gg" << std::endl;
			break;
		default:
			std::cout << "fuck" << std::endl;
	}
}


//utiliser switch case 
// switch()

// case 1
// 	fonction warning...
// case 2
// 	fonction coucou...
// default
// 	retry plz
