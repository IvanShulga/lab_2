#include "Header.h"

Text::Text(string content) {

    this->content = content;

}

void Text::append(string str) {

    content += '\n';
    content += str;

}

float Text::digitPercentage() {

    float digitCount = 0;
    int charCount = 0;

    for (char c : content) {

        if (isdigit(c))
            digitCount++;

        if (isalnum(c))
            charCount++;

    }

    return digitCount / charCount * 100;
}

string Text::getContent() {

    return content;

}

void Text::smallest_number_of_digit(Text* texts) {

    Text* minDigitText = &texts[0];

    for (int i = 1; i < 3; i++)

        if (texts[i].digitPercentage() < minDigitText->digitPercentage())
            minDigitText = &texts[i];

    cout << "Text with the smallest digit percentage:\n" << "------------------------------------------------------------" << endl << minDigitText->getContent() << "\n" << "------------------------------------------------------------" << endl << "Digit percentage: " << minDigitText->digitPercentage() << "%" << endl;


}

void menu(Text* texts) {

    char c;
    string str;

    do {

        c = ' ';
        str.clear();

        cout << "Enter 1 if you want to add string to the first object\n2 if second object" 
            << "\n3 if third object\n4 if you want to see all text:\nOr somthing else to end program: ";

        cin >> c;

        if (c != '1' && c != '2' && c != '3' && c != '4') {

            cout << "The end!" << endl;
            break;

        }

        if (c != '4') {

            cout << "Enter string: ";
            cin >> str;
        
        }

        if (c == '1')

            texts[0].append(str);

        else if (c == '2')

            texts[1].append(str);

        else if (c == '3') 

            texts[2].append(str);

        else if (c == '4') {

            cout << "\nFirst text:\n" << texts[0].getContent() << "\n\nSecond text:\n" << texts[1].getContent()
                << "\n\nThird text:\n" << texts[2].getContent() << endl << endl;

            continue;

        }

        cout << endl;

        texts->smallest_number_of_digit(texts);

        cout << endl;

    } while (true);

}
