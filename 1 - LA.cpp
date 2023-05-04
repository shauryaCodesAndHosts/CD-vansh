#include<iostream>
#include<ctype.h>
using namespace std;
int main ()
{
 string input;
 cout << "Enter a string of code: ";
 getline (cin, input);
 input += ' ';
 string keywords[] = { "int", "for", "while", "if", "else", 
 "return", "float", "do", "switch","case", "char", "double" };
 char buffer[20];
 int j = 0;
 for (int i = 0; i < input.length (); i++)
 {
 if (isalpha (input[i]))
{
 buffer[j] = input[i];
 j++;
}
 else if (isdigit (input[i]))
{
 buffer[j] = input[i];
 j++;
}
 else
{
 if (isalpha (input[i - 1]))
 {
 buffer[j] = '\0';
 bool flag = false;
 for (auto keyw:keywords)
{
 if (keyw == buffer)
 {
 flag = true;
 cout << buffer << " is a keyword. \n";
 j = 0;
 buffer[j] = '\0';
 }
}
 if (!flag)
{
 cout << buffer << " is an identifier. \n";
 j = 0;
 buffer[j] = '\0';
}
 }
 else if (isdigit (input[i - 1]))
 {
 buffer[j] = '\0';
 cout << buffer << " is a constant.\n";
 }
 if (input[i] != ' ')
 cout << input[i] << " is a operator.\n";
}
 }
}