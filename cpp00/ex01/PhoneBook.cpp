/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:07:41 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 02:56:35 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <limits.h>

PhoneBook::PhoneBook(void) {
	this->no_contacts = 0;
	this->iterator = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::run(void) {
	std::cout << "Hello ◕ ◡ ◕" << std::endl
	          << "This is MyPhoneBook®" << std::endl
	          << "Valid queries: ADD, SEARCH, EXIT" << std::endl
	          << std::endl;
	while (PhoneBook::loop())
		continue;
	std::cout << "◕︵◕ Bye, bye ◕︵◕" << std::endl;
}

bool PhoneBook::loop(void) {
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

void PhoneBook::search(void) {
	int i = -1;

	std::cout << std::endl;
	while (++i < PhoneBook::no_contacts) {
		std::cout << "| "
		          << std::setw(10) << std::right
		          << i + 1 << " | ";
		print_format(PhoneBook::contacts[i].name);
		print_format(PhoneBook::contacts[i].surname);
		print_format(PhoneBook::contacts[i].nickname);
		std::cout << std::endl;
	}
	std::cout << std::endl
			  << "Enter desired contact ID (1 - 8)"
			  << std::endl;
	std::cin >> i;
	std::cout << std::endl;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		return (print_error("Input is not an integer"));
	}
	if (i < 1 || i > 8 || i > no_contacts)
		return (print_error("Invalid index"));
	print_contact("Name", PhoneBook::contacts[i - 1].name);
	print_contact("Surname", PhoneBook::contacts[i - 1].surname);
	print_contact("Nickname", PhoneBook::contacts[i - 1].nickname);
	print_contact("Phone", PhoneBook::contacts[i - 1].phone);
	print_contact("Secret", PhoneBook::contacts[i - 1].secret);
	std::cout << std::endl;
}

void PhoneBook::add(void) {
	Contact contact;

	std::cout << std::endl;
	if (!PhoneBook::check_token("First name of the contact:", &contact.name)
	|| !PhoneBook::check_token("Last name of the contact:", &contact.surname)
	|| !PhoneBook::check_token("Nickname of the contact:", &contact.nickname)
	|| !PhoneBook::check_token("Phone # of the contact:", &contact.phone)
	|| !PhoneBook::check_token("Contact's darkest secret:", &contact.secret))
		return (PhoneBook::print_error("Field cannot be empty"));
	PhoneBook::save(contact);
	std::cout << std::endl
	          << "CONTACT REGISTERED"
	          << std::endl
	          << std::endl;
}

void PhoneBook::save(Contact contact) {
	PhoneBook::contacts[iterator].name.assign(contact.name);
	PhoneBook::contacts[iterator].surname.assign(contact.surname);
	PhoneBook::contacts[iterator].nickname.assign(contact.nickname);
	PhoneBook::contacts[iterator].phone.assign(contact.phone);
	PhoneBook::contacts[iterator].secret.assign(contact.secret);
	if (PhoneBook::no_contacts < 8)
		PhoneBook::no_contacts++;
	if (PhoneBook::iterator == 7)
		iterator = 0;
	else
		iterator++;
	return;
}

void PhoneBook::instructions(void) const{
	std::cerr << std::endl
	          << "Error ¯\\_(ツ)_/¯" << std::endl
	          << std::endl
	          << "Valid input" << std::endl
	          << "ADD: save a new contact" << std::endl
	          << "SEARCH: displays contacts" << std::endl
	          << "EXIT: quit MyPhoneBook" << std::endl
	          << std::endl;
}

void PhoneBook::print_error(std::string str) const {
	std::cout << "Error: " << str << std::endl
	          << std::endl;
	return;
}

void PhoneBook::print_format(std::string str) const {
	std::cout << std::setw(10) << std::right;
	if (str.size() > 9)
		std::cout << str.substr(0, 9) + (std::string) "."  << " | ";
	else
		std::cout << str << " | ";
}

void PhoneBook::print_contact(std::string key, std::string value) const {
	std::cout << std::setw(10) << std::right;
	std::cout << key << ": ";
	std::cout << value << std::endl;
}

bool PhoneBook::check_token(std::string key, std::string *ptr) const {
	std::cout << key << std::endl;
	std::getline(std::cin, *ptr);
	if (ptr->empty())
		return (false);
	return (true);
}
