
#include <vector>       //usar arrays
#include <string>       //usar strings
#include <iterator>     //poder usar istringstream

using namespace std;    //para no tener que poner std:: delante de cada cosa

vector<string> split(const string& s, char delimiter);
vector<string> splitSpaces(string text);
bool isNumber(string str);
string autotab2(string str);
string autotab2mod(string str, int characters);
