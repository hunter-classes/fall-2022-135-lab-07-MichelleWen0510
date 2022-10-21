/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 6

Unindentation and indentation of a program.
*/
#include <iostream>
#include <string>
#include <cctype>

std::string removeLeadingSpaces(std::string line)
{
	std::string final;
	char letter;
	int start;
	for(int i=line.length();i>=0;i--)
	{
		letter=line[i];
		if(!isspace(letter))
		{
			start=i;	
		}
	}
	for(int j=start;j<line.length();j++)
	{
		letter=line[j];
		final=final+letter;
	}
	return final+"\n";
}

int countChar(std::string line, char c)
{
	char letter;
	int amount=0;
	for(int i=0;i<line.length();i++)
	{
		letter=line[i];
		if(letter==c)
		{
			amount++;
		}
	}
	return amount;
}
