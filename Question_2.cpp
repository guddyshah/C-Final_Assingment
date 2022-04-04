// Set-2 Question-2

#include <iostream>
#include <string.h>
using namespace std;

class charecterInput
{
public:
	virtual void add(char d)
	 {
	  data += d;
	 }
	std::string getValue() { return data; }
	std::string data;
};

class numInput : public charecterInput
{
   void add(char c)
   {
      if (('0' <= 'c') && (c <= '9'))
         charecterInput::add(c);
   }
};

int main()
{
    charecterInput* input = new numInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue()<<endl;
}