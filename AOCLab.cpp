#include<bits/stdc++.h>
#include<chrono>
using namespace std;

#pragma optimaze("", off);
#define pb push_back

const int COUNT_REPITES = 10000;
const int COUNT_CALCULATES = 1000;

/*
    chrono :: duration < double > elapsed;
    auto start = chrono :: system_clock :: now();
    elapsed = chrono :: system_clock :: now() - start;
*/

struct Result
{
    string typeName;
    string operation;
    double duration;
    double percent;
};

vector < Result > result;

template < typename type >

inline double Set(type value1)
{
    value1 = 1;
    type value2 = 1;

    double durationEmpty = 0;
    double durationOperation = 0;

    chrono :: duration < double > elapsed;
    auto start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 = value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationEmpty = elapsed.count() / COUNT_REPITES;

    start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 = value2;
        value1 = value2;
        value1 = value2;
        value1 = value2;
        value1 = value2;
        value1 = value2;
        value1 = value2;
        value1 = value2;
        value1 = value2;
        value1 = value2;
        value1 = value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationOperation = elapsed.count() / COUNT_REPITES;

    durationOperation -= durationEmpty;
    durationOperation /= 10;

    return durationOperation;
}

template < typename type >

inline double Add(type value1)
{
    value1 = 1;
    type value2 = 0;

    double durationEmpty = 0;
    double durationOperation = 0;

    chrono :: duration < double > elapsed;
    auto start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 += value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationEmpty = elapsed.count() / COUNT_REPITES;

    start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 += value2;
        value1 += value2;
        value1 += value2;
        value1 += value2;
        value1 += value2;
        value1 += value2;
        value1 += value2;
        value1 += value2;
        value1 += value2;
        value1 += value2;
        value1 += value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationOperation = elapsed.count() / COUNT_REPITES;

    durationOperation -= durationEmpty;
    durationOperation /= 10;

    return durationOperation;
}

template < typename type >

inline double Dec(type value1)
{
    value1 = 1;
    type value2 = 0;

    double durationEmpty = 0;
    double durationOperation = 0;

    chrono :: duration < double > elapsed;
    auto start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 -= value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationEmpty = elapsed.count() / COUNT_REPITES;

    start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
        value1 -= value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationOperation = elapsed.count() / COUNT_REPITES;

    durationOperation -= durationEmpty;
    durationOperation /= 10;

    return durationOperation;
}

template < typename type >

inline double Mult(type value1)
{
    value1 = 1;
    type value2 = 1;

    double durationEmpty = 0;
    double durationOperation = 0;

    chrono :: duration < double > elapsed;
    auto start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 *= value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationEmpty = elapsed.count() / COUNT_REPITES;

    start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
        value1 *= value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationOperation = elapsed.count() / COUNT_REPITES;

    durationOperation -= durationEmpty;
    durationOperation /= 10;

    return durationOperation;
}

template < typename type >

inline double Div(type value1)
{
    value1 = 1;
    type value2 = 1;

    double durationEmpty = 0;
    double durationOperation = 0;

    chrono :: duration < double > elapsed;
    auto start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 /= value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationEmpty = elapsed.count() / COUNT_REPITES;

    start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
        value1 /= value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationOperation = elapsed.count() / COUNT_REPITES;

    durationOperation -= durationEmpty;
    durationOperation /= 10;

    return durationOperation;
}

template < typename type >

inline double Mod(type value1)
{
    value1 = 0;
    type value2 = 1;

    double durationEmpty = 0;
    double durationOperation = 0;

    chrono :: duration < double > elapsed;
    auto start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 %= value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationEmpty = elapsed.count() / COUNT_REPITES;

    start = chrono :: system_clock :: now();

    for(int i = 0; i < COUNT_REPITES; i++)
    {
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
        value1 %= value2;
    }

    elapsed = chrono :: system_clock :: now() - start;

    durationOperation = elapsed.count() / COUNT_REPITES;

    durationOperation -= durationEmpty;
    durationOperation /= 10;

    return durationOperation;
}

inline double myMax(double value1, double value2, double value3, double value4, double value5)
{
    return max(value1, max(max(value2, value3), max(value4, value5)));
}

