/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 7

Organize and read program
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "funcs.h"


int main()
{
	std::ifstream file("input.cpp");
	std::ofstream file1("input1.cpp");
	std::string curLine;
	std::string line;
	std::cout << "--------Previous----------" << std::endl;
	while(std::getline(file,curLine))
	{
		std::cout << curLine << std::endl;
		line=line+removeLeadingSpaces(curLine);
	}
	file.close();
	file1 << line;
	file1.close();
	std::cout << "--------Removed Indent------" << std::endl;
	std::cout << line << std::endl;
	std::cout << "-----Added Indents-----" << std::endl;

        std::ifstream file2("input1.cpp");
        std::ofstream file3("input2.cpp");
        std::string final;
	int charCount=0;
        while(std::getline(file2,curLine))
        {
		for(int i=0;i<charCount;i++)
                {
                        final=final+"\t";
                }
		charCount+=countChar(curLine,'{');
		charCount-=countChar(curLine,'}');
                final=final+curLine+"\n";
        }
        file2.close();
        file3 << final;
        std::cout << final << std::endl;
        file3.close();
}
