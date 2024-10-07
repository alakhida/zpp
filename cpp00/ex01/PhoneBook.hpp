#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
    public:
        PhoneBook(void);
        void add_contact(Contact contact);
        void search_contact(void);
        void display_contact(int index);

};

#endif