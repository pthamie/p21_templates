#pragma once
#include <fstream>
#include <vector>
#include <string>

template <class T>
class matrix
{
private:
    std::vector<T> _data;
    unsigned int _nbli = 0;
    unsigned int _nbcol = 0;

public:
    matrix()
    {
    }

    ~matrix()
    {
    }

public:
    void SetSize(const unsigned int nbli, const unsigned int nbcol)
    {
        _nbli = nbli;
        _nbcol = nbcol;
        _data.assign(nbli * nbcol, 0);
    }

    void SetValue(const unsigned int li, const unsigned int col, const T val)
    {
        _data[li * _nbcol + col] = val;
    }

    T GetValue(const unsigned int li, const unsigned int col) const
    {
        T ret;

        ret = _data[li * _nbcol + col];

        return ret;
    }

    void WriteToFile(const std::string &file_name) const
    {
        std::ofstream out(std::string("./data/") + file_name);

        unsigned int k;
        for (unsigned int i = 0; i < _nbli; i++)
        {
            for (unsigned int j = 0; j < _nbcol; j++)
            {
                out << _data[k++] << ";";
            }
            out << "\n";
        }
    }
};