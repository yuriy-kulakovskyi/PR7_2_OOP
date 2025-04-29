#include <iostream>
#include <list>
#include <ctime>
#include "./functions/functions.h"

using namespace std;

int main() {
    srand((unsigned int)time(NULL));

    int n;
    cout << "Введіть розмір списку n = ";
    cin >> n;

    list<int> originalList = createList(n);

    printList(originalList);

    int value;
    cout << "Введіть значення для видалення: ";
    cin >> value;

    list<int> modifiedList = removeElements(originalList, value);

    cout << "Список після видалення ";
    printList(modifiedList);

    return 0;
}
