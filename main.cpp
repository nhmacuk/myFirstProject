#include <iostream>
#include <cstring>

using namespace std;

void printarray(int myArray[], int length) {
    for (int n=0; n<length; ++n)
        cout << myArray[n] << ' ';
    cout << '\n';
}


#include<list>
void printList(list<int> myList) {
    for (int x : myList)
        cout << x << ' ';
    cout << '\n';
}

void printCharString(string myString, int length) {
    for (int n=0; n<length; ++n)
        cout << myString[n] << ' ';
    cout << '\t';
}

void localSwap(int* x, int* y) {
    int* temp = x;
    x = y;
    y = temp;
    cout << "local: x,y" << *x << *y << "\n";
}
void swap(int* adresOfx, int* adresOfy) {
    int temporyValue = *adresOfx;
    int valueAtThePointerX = *adresOfx;
    *adresOfx = *adresOfy;
    *adresOfy = temporyValue;
    cout << "local: x,y" << *adresOfx << *adresOfy << "\n";
}

int main() {
    int x = 3;
    int y = 2;
    swap(&x, &y);
    cout << "x,y" << x << y << "\n";
    list<int> myList{1,2,3,4};
    string myStringArray = "My String";
    string myStringArray2 = "This is ";
    cout << myStringArray2 + myStringArray + '\n';
    int var = 3;
    int myCommaSeparatedList = (1, 2, var);
    int myArray[3] = {1, 2, var};
    cout << "myArray: " << myArray[2] << "\n";
    printarray(myArray, 3);
    printList(myList);
    printCharString(myStringArray,9);

    var = 2;
    cout << var << '\n';
    int* myadress = &var;
    cout << "this is my adress: " << myadress << '\n';
    cout << "this is val " << *myadress <<'\n';
    int **var2;

    int arr[] = { 100, 200, 300, 400 };


    cout << arr[2] << " " << "\n";
    cout << &arr[0] << "\t" << &arr[1] << "\t" << &arr[2] <<"\t" << &arr[3] << "\n";
    cout << *(arr+2);

    double arr2[] = { 100, 200, 300, 400 };
    cout << arr2[2] << " " << "\n";
    cout << &arr2[0] << "\t" << &arr2[1] << "\t" << &arr2[2] <<"\t" << &arr2[3] << "\n";
    cout << *(arr2+2);
    return 0;

}
