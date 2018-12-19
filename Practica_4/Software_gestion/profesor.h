#ifndef PROFESOR_H
#define PROFESOR_H

#include<iostream>
#include<string.h>
using namespace std;

class profesor{

	private:

		char user_[30];
		char password_[20];
		char type_[20];

	public:

//OBSERVERS

		inline const char *getUser() const{return user_;};
		inline const char *getPassword() const{return password_;};
		inline const char *getType() const{return type_;};

//MODIFIERS

		void setUser(char *user);
		void setPassword(char *password);
		void setType(char *type);

};

#endif
