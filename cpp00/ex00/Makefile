CPP = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = megaphone

SRCS = ./megaphone.cpp

OBJS = ./megaphone.o

$(TARGET): $(OBJS)
	$(CPP) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all