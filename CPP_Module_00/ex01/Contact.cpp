#include "Contact.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

void Contact::set_contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	this->first_name = fn;
	this->last_name = ln;
	this->nickname = nn;
	this->phone_number = pn;
	this->darkest_secret = ds;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}
std::string Contact::get_last_name()
{
	return (this->last_name);
}
std::string Contact::get_nickname()
{
	return (this->nickname);
}
std::string Contact::get_phone_number()
{
	return (this->phone_number);
}
std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}
