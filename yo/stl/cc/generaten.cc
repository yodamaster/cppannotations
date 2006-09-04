    #include <algorithm>
    #include <vector>
    #include <iterator>
    #include <iostream>

    class NaturalSquares
    {
        unsigned d_newsqr;
        unsigned d_last;

        public:
            NaturalSquares(): d_newsqr(0), d_last(0)
            {}
            unsigned operator()()
            {                           // using: (a + 1)^2 == a^2 + 2*a + 1
                return d_newsqr += (d_last++ << 1) + 1;
            }
    };

    using namespace std;

    int main()
    {
        vector<unsigned>    uv(10);

        generate_n(uv.begin(), 5, NaturalSquares());

        copy(uv.begin(), uv.end(), ostream_iterator<int>(cout, " "));
        cout << endl;

        return 0;
    }
    /*
        Generated output:

        1 4 9 16 25 0 0 0 0 0
    */
