#include "../inc/Phonebook.hpp"
#include <iomanip>

int Phonebook::getSize() const {
	return size;
}

int ft_atoi(const std::string& str) {
	int res = 0;
	for (size_t i = 0; i < str.length(); ++i) {
		char c = str[i];
		if (c < '0' || c > '9') {
			return -1;
		}
		res = res * 10 + (c - '0');
	}
	return res;
}


string formatField(const string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return string(10 - str.length(), ' ') + str;
}

void	Phonebook::addContact(string* data){

	if (index >= 8)
		index = 0;
	contacts[index].setFirstName(data[0]);
	contacts[index].setLastName(data[1]);
	contacts[index].setNickname(data[2]);
	contacts[index].setPhoneNumber(data[3]);
	contacts[index].setSecret(data[4]);
	index++;
	if (size < 8)
		size++;
}

void	Phonebook::displayContact(int i){
	cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
	cout << "|" << setw(10) << i
	 << "|" << formatField(contacts[i].getFirstName())
	 << "|" << formatField(contacts[i].getLastName())
	 << "|" << formatField(contacts[i].getNickname())
	 << "|" << endl;
}

void	Phonebook::displayPhonebook(){
    cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
    for (int i = 0; i < size; i++) {
        cout << "|" << setw(10) << i
             << "|" << formatField(contacts[i].getFirstName())
             << "|" << formatField(contacts[i].getLastName())
             << "|" << formatField(contacts[i].getNickname())
             << "|" << endl;
    }
}

string Phonebook::searchContacts() {
    string input;
    int index;

	displayPhonebook();

    if (size == 0) {
        cout << "Phonebook is empty. Add contacts first." << endl;
        return "";
    }

    cout << "Enter the index of the contact you want to search for: ";
    if(!getline(cin, input)) {
		cout << "\nError reading input. Ctrl D detected. Exiting..." << endl;
		return "";
	}

    try {
        index = ft_atoi(input);
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        displayContact(index);
    } catch (const invalid_argument& e) {
        cout << "Invalid input. Please enter a number." << endl;
    } catch (const out_of_range& e) {
        cout << "Index out of range. Valid range: 0 to " << size - 1 << "." << endl;
    }

    return input;
}

