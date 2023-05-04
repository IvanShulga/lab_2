#include "Header.h"

Text::Text(string content) {

    this->content = content;

}

void Text::append(string str) {

    content += str;
    content += '\n';

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

    float percent;

    if (charCount != 0)
        percent = digitCount / charCount * 100;

    else percent = 0;

    return percent;
}

string Text::getContent() {

    return content;

}

void Text::smallest_number_of_digit(Text* texts, int num) {

    Text* minDigitText = &texts[0];

    for (int i = 1; i < num; i++)

        if (texts[i].digitPercentage() < minDigitText->digitPercentage())
            minDigitText = &texts[i];

    cout << "Text with the smallest digit percentage:\n" << "------------------------------------------------------------" 
        << endl << minDigitText->getContent() << "\n" << "------------------------------------------------------------" 
        << endl << "Digit percentage: " << minDigitText->digitPercentage() << "%" << endl;

}

void menu(Text* texts, int n) {

    char c;
    string str;
    int m;
    
    do {

        c = ' ';
        str.clear();

        cout << "Write 1 if you want add something to any object\n2 if you want to see one of texts" 
            << "\n3 if you want to see text with the smallest amount of digits\nOr somthing else to end program: ";

        cin >> c;

        if (c != '1' && c != '2' && c != '3') {

            cout << "The end!" << endl;
            break;

        }

        if (c == '1') {

            cout << "Enter string: ";
            cin >> str;
            choose_text(texts, str, n);

        }

        else if (c == '2') {

            cout << "Enter ind of text which you want to see: ";

            cin >> m;
            cout << "Text #" << m << " is: \n---------------------------------------------\n" 
                << texts[m].getContent() << "---------------------------------------------\n";

            continue;

        }

        else if (c == '3') {

            cout << endl;

            texts->smallest_number_of_digit(texts, n);

            cout << endl;

        }

        cout << endl;

    } while (true);

}

void choose_text(Text* texts, string str, int num) {

    int n;

    do {

        cout << "Enter ind of text to which you want add string: ";
        cin >> n;

    } while (n > num);

    texts[n].append(str);

}

int num_texts() {

    int n;

    do {

        cout << "Write number of texts (>1): ";
        cin >> n;

    } while (n < 2);

    return n;

}
