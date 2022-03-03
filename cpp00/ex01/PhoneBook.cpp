/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:07:41 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 15:57:21 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
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
		print_format(this->contacts[i].getname());
		print_format(this->contacts[i].getsurname());
		print_format(this->contacts[i].getnickname());
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
	print_contact("Name", this->contacts[i - 1].getname());
	print_contact("Surname", this->contacts[i - 1].getsurname());
	print_contact("Nickname", this->contacts[i - 1].getnickname());
	print_contact("Phone", this->contacts[i - 1].getphone());
	print_contact("Secret", this->contacts[i - 1].getsecret());
	std::cout << std::endl;
}

void PhoneBook::add(void) {
	Contact cont;

	std::cout << std::endl;
	if (!PhoneBook::check_token("First name of the contact:", &Contact::setname)
	|| !PhoneBook::check_token("Last name of the contact:", &Contact::setsurname)
	|| !PhoneBook::check_token("Nickname of the contact:", &Contact::setnickname)
	|| !PhoneBook::check_phone("Phone # of the contact:", &Contact::setphone)
	|| !PhoneBook::check_token("Contact's darkest secret:", &Contact::setsecret))
		return (print_error("Invalid field"));
	if (PhoneBook::iterator == 7)
		iterator = 0;
	else
		iterator++;
	PhoneBook::no_contacts++;
	std::cout << std::endl
	          << "CONTACT REGISTERED"
	          << std::endl
	          << std::endl;
}

void PhoneBook::save(Contact contact, int iterator)
{
	this->contacts[iterator].setname(contact.getname());
	this->contacts[iterator].setsurname(contact.getsurname());
	this->contacts[iterator].setnickname(contact.getnickname());
	this->contacts[iterator].setphone(contact.getphone());
	this->contacts[iterator].setsecret(contact.getsecret());
}

void PhoneBook::clear_contact(Contact contact) {
	contact.setname("");
	contact.setsurname("");
	contact.setnickname("");
	contact.setphone("");
	contact.setsecret("");
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

bool PhoneBook::check_phone(std::string key, func_ptr setvar) {
	std::string token;

	std::cout << key << std::endl;
	std::getline(std::cin, token);
	if (token.empty())
		return (false);
	for (std::string::iterator i = token.begin(); i != token.end(); i++)
		if (!isdigit(*i) && *i != '-' && *i != ' ' && *i != '(' && *i != ')')
			return (false);
	(this->contacts[iterator].*setvar)(token);
	return (true);
}

bool PhoneBook::check_token(std::string key, func_ptr setvar) {
	std::string	token;

	std::cout << key << std::endl;
	std::getline(std::cin, token);
	if (token.empty())
		return (false);
	for (std::string::iterator i = token.begin(); i != token.end(); i++)
		if (!isascii(*i))
			return (false);
	(this->contacts[iterator].*setvar)(token);
	return (true);
}
