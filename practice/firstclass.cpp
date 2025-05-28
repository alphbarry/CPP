#include <iostream>
using namespace std;

class	MyClass
{
	public:
		int	MyNum;
		std::string	MyString;
};

class	book{
	public:
		void	getTitle()
		{
			cout << "Title: " << title;
		}
		string	title;
		string	author;
		int		year;
};

class	student{
	public:
		string	name;
		int		age;
		string	course;
		void	getDetails();
};

void	student::getDetails()
{
	cout << "Name: " << name << ", Age: " << age << ", Course: " << course << endl;
}

class	Dog
{
	public:
		void	bark()
		{
			cout << "Woof! Woof!" << endl;
		}
};

class	Cat
{
	public:
		Cat()
		{
			cout << "Meow" << endl;
		}
};

class	Car{
	public:
		string	model;
		string	brand;
		int	year;
		Car(string m, string b, int y)
		{
			model = m;
			brand = b;
			year = y;
		}
		Car()
		{
			model = "Unknown";
			brand = "Unknown";
			year = 0;
		}
};

class	Music
{
	public:
		string	title;
		string	artist;
		int	year;
	Music(string t, string a, int y);
};

Music::Music(string t, string a, int y)
{
	title = t;
	artist = a;
	year = y;
};

class	Enterprise{
	public:
		string	department;
		Enterprise(){
			cout << "Enterprise created!" << endl;
		}
};

class	Employee: public Enterprise{
	private:
		int	salary;
		string	name;
	public:
		void	setSalary(int s){
			salary = s;
		}
		void	setName(string n){
			name = n;
		}
		int	getSalary(){
			return salary;
		}
		string	getName(){
			return name;
		}

};

int	main()
{
	// Example of using the MyClass class
	MyClass myObj1;
	MyClass myObj2;
	// Example of using the book class
	book	myBook1;
	book	myBook2;
	// Example of using the student MyClass
	student	myStudent;
	// Example of using the Dog class
	Dog myDog;
	// Example of using the Cat class
	Cat myCat;
	// Example of using the Car Class
	Car myCar("Model S", "Tesla", 2020);
	Car	myCar2; // Default constructor
	// Example of using the Music Class
	Music	myMusic("Shape of You", "Ed Sheeran", 2017);
	//Example of using the Employee class
	Employee	myEmployee;

	myEmployee.department = "Marketing";
	myEmployee.setSalary(25000);
	myEmployee.setName("Samuel");
	myDog.bark(); // Call the bark method of the Dog class
	myStudent.name = "John Doe";
	myStudent.age = 20;
	myStudent.course = "Computer Science";
	myBook1.title = "IT";
	myBook1.author = "Stephen King";
	myBook1.year = 1986;
	myBook2.title = "The Shining";
	myBook2.author = "Stephen King";
	myBook2.year = 1977;
	myObj1.MyNum = 15;
	myObj1.MyString = "Hello World";
	myObj2.MyNum = 20;
	myObj2.MyString = myObj1.MyString;
	
	cout << "The salary of " << myEmployee.getName() << " is " << myEmployee.getSalary() << " from the " << myEmployee.department << " department." << endl;
	cout << "Music: " << myMusic.title << " by " << myMusic.artist << " (" << myMusic.year << ")" << endl;
	cout << "Car 2: brand: " << myCar2.brand << " model: " << myCar2.model << " year (" << myCar2.year << ")" << endl;
	cout << "Car: " << myCar.brand << " " << myCar.model << " (" << myCar.year << ")" << endl;
	cout <<	myObj1.MyNum << " " << myObj1.MyString << endl;
	cout <<	myObj2.MyNum << " " << myObj2.MyString << endl;
	myBook1.getTitle(); 
	cout << " by " << myBook1.author << " (" << myBook1.year << ")" << endl;
	myBook2.getTitle();
	cout << " by " << myBook2.author << " (" << myBook2.year << ")" << endl;
	myStudent.getDetails();
	return 0;
}
