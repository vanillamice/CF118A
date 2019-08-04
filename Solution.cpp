#include<iostream>
#include<string>
using namespace std;
 
int main()
{
 
	string input;
	string rslt;
	cin >> input;
 
 
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += 32;
		}
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'o' || input[i] == 'i' || input[i] == 'u' || input[i] == 'y') {
			input.erase(i--, 1);
		}
	}
 
	for (int c = 0; c < input.size(); c++) {
		cout << "." << input[c];
	}
	cout << endl;
 
	return 0;
}
