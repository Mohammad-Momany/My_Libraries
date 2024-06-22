#include <iostream>
#include <vector>
#include "clsString.h"

using namespace std;

int main()
{
	clsString String;
	String.Value = "Mohammad almomany";

	vector<string> vWords = String.Split(" ");

	for (int i = 0; i < vWords.size(); i++)
	{
		cout << vWords[i] << '\n';
	}

	system("pause>0");
	return 0;
}
