/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:07:41 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/02 02:45:53 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	no_contacts = 0;
	iterator = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {

	return ;
}

void	PhoneBook::run(void) {

	std::cout << "Hello ◕ ◡ ◕" << std::endl;
	std::cout << "This is MyPhoneBook®" << std::endl;
	std::cout << "Valid queries: ADD, SEARCH, EXIT" << std::endl << std::endl;
	while (PhoneBook::loop())
		continue ;
	std::cout << "◕︵◕ Bye, bye ◕︵◕" << std::endl;
}

bool	PhoneBook::loop(void) {

	std::string input;

	input.clear();
	std::getline(std::cin, input);
	if (input.empty())
		return (true);
	if (input.compare("ADD") == 0)
		PhoneBook::add();
	else if (input.compare("SEARCH") == 0)
		PhoneBook::search();
	else if (input.compare("EXIT") == 0)
		return (false);
	else
		PhoneBook::instructions();
	return (true);
}

void	PhoneBook::save(Contact contact) {

	PhoneBook::contacts[no_contacts].name.insert(0, contact.name);
	PhoneBook::contacts[no_contacts].surname.insert(0, contact.surname);
	PhoneBook::contacts[no_contacts].nickname.insert(0, contact.nickname);
	PhoneBook::contacts[no_contacts].phone.insert(0, contact.phone);
	PhoneBook::contacts[no_contacts].secret.insert(0, contact.secret);
	if (PhoneBook::no_contacts < 7)
		PhoneBook::no_contacts++;
	if (PhoneBook::iterator == 7)
		iterator = 0;
	else
		iterator++;
	return ;
}

void	PhoneBook::print_error(std::string str)
{
	std::cout << "Error: " << str << std::endl << std::endl;
	return ;
}

void	PhoneBook::print_format(std::string str)
{
	std::cout << std::setw(10) << std::left;
	if (str.size() > 9)
		std::cout << str.substr(0, 9) + (std::string)"." << " | ";
	else
		std::cout << str << " | ";
}

void	PhoneBook::print_contact(std::string key, std::string value)
{
	std::cout << std::setw(10) << std::left;
	std::cout << key << ": ";
	std::cout << value << std::endl;
}

void	PhoneBook::search(void) {

	int	i = -1;

	std::cout << std::endl;
	while (++i < PhoneBook::no_contacts)
	{
		std::cout << "| ";
		std::cout << std::setw(10) << std::left;
		std::cout << i + 1 << " | ";
		print_format(PhoneBook::contacts[i].name);
		print_format(PhoneBook::contacts[i].surname);
		print_format(PhoneBook::contacts[i].nickname);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Enter desired contact ID (1 - 8)" << std::endl;
	std::cin >> i;
	std::cout << std::endl;
	if (i < 1 || i > 7 || i > no_contacts)
		return (print_error("Invalid index"));
	print_contact("Name", PhoneBook::contacts[i - 1].name);
	print_contact("Surname", PhoneBook::contacts[i - 1].surname);
	print_contact("Nickname", PhoneBook::contacts[i - 1].nickname);
	print_contact("Phone", PhoneBook::contacts[i - 1].phone);
	print_contact("Secret", PhoneBook::contacts[i - 1].secret);
	std::cout << std::endl;
	std::cout << "CONTACT REGISTERED";
	std::cout << std::endl;
}

void	PhoneBook::add(void) {

	Contact		contact;

	std::cout << std::endl;
	std::cout << "What is the first name of the contact:" << std::endl;
	std::getline(std::cin, contact.name);
	if (contact.name.empty())
		return (PhoneBook::print_error("String cannot be empty"));
	std::cout << "What is the last name of the contact:" << std::endl;
	std::getline(std::cin, contact.surname);
	if (contact.surname.empty())
		return (PhoneBook::print_error("String cannot be empty"));
	std::cout << "What is the nickname of the contact:" << std::endl;
	std::getline(std::cin, contact.nickname);
	if (contact.nickname.empty())
		return (PhoneBook::print_error("String cannot be empty"));
	std::cout << "What is the phone number of the contact:" << std::endl;
	std::getline(std::cin, contact.phone);
	if (contact.phone.empty())
		return (PhoneBook::print_error("String cannot be empty"));
	std::cout << "Contact's secret:" << std::endl;
	std::getline(std::cin, contact.secret);
	if (contact.secret.empty())
		return (PhoneBook::print_error("String cannot be empty"));
	PhoneBook::save(contact);
	std::cout << std::endl;
}

void	PhoneBook::instructions(void) {

	std::cerr << std::endl << "Error ¯\\_(ツ)_/¯" << std::endl << std::endl;
	std::cerr << "Valid input" << std::endl;
	std::cerr << "ADD: save a new contact" << std::endl;
	std::cerr << "SEARCH: displays contacts" << std::endl;
	std::cerr << "EXIT: quit MyPhoneBook" << std::endl << std::endl;
}

