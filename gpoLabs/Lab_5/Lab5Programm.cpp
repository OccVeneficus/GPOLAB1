#include "Lab5Programm.h"

void Lab5Programm::ShowName(Person* person)
{
	cout << person->GetName() << " " << person->GetSurname() << " " <<
		person->GetPatronymic();
}

void Lab5Programm::DemoInheritance()
{
	Person person("Ivanov", "Ivan", "Ivanovich");
	ShowName(&person);
	cout << endl;
	Student student("Petrov", "Alex", "Pogchampovich", 105331554, 2017);
	ShowName(&student);
	cout << endl;
	Teacher teacher("Bagrotion", "Lidia", "Rudolfovna", "Docent");
	ShowName(&teacher);
	cout << endl;
}
