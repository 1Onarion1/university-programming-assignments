#include "MyClass.h"

int main() {
	MyClass person1;
	MyClass person2("John", 31);

	person1.display();
	person2.display();

	return 0;
}
