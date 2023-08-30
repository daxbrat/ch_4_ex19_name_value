#include "std_lib_facilities.h"

int main()
{
	vector <string> names{};
	vector <int> scores{};
	string name{""};
	int score{1};
	int counter{1};

	while (true) {
		
		cout << counter << ". Enter a name with a score: ";
		cin >> name >> score;
		if (name == "NoName" && score == 0) {
			break;
		}
		names.push_back(name);
		scores.push_back(score);
		counter++;
	}
	

	for (string i : names) {
		cout << i << " ";
	}
	cout << '\n';
	for (int i : scores) {
		cout << i << " ";
	}
	cout << '\n';
	return 0;
}
