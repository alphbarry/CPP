#include "../inc/Contact.hpp"
#include "../inc/Phonebook.hpp"

#include <iostream>
#include <string>
using namespace std;

int main() {
    Phonebook phonebook;
	string	contact[5];
    string input, info;
    int i = 0;

    while (true) {
        cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if (!getline(cin, input)) {
			cout << "\nError reading input. Ctrl D detected. Exiting..." << endl;
			break;
		}

        if (input == "ADD") {
            cout << "Enter contact information:" << endl;
            cout << "- First name: ";
            cin >> contact[0];
            cout << "- Last name: ";
            cin >> contact[1];
            cout << "- Nickname: ";
            cin >> contact[2];
            cout << "- Phone number: ";
            cin >> contact[3];
            cout << "- Darkest secret: ";
            cin >> contact[4];
            
			phonebook.addContact(contact);
            i++;

            cout << "Contact added! You can ADD more, SEARCH, or EXIT." << endl;
        }
        else if (input == "SEARCH") {
            phonebook.searchContacts();
        }
        else if (input == "EXIT") {
            cout << "Exiting phonebook. Goodbye!" << endl;
            break;
        }
        else {
            cout << "Unknown command. Please use 'ADD', 'SEARCH', or 'EXIT'." << endl;
        }
    }

    return 0;
}

