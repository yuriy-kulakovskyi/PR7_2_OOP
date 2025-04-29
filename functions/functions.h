#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <list>


using namespace std;

int RandomNumber();
void printList(const list<int>& lst);
list<int> createList(int size);
list<int> removeElements(list<int> originalList, int valueToRemove);

#endif //FUNCTIONS_H
