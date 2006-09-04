    #include <numeric>
    #include <vector>
    #include <iostream>
    using namespace std;

    int main()
    {
        int             ia[] = {1, 2, 5, 10};
        vector<int>     iv(ia, ia + 4);
        vector<int>     ov(iv.size());

        adjacent_difference(iv.begin(), iv.end(), ov.begin());

        copy(ov.begin(), ov.end(), ostream_iterator<int>(cout, " "));
        cout << endl;

        adjacent_difference(iv.begin(), iv.end(), ov.begin(), minus<int>());

        copy(ov.begin(), ov.end(), ostream_iterator<int>(cout, " "));
        cout << endl;

        return 0;
    }
    /*
        generated output:

        1 1 3 5
        1 1 3 5
    */
