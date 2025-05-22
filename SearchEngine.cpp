#include <bits/stdc++.h>
#include "trieDS.cpp"
#include "prefix_exact_pattern_Search.cpp"
using namespace std;

void test();

int main(int argc, char **argv)
{

    string filename;
    Trie T;
    vector<string> data;

    // if File provided in Arguments.
    if (argc > 1)
    {
        filename = argv[1];
        data = get_array_from_file(filename);
    }
    else
    {
        cout << "File name: ( faculty | students | movies | todolist | words ) :\n";
        cin >> filename;
        cerr << "loading ...";
        data = get_array_from_file("data/" + filename + ".txt");
        cerr << "Done.\n";
    }

    for (string word : data)
    {
        // cout << word << "\n";
        T.insert(word);
    }

    int choice;

    // If pattern in Arguments.
    if (argc > 2)
    {
        string pattern = argv[2];
        for (string w : search(data, pattern))
        {
            cout << w << "\n";
        }
        return 0;
    }

    do
    {

        cout << "------------------------\n";
        cout << "MENU\n";
        cout << "1. Exact Search.\n";
        cout << "2. Prefix Search.\n";
        cout << "3. Universal Search.\n";
        cout << "0. Exit.\n";

        cin >> choice;
        getchar(); // get the new line character

        string pattern;

        if (choice)
        {
            cout << "Enter Search Text (leave empty to list all) : ";
            getline(cin, pattern);
        }

        switch (choice)
        {
        case 1:
            if (T.search_exact(pattern))
            {
                cout << "String Exists.\n";
            }
            else
            {
                cout << "NOT Found.\n";
            }
            break;
        case 2:
            for (string w : T.search_pre(pattern))
            {
                cout << w << "\n";
            }
            break;

        case 3:
            for (string w : search(data, pattern))
            {
                cout << w << "\n";
            }
            break;

        default:
            break;
        }

        cout << "\n\nPress any key to continue.";
        getchar();
        

    } while (choice);


    return 0;
}

void test()
{
}
