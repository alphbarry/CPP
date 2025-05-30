#include "../inc/Phonebook.hpp"

int Phonebook::getSize() const {
	return size;
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
	size++;
}

void	Phonebook::displayContact(int i){
	cout << "First name: " << contacts[i].getFirstName() << endl;
	cout << "Last name: " << contacts[i].getLastName() << endl;
	cout << "Nick name: " << contacts[i].getNickname() << endl;
	cout << "Phone Number: " << contacts[i].getPhoneNumber() << endl;
}

void	Phonebook::displayPhonebook(){
	for(int i = 0; i < getSize(); i++){
		cout << "First name: " << contacts[i].getFirstName() << endl;
		cout << "Last name: " << contacts[i].getLastName() << endl;
		cout << "Nick name: " << contacts[i].getNickname() << endl;
		cout << "Phone Number: " << contacts[i].getPhoneNumber() << endl;
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
    cin >> input;

    try {
        index = stoi(input);
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

