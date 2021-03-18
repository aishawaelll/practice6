Person::Person()
{
	name= " ";
	age=0;
}

void Person::setName(string nm)
{
	name=nm;
}

string Person::getName()
{
	return name;
}

void Person::setAge(int a)
{
        age=a;
}

int Person::getAge()
{
        return age;
}

