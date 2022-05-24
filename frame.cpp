#include <iostream>
#include "frame.h"
#include<vector>


using namespace std;

//typedef vector<string> vector_string;

static auto width(const vector_string &v)
{
    string::size_type maxlen = 0;
    for (const auto &line : v)
    {
        maxlen = max(maxlen, line.size());
    }
    return maxlen;
}

vector_string read()
{
    vector_string ret;
    string line;
    while (getline(cin, line))
    {
        ret.push_back(line);
    }

    return ret;
}

void write(const vector_string &v,const string msg)
{
    cout << "Result of : "<< msg << "\n";
    for (const auto &line : v)
        cout << line << "\n";
}

vector_string frame(const vector_string &v)
{
    vector_string ret;

    auto maxlen = width(v);
    string border(maxlen + 4, '*');

    ret.push_back(border);
    for (const auto &line : v)
    {
        auto new_line = "* " + line + string(maxlen - line.size(), ' ') + " *";
        ret.push_back(new_line);
    }
    ret.push_back(border);

    return ret;
}

vector_string vcat(const vector_string &u, const vector_string &v)
{
    vector_string ret{u};
    // for(const auto &line: u)
    //     ret.push_back(line);

    for (const auto &line : v)
        ret.push_back(line);

    return ret;
}

vector_string hcat(const vector_string& u, const vector_string& v)
{
    vector_string ret;
    auto width_left = width(u), width_right=width(v);
    auto common_length = min(u.size(), v.size());
    for(auto idx=0; idx<common_length; ++idx)
    {
        auto& left = u[idx];
        auto& right = v[idx];
        auto line = left + string(width_left-left.size(), ' ') + right + string(width_right-right.size(), ' ');
        ret.push_back(line);
    }
    for(auto idx=common_length; idx<u.size(); ++idx)
    {
        auto& left = u[idx];
        auto line = left + string(width_left+width_right - left.size(), ' ');
        ret.push_back(line);
    }
    for(auto idx=common_length; idx<v.size(); ++idx)
    {
        auto& right = v[idx];
        auto line = string(width_left, ' ') +right + string(width_right-right.size(), ' ');
        ret.push_back(line);
    }

    return ret;
}