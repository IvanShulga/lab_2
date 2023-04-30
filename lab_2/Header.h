#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Text {

private:

    string content;

public:

    Text(string content = "");

    void append(string str);

    float digitPercentage();

    string getContent();

    void smallest_number_of_digit(Text* texts, int num);

};

void menu(Text* texts, int n);

void choose_text(Text* texts, string str, int n);

int num_texts();
