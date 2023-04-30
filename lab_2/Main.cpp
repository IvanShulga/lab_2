#include "Header.h"


int main() {

    int num = num_texts();
    Text* texts;
    texts = new Text[num];

    menu(texts, num);

    return 0;

}
