/*

This is an assignment from Daniel Gukwaya and his C++ 20 course I got, this prompts the user for the following: 
	-Prompt user "Where do you live?"
	-User inputs answer
	- Output and include the users answer

	*/

//include section

#include <iostream>


std::string userInput; 

int main()
{
	
std::cout << "Where do you live?" << std::endl;
getline(std::cin,userInput);
std::cout <<"I've heard of great things about " << userInput << ". I'd like to go sometime" << std::endl;
return 0;

std::cout << " this is something that I'm writing right now in sublime";
};
