    #include <iostream>
    using namespace std;

    int main()
    {
        cin.ignore(80, '\n');   // skip the first line
        cout << cin.rdbuf();    // copy the rest by inserting a streambuf *
    }
