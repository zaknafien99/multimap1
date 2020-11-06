// multimap1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//stl/multimap1.cpp

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    multimap<int, string> coll;     //container for int/string values

    //insert some elements in arbitrary order
    // - a value with key 1 gets inserted twice
    coll = { {5, "tagged"},
        {2, "a"},
        {1, "this"},
        {4, "of"},
        {6, "strings"},
        {1, "is"},
        {3, "multimap"} };

    // print all element values
    // - element member second is the value
    for (auto elem : coll) {
        cout << elem.second << ' ';
    }
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
