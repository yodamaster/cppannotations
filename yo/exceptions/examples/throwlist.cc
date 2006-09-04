    #include <iostream>
    using namespace std;

    void charPintThrower() throw(char const *, int);    // declarations

    class Thrower
    {
        public:
            void intThrower(int) const throw(int);
    };

    void Thrower::intThrower(int x) const throw(int)    // definitions
    {
        if (x)
            throw x;
    }

    void charPintThrower() throw(char const *, int)
    {
        int x;

        cerr << "Enter an int: ";
        cin >> x;

        Thrower().intThrower(x);
        throw "this text is thrown if 0 was entered";
    }

    void runTimeError() throw(int)
    {
        throw 12.5;
    }

    int main()
    {
        try
        {
             charPintThrower();
        }
        catch (char const *message)
        {
            cerr << "Text exception: " << message << endl;
        }
        catch (int value)
        {
            cerr << "Int exception: " << value << endl;
        }
        try
        {
            cerr << "Up to the run-time error\n";
            runTimeError();
        }
        catch(...)
        {
            cerr << "not reached\n";
        }
    }
