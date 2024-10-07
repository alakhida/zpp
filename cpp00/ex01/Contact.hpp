#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact{
    private:
            std::string fname;
            std::string lname;
            std::string nickname;
            std::string darkest_secret;
            std::string phone_number;
    public:
        void set_fname(std::string fname);
        void set_lname(std::string lname);
        void set_nickname(std::string nickname);
        void set_darkest_secret(std::string darkest_secret);
        void set_phone_number(std::string phone_number);

        std::string get_fname(void);
        std::string get_lname(void);
        std::string get_nickname(void);
        std::string get_darkest_secret(void);
        std::string get_phone_number(void);

};

#endif