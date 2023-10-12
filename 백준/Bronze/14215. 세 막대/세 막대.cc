#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int line[3];
	for (int i = 0; i < 3; i++) {
		cin >> line[i];
	}		

	sort(line, line + 3);

	if (line[2] >= line[0] + line[1]) {
		line[2] = (line[0]+line[1])-1;
		cout << line[0] + line[1] + line[2];
	}			
	else
		cout << line[0] + line[1] + line[2] << endl;
	
return 0;
}