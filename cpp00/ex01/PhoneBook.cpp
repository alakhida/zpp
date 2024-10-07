#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(){
    this->index = 0;
    std::cout <<"< Welcome to Crappy PhoneBook >" << std::endl;
}

void    PhoneBook::add_contact(Contact contact){
    if (contact.get_fname().length() == 0 || contact.get_lname().length() == 0 || contact.get_nickname().length() == 0 || contact.get_darkest_secret().length() == 0 || contact.get_phone_number().length() == 0){
        std::cout << "All fields must be filled" << std::endl;
        return;
    }
    this->contacts[this->index] = contact;
    this->index = (this->index + 1) % 8;
}

void PhoneBook::search_contact(void) {
    std::string input;

    std::cout << "  index   |first name| LastName | nickname " << std::endl;
    for (int i = 0; i < 8; ++i) {
        if (this->contacts[i].get_fname().empty()){
            continue;
        }
        std::string fname = this->contacts[i].get_fname();
        std::string lname = this->contacts[i].get_lname();
        std::string nickname = this->contacts[i].get_nickname();

        if (fname.length() > 10) fname = fname.substr(0, 9) + ".";
        if (lname.length() > 10) lname = lname.substr(0, 9) + ".";
        if (nickname.length() > 10) nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << fname << "|";
        std::cout << std::setw(10) << lname << "|";
        std::cout << std::setw(10) << nickname << std::endl;
    }

    std::cout << "Display a contact: ";
    std::getline(std::cin, input);

    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7') {
        int i = input[0] - '0';
        if (!this->contacts[i].get_fname().empty()) {
            this->display_contact(i);
        } else {
            std::cout << "Invalid index" << std::endl;
        }
    } else {
        std::cout << "Invalid input" << std::endl;
    }
}


void    PhoneBook::display_contact(int index){
    std::cout << "First name: " << this->contacts[index].get_fname() << std::endl;
    std::cout << "Last name: " << this->contacts[index].get_lname() << std::endl;
    std::cout << "Nickname: " << this->contacts[index].get_nickname() << std::endl;
    std::cout << "Darkest secret: " << this->contacts[index].get_darkest_secret() << std::endl;
    std::cout << "Phone number: " << this->contacts[index].get_phone_number() << std::endl;
}



int main(void)
{
    PhoneBook phonebook;
    std::string input;
    Contact contact;
    while (1){
        std::cout << "Available options: ADD, SEARCH, EXIT:" << std::endl;
        std::getline(std::cin, input);
        if (input == "ADD"){
            std::cout << "Enter first name: ";
            std::getline(std::cin, input);
            contact.set_fname(input);
            std::cout << "Enter last name: ";
            std::getline(std::cin, input);
            contact.set_lname(input);
            std::cout << "Enter nickname: ";
            std::getline(std::cin, input);
            contact.set_nickname(input);
            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, input);
            contact.set_darkest_secret(input);
            std::cout << "Enter phone number: ";
            std::getline(std::cin, input);
            contact.set_phone_number(input);
            phonebook.add_contact(contact);
        }
        else if (input == "SEARCH"){
            phonebook.search_contact();
        }
        else if (input == "EXIT"){
            break;
        }
    }
    return (0);
}