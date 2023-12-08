#include "PersonCollection.h"
#include "UserInterface.h"

int main() {
    PersonCollection collection;
    UserInterface ui(collection);
    ui.start();

    return 0;
}
