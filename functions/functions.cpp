#include "functions.h"
#include <iostream>
#include <list>

using namespace std;

int RandomNumber() {
  return rand() % 100 - 50;
}

void printList(const list<int>& lst) {
  cout << "Список: ";
  for (int item : lst) {
    cout << item << " ";
  }
  cout << endl;
}

list<int> createList(int size) {
  list<int> lst(size);
  generate(lst.begin(), lst.end(), RandomNumber);
  return lst;
}

list<int> removeElements(list<int> originalList, int valueToRemove) {
  originalList.remove(valueToRemove);
  return originalList;
}