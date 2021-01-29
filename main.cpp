//shows you how to make a login system that let's you register and writes and reads data to and from files in c++.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn()
{
    string username, password, un, pw;

    cout << "Enter Your Username: "; cin >> username;
    cout << "Enter Password: "; cin >> password;

    ifstream read("data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if(un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;

    cout << "1: Register\n2: Login\n Your Choice: "; cin >> choice;
    if (choice == 1)
    {
        string username, password;

        cout << "select username: ", cin >> username;
        cout << "select password: ", cin >> password;

        ofstream file,
    }
}