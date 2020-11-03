// List test

#include <iostream>
#include "linked_list"
#include "colours"

int main() {
	Param::List<int> list;
	std::cout << BOLDBLUE << "Creating empty " << YELLOW << "Param::List<int>" << BOLDBLUE << " object." << RESET << std::endl;
	std::cout << GREEN;
	list.show();
	std::cout << RESET;
	std::cout << BOLDRED << "Empty? " << GREEN << (list.isEmpty() ? "Yes." : "No.") << RESET << std::endl;
	std::cout << BOLDBLUE << "Appending values " << YELLOW << 1 << BOLDBLUE << " through " << YELLOW << 1 << BOLDBLUE << "..." << RESET << std::endl;
	for (int i = 0; i < 10; i++)
		list[i] = i + 1;
	std::cout << GREEN;
	list.show();
	std::cout << RESET;
	std::cout << BOLDRED << "Empty? " << GREEN << (list.isEmpty() ? "Yes." : "No.") << RESET << std::endl;
	std::cout << BOLDBLUE << "Inserting " << YELLOW << 11 << BOLDBLUE << " at index " << YELLOW << 10 << BOLDBLUE << " using the [] operator..." << RESET << std::endl;
	list[10] = 11;
	std::cout << GREEN;
	list.show();
	std::cout << RESET;
	std::cout << BOLDBLUE << "Deleting one element from the " << YELLOW << "beginning" << BOLDBLUE << "..." << RESET << std::endl;
	std::cout << GREEN;
	list.show();
	std::cout << RESET;
	list.deleteBeginning();
	std::cout << BOLDBLUE << "Inserting " << YELLOW << 90 << BOLDBLUE << " in the " << YELLOW << "beginning" << BOLDBLUE << "..." << RESET << std::endl;
	std::cout << GREEN;
	list.show();
	std::cout << RESET;
	list.insertBeginning(90);
	list.deleteEnd();
	std::cout << BOLDBLUE << "Deleting one element from the " << YELLOW << "end" << BOLDBLUE << "..." << RESET << std::endl;
	std::cout << GREEN;
	list.show();
	std::cout << RESET;
	list.insertEnd(42);
	std::cout << BOLDBLUE << "Inserting " << YELLOW << 42 << BOLDBLUE << " in the " << YELLOW << "beginning" << BOLDBLUE << "..." << RESET << std::endl;
	std::cout << GREEN;
	list.show();
	std::cout << RESET;
	std::cout << BOLDRED << "Empty? " << GREEN << (list.isEmpty() ? "Yes." : "No.") << RESET << std::endl;
	std::cout << GREEN;
	list.show();
	std::cout << RESET;
	return 0;
}