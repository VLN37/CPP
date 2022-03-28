// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <limits.h>
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

typedef void (Contact::* func_ptr)(std::string);

class PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	run(void);

private:
	Contact	contacts[8];
	int		no_contacts;
	int		iterator;

	bool	loop(void);
	void	search(void);
	void	add(void);
	void	instructions(void) const;
	void	print_error(std::string str) const;
	void	print_format(std::string str) const;
	void	print_contact(std::string key, std::string value) const;
	bool	check_phone(std::string key, func_ptr setvar);
	bool	check_token(std::string key, func_ptr setvar);
	void	clear_contact(Contact contact);
	void	save(Contact contact, int iterator);
};

#endif
