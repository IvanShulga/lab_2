#include "Header.h"


int main() {

    Text texts[3] = {
        Text("123Hello, world!"),
        Text("Hello, 123world!"),
        Text("Hello, world!123")
    };

    menu(texts);

    return 0;

}
