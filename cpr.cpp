/*
 * This is a REPL program for C++
 * Name - CPR
 * This program will read only files with extension .cpr
 * */

#include <bits/stdc++.h>
using namespace std;

void w2s(auto line) {
	ofstream f("session.cpp");
       f << "#include <bits/stdc++.h>\nusing namespace std;\n\nint main(){\n" << line << ";\n}";
       f.close();
}

int main() {
	string line;
	while(true) {
		cout << ">>>";
		getline(cin, line);
		w2s(line);
		system("g++ session.cpp -o session");
		system("./session");
		system("rm session session.cpp");
	}
}
