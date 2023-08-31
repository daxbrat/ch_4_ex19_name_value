#include "std_lib_facilities.h"

int main()
{
	vector <string> names{};
	vector <int> scores{};
	string name{ "" };
	int score{ 1 };
	int counter{ 1 };

	while (true) {

		cout << counter << ". Enter a name with a score: ";
		cin >> name >> score;
		if (name == "NoName" && score == 0) {
			break;
		}
		//---------------------Checking for duplicate name --- Try Mode checker instead
		
		bool duplicate = false;
		for (int i = 0; i < names.size(); i++) {
			if (names[i] == name) {
				cout << "You can't enter the same name twice. Please try again!\n";
				duplicate = true;
				break;
			}
		}

		if (!duplicate) {
			names.push_back(name);
			scores.push_back(score);
			counter++;
		}
	}
	//------------------------Printing the vectors
	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << ": " << scores[i] << '\n';
	}
	return 0;
}
