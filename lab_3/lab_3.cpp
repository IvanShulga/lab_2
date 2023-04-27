#include <string>
#include <iostream>

using namespace std;

class Text {

public:

    string* line;
    int count = 0;
    float percent;

    void aaa() {

        line = new string[n];

    }

    void percent_digits(string *line) {

        for (int j = 0; j < 10; j++)

            for (int i = 0; i < line[j].length(); i++) {

                if (isdigit(line[0][i])) {

                    count++;
                    cout << line[0][i];

                }

            }

        percent = count / line[0].length();

        cout << endl << "Proc: " << percent << " " << count;

        exit;

    }

    void add_line(Text text[]) {

        string enter;

        cin >> enter;

        text[0].line[0] = new string (enter);

        cout << text[0].line[0][0] << endl;

        exit;

    }

};


int main() {

    Text text [3];

   /* int vib;
    cin >> vib;*/

    int n;
    cin >> n;

    return 0;
}

