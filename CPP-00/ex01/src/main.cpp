#include "../inc/Contact.hpp"
#include "../inc/Phonebook.hpp"

#include <algorithm>
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
			for (int j = 0; j < 5; j++) {
				string prompts[5] = {
					"- First name: ",
					"- Last name: ",
					"- Nickname: ",
					"- Phone number: ",
					"- Darkest secret: "
				};
				do {
					cout << prompts[j];
					cin >> ws;
					getline(cin, contact[j]);
					// Elimina espacios en blanco al inicio y final
					contact[j].erase(0, contact[j].find_first_not_of(" \t\n\r\f\v"));
					contact[j].erase(contact[j].find_last_not_of(" \t\n\r\f\v") + 1);
					if (contact[j].empty())
						cout << "Field cannot be empty. Please enter again." << endl;
				} while (contact[j].empty());
			}
            
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Unknown command. Please use 'ADD', 'SEARCH', or 'EXIT'." << endl;
        }
    }

    return 0;
}

