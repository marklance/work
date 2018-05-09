#include<iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad
{
	private:
		char * str;
		itn len;
		static int num_strings;
	public:
		StringBad(const char * s);
		StringBad();
		~StringBad();

		friend std::ostream & operator << (std::ostream & os, const StringBad & st);
};
#endif