inline double myMax(double value1, double value2, double value3)
{
    return max(value1, max(value2, value3));
}

inline void writeResult()
{
    cout << "-----------+----+----------+----------------------+------+\n";
    cout << " type      |oper| duration |       diagram        |   %  |\n";
    cout << "      name |atio|(nano sec)|                      |1..100|\n";
    cout << "-----------+----+----------+----------------------+------+\n";

    for(int i = 0; i < result.size(); i++)
    {
        cout << setprecision(5) << fixed;
        int countHeshteg = round(20*result[i].percent);

        if(i != 0 && result[i].operation != result[i-1].operation)
        {
            cout << "-----------+----+----------+----------------------+------+\n";
        }

        cout << " " << setw(9) << result[i].typeName << " | " << setw(2) << result[i].operation << " | " << setw(8) << result[i].duration*1000000000 << " | ";

        for(int j = 0; j < countHeshteg; j++)
        {
            cout << "#";
        }

        for(int j = countHeshteg; j < 20; j++)
        {
            cout << " ";
        }

        cout << setprecision(0) << fixed;
        cout << " | " << setw(3) << round(result[i].percent*100) << "% |\n";
    }

    cout << "-----------+----+----------+----------------------+------+\n";

    return;

}

inline void process()
{
    char charValue = 0;
    int intValue = 0;
    long long longLongValue = 0;
    float floatValue = 0;
    double doubleValue = 0;

    double charAverange = 0;
    double intAverange = 0;
    double longLongAverange = 0;
    double floatAverange = 0;
    double doubleAverange = 0;

    double maximalDuration = 0;

    /// operation =

    for(int i = 0; i < COUNT_CALCULATES; i++)
    {
        charAverange += Set(charValue);
        intAverange += Set(intValue);
        longLongAverange += Set(longLongValue);
        floatAverange += Set(floatValue);
        doubleAverange += Set(doubleValue);
    }

    charAverange /= COUNT_CALCULATES;
    intAverange /= COUNT_CALCULATES;
    longLongAverange /= COUNT_CALCULATES;
    floatAverange /= COUNT_CALCULATES;
    doubleAverange /= COUNT_CALCULATES;

    maximalDuration = myMax(charAverange, intAverange, longLongAverange, floatAverange, doubleAverange);

    result.pb({"char", "=", charAverange, charAverange/maximalDuration});
    result.pb({"int", "=", intAverange, intAverange/maximalDuration});
    result.pb({"long long", "=", longLongAverange, longLongAverange/maximalDuration});
    result.pb({"float", "=", floatAverange, floatAverange/maximalDuration});
    result.pb({"double", "=", doubleAverange, doubleAverange/maximalDuration});

    charAverange = intAverange = longLongAverange = floatAverange = doubleAverange = 0;

    /// operation +=

    for(int i = 0; i < COUNT_CALCULATES; i++)
    {
        charAverange += Add(charValue);
        intAverange += Add(intValue);
        longLongAverange += Add(longLongValue);
        floatAverange += Add(floatValue);
        doubleAverange += Add(doubleValue);
    }

    charAverange /= COUNT_CALCULATES;
    intAverange /= COUNT_CALCULATES;
    longLongAverange /= COUNT_CALCULATES;
    floatAverange /= COUNT_CALCULATES;
    doubleAverange /= COUNT_CALCULATES;

    maximalDuration = myMax(charAverange, intAverange, longLongAverange, floatAverange, doubleAverange);

    result.pb({"char", "+=", charAverange, charAverange/maximalDuration});
    result.pb({"int", "+=", intAverange, intAverange/maximalDuration});
    result.pb({"long long", "+=", longLongAverange, longLongAverange/maximalDuration});
    result.pb({"float", "+=", floatAverange, floatAverange/maximalDuration});
    result.pb({"double", "+=", doubleAverange, doubleAverange/maximalDuration});

    charAverange = intAverange = longLongAverange = floatAverange = doubleAverange = 0;

    /// operation -=

    for(int i = 0; i < COUNT_CALCULATES; i++)
    {
        charAverange += Dec(charValue);
        intAverange += Dec(intValue);
        longLongAverange += Dec(longLongValue);
        floatAverange += Dec(floatValue);
        doubleAverange += Dec(doubleValue);
    }

    charAverange /= COUNT_CALCULATES;
    intAverange /= COUNT_CALCULATES;
    longLongAverange /= COUNT_CALCULATES;
    floatAverange /= COUNT_CALCULATES;
    doubleAverange /= COUNT_CALCULATES;

    maximalDuration = myMax(charAverange, intAverange, longLongAverange, floatAverange, doubleAverange);

    result.pb({"char", "-=", charAverange, charAverange/maximalDuration});
    result.pb({"int", "-=", intAverange, intAverange/maximalDuration});
    result.pb({"long long", "-=", longLongAverange, longLongAverange/maximalDuration});
    result.pb({"float", "-=", floatAverange, floatAverange/maximalDuration});
    result.pb({"double", "-=", doubleAverange, doubleAverange/maximalDuration});

    charAverange = intAverange = longLongAverange = floatAverange = doubleAverange = 0;

    /// operation *=

    for(int i = 0; i < COUNT_CALCULATES; i++)
    {
        charAverange += Mult(charValue);
        intAverange += Mult(intValue);
        longLongAverange += Mult(longLongValue);
        floatAverange += Mult(floatValue);
        doubleAverange += Mult(doubleValue);
    }

    charAverange /= COUNT_CALCULATES;
    intAverange /= COUNT_CALCULATES;
    longLongAverange /= COUNT_CALCULATES;
    floatAverange /= COUNT_CALCULATES;
    doubleAverange /= COUNT_CALCULATES;

    maximalDuration = myMax(charAverange, intAverange, longLongAverange, floatAverange, doubleAverange);

    result.pb({"char", "*=", charAverange, charAverange/maximalDuration});
    result.pb({"int", "*=", intAverange, intAverange/maximalDuration});
    result.pb({"long long", "*=", longLongAverange, longLongAverange/maximalDuration});
    result.pb({"float", "*=", floatAverange, floatAverange/maximalDuration});
    result.pb({"double", "*=", doubleAverange, doubleAverange/maximalDuration});

    charAverange = intAverange = longLongAverange = floatAverange = doubleAverange = 0;

    /// operation /=

    for(int i = 0; i < COUNT_CALCULATES; i++)
    {
        charAverange += Div(charValue);
        intAverange += Div(intValue);
        longLongAverange += Div(longLongValue);
        floatAverange += Div(floatValue);
        doubleAverange += Div(doubleValue);
    }

    charAverange /= COUNT_CALCULATES;
    intAverange /= COUNT_CALCULATES;
    longLongAverange /= COUNT_CALCULATES;
    floatAverange /= COUNT_CALCULATES;
    doubleAverange /= COUNT_CALCULATES;

    maximalDuration = myMax(charAverange, intAverange, longLongAverange, floatAverange, doubleAverange);

    result.pb({"char", "/=", charAverange, charAverange/maximalDuration});
    result.pb({"int", "/=", intAverange, intAverange/maximalDuration});
    result.pb({"long long", "/=", longLongAverange, longLongAverange/maximalDuration});
    result.pb({"float", "/=", floatAverange, floatAverange/maximalDuration});
    result.pb({"double", "/=", doubleAverange, doubleAverange/maximalDuration});

    charAverange = intAverange = longLongAverange = floatAverange = doubleAverange = 0;

    /// operation %=

    for(int i = 0; i < COUNT_CALCULATES; i++)
    {
        charAverange += Mod(charValue);
        intAverange += Mod(intValue);
        longLongAverange += Mod(longLongValue);
    }

    charAverange /= COUNT_CALCULATES;
    intAverange /= COUNT_CALCULATES;
    longLongAverange /= COUNT_CALCULATES;

    maximalDuration = myMax(charAverange, intAverange, longLongAverange);

    result.pb({"char", "%=", charAverange, charAverange/maximalDuration});
    result.pb({"int", "%=", intAverange, intAverange/maximalDuration});
    result.pb({"long long", "%=", longLongAverange, longLongAverange/maximalDuration});

    charAverange = intAverange = longLongAverange = floatAverange = doubleAverange = 0;

    writeResult();

    return;
}

main()
{
    process();

    return 0;
}
