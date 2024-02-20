// Pre Proccessor operator, called before compile the code
// Used to import iostream library and namespace std to be able to use cout operator
#include <iostream>
using namespace std;
// Library to be able to use string types
#include <string>

#include "Person.h"
#include "Professional.h"

int main()
{
    // main is the principal method called when a program started 
    Person personObjectName = Person("Mario", 22, "M");
    Person personObjectName2 = Person();
    Person personObjectName3 = Person("Gama");
    Person personObjectName4 = Person("Mario", 22, "M", "17-abril-1993");

    personObjectName.describePerson();
    personObjectName2.describePerson();
    personObjectName3.describePerson();
    personObjectName4.describePerson();

    // Professional professionalObjectName = Professional("Engineer Mario", 30, "M", "Enginer in comuinications and electronic");
    // personObjectName.describePerson();
    // professionalObjectName.describePerson();
    // professionalObjectName.describeProfessional();
    return 0;
}