//#include <iostream> 
//#include <string> 
//#include <Windows.h> 
//using namespace std; 
//#define O cout<< 
//#define E endl; 
//#define A(x,y) (x>y?x:y) 
//#define P(x) (x%2==0? "true":"false") 
//#define red "\033[45m" 
// 
//int main() { 
//    /*O << red<<"Process\n" << E 
//      int x = 5, y = 7; 
//    O << A(x, y) << E 
//      O << P(x) << E 
//      char s = 'W'; 
//    O<<int(s)<<E*/ 
//    //char s; 
//    //cin >> s; 
//    //if (s == char (toupper(s))) O tolower(s); 
//    //else O char (toupper(s)); 
//    //O(s == char(toupper(s)) ? char(tolower(s)) : char(toupper(s))); 
//    string txt; 
//    getline(cin, txt); 
//    char s; 
//    cin >> s; 
//    //vector 
//    txt.push_back(s); 
//    O txt; 
//} 

//#include <iostream> 
//#include <string> 
//#include <cstring> 
//#include <Windows.h> 
//using namespace std; 

//int main() { 
// SetConsoleCP(1251); 
// SetConsoleOutputCP(1251); 
// std::cout << "Введіть речення:\n"; 
// // string text; 
// // getline(cin, text); 
// // 
// // cout << text << endl; 
// // 
// // for (char c : text) { 
// //  if (c == 'a' or c == 'o' or c == 'u' or c == 'e' or c == 'i') 
// //   cout << c; 
// // } 
// //} 
// char text[100]; 
// cin.getline(text, 100); 
// for (char c : text) { 
//  c = tolower(c); 
//  if (c == 'a' or c == 'o' or c == 'u' or c == 'e' or c == 'i') 
//   cout << c; 
// } 
//} 

//#include <iostream> 
//#include <string> 
//#include <cstring> 
//#include <algorithm> 
//#include <vector> 
//#include <Windows.h> 
//using namespace std; 
// 
//int main() { 
// SetConsoleCP(1251); 
// SetConsoleOutputCP(1251); 
// string text; 
// getline(cin, text); 
// 
// transform(text.begin(), text.end(), text.begin(), ::tolower); 
//  
// 
// int c; 
// cout << "Введіть речення:\n"; 
// cin >> c; 
// if (c >= 0 && c < text.size()) { 
//  text.erase(c,1); 
//  cout << endl << text; 
// } 
// else { 
//  cout << "error" << endl; } 
//} 

//#include <iostream> 
//#include <string> 
//#include <cstring> 
//#include <algorithm> 
//#include <vector> 
//#include <Windows.h> 
//using namespace std; 
// 
//int main() { 
// SetConsoleCP(1251); 
// SetConsoleOutputCP(1251); 
// string text; 
// getline(cin, text); 
// 
// transform(text.begin(), text.end(), text.begin(), ::tolower); 
// string line; 
// getline(cin, line); 
// 
// int c; 
// cout << "Введіть речення:\n"; 
// cin >> c; 
// if (c >= 0 && c < text.size()) { 
//  /*text.erase(c, 1);*/ 
//  text.insert(c, line); 
//  cout << endl << text; 
// } 
// else { 
//  cout << "error" << endl; 
// } 
//} 

#include <iostream> 
#include <string> 
#include <cstring> 
#include <algorithm> 
#include <vector> 
#include <Windows.h> 
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string ip;
	getline(cin, ip);
	long suma = 0;
	for (char s : ip) {
		if (s == '.') suma++;
	}
	if (suma > 3)
		cout << "Некоректний адрес";

}