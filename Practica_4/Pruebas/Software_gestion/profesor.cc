#include<iostream>
#include<string.h>
#include"profesor.h"
using namespace std;

void profesor::setUser(char *user){

	strcpy(user_,user);

}

void profesor::setPassword(char *password){

	strcpy(password_,password);

}

void profesor::setType(char *type){

	strcpy(type_,type);

}
