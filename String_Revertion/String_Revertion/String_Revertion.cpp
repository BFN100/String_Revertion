/*
Author: Bianca Fernandes Nascimento
Language: C++
Objective: This program will reverse a sentence
Made in Visual Studio
*/

#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string str = "This string will be reversed"; // The variable "str" receives this sentence
    cout << str << endl;  //print the original sentence

    string str_reversed; // here I created a string that received the phrase already inverted
    str_reversed.resize(str.size()); // here "str_reversed" will be the size of "str"
    copy(str.rbegin(), str.rend(), str_reversed.begin()); // in this part I do the inversion
    cout << str_reversed << endl; // here I print the sentence inverted

    return EXIT_SUCCESS;

}
