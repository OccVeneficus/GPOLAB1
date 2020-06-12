#include "Lab5Programm.h"

void Lab5Programm::ShowName(Person* person)
{
	cout << person->GetName() << "\t" << person->GetSurname() << "\t" <<
		person->GetPatronymic();
}

void Lab5Programm::DemoInheritance()
{
	Person person("Ivanov", "Ivan", "Ivanovich");
	ShowName(&person);
	cout << endl;
	Student student("Petrov", "Alex", "Pogchampovich", 105331554, 2017);
	cout << endl;
	ShowName(&student);
	Teacher teacher("Bagrotion", "Lidia", "Rudolfovna", "Docent");
	cout << endl;
	ShowName(&teacher);
}
