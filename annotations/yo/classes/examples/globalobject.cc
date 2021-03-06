    #include <iostream>
    using namespace std;

    // a class Test with a constructor function
    class Test
    {
        public:                 // 'public' function:
            Test();             // the constructor
    };

    Test::Test()                // here is the
    {                           // definition
        cout << "constructor of class Test called\n";
    }

    // and here is the test program:
    Test
        g;                      // global object

    void func()
    {
        Test                    // local object
            l;                  // in function func()

        cout << "here's function func()" << '\n';
    }

    int main()
    {
        Test                    // local object
            x;                  // in function main()

        cout << "main() function" << '\n';
        func();
        return (0);
    }
/*
    Generated output:

constructor of class Test called
constructor of class Test called
main() function
constructor of class Test called
here's function func()
*/
