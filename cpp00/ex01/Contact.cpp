#include "Contact.hpp"


void    Contact::set_fname(std::string _fname){
	this->fname = _fname;
}

void    Contact::set_lname(std::string _lname){
    this->lname = _lname;
}

void    Contact::set_nickname(std::string _nickname){
    this->nickname = _nickname;
}

void    Contact::set_darkest_secret(std::string _darkest_secret){
    this->darkest_secret = _darkest_secret;
}

void    Contact::set_phone_number(std::string _phone_number){
    this->phone_number = _phone_number;
}

std::string Contact::get_fname(void){
    return (this->fname);
}

std::string Contact::get_lname(void){
    return (this->lname);
}

std::string Contact::get_nickname(void){
    return (this->nickname);
}

std::string Contact::get_darkest_secret(void){
    return (this->darkest_secret);
}

std::string Contact::get_phone_number(void){
    return (this->phone_number);
}