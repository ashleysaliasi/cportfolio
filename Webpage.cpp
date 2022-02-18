#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    ofstream index{"index.html"};
    string name;
    string description;
    cout << "Enter your name: ";
    getline(cin,name);
    cout <<"Describe yourself: ";
    getline(cin,description);
    index << "<html>\n"
    "<head>\n"
    "</head>\n"
    "<body>\n"
    "    <center>\n"
    "<h1>" << name << "</h1>\n"
    "</center>\n" "    <hr/>\n"<< description << endl << "    <hr/>\n"
    "</body>\n"
    "</html>\n";

    return 0;
}