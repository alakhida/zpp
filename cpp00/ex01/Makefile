CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = PhoneBook

SRCS = ./Contact.cpp ./PhoneBook.cpp

OBJS = ./Contact.o ./PhoneBook.o

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) 
	
fclean: clean	
	rm -f $(TARGET)
