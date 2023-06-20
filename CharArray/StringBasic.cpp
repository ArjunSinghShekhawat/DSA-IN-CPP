#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    string name;

    // getlime method
    getline(cin, name);
    cout << name;

    // length method
    cout << endl;
    cout << name.length() << endl;

    // empty method
    cout << name.empty() << endl;

    // push_back method
    name.push_back('A');
    cout << name << endl;

    // pop_back() method
    name.pop_back();
    cout << name << endl;

    // sub string method
    cout << name.substr(1, 3); // rju

    string value1 = "aingh";
    string value2 = "singh";

    // compare method
    cout << endl
         << value1.compare(value2) << endl;

    string data = "i am arjun";
    string data1 = "ser";

    // find method
    //  cout << data.find(data1) << endl;
    if (data.find(data1) == std::string::npos)
    {
        cout << "Not found" << endl;
    }

    // replace method
    string s = "This is my first message";
    string s1 = "arjun";

    s.replace(11, 5, s1);
    cout << s << endl;

    // erase
    string s2 = "arjun singh";
    cout << s2 << endl;
    s2.erase(5, 6);
    cout << s2 << endl;

    return 0;
}