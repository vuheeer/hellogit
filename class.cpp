//class.cpp
#include "class.h"
Class::Class() {
        year = 1;
        stream = 'a';
        }
Class::Class(int a, char b) {
        year = a;
        stream = b;
        }
void Class::SetYear(int a) {
        year = a;
        }
int Class::GetYear() {
        return year;
        }
void Class::SetStream(char b) {
        stream = b;
        }
char Class::GetStream() {
        return stream;
        }

