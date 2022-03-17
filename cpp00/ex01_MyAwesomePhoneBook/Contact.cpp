// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#include "Contact.hpp"

Contact::Contact(void) {
	return;
}


Contact::~Contact(void) {
	return;
}

std::string Contact::getname(void) const {
	return (this->name);
}

std::string Contact::getsurname(void) const {
	return (this->surname);
}

std::string Contact::getnickname(void) const {
	return (this->nickname);
}

std::string Contact::getphone(void) const {
	return (this->phone);
}

std::string Contact::getsecret(void) const {
	return (this->secret);
}

void Contact::setname(std::string name) {
	this->name.assign(name);
}

void Contact::setsurname(std::string surname) {
	this->surname.assign(surname);
}

void Contact::setnickname(std::string nickname) {
	this->nickname.assign(nickname);
}

void Contact::setphone(std::string phone) {
	this->phone.assign(phone);
}

void Contact::setsecret(std::string secret) {
	this->secret.assign(secret);
}

