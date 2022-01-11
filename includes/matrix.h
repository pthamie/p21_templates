#pragma once
#include <vector>

template <class T>
class matrix
{
private:
    std::vector<T> _data;
    int _nbli = 0;
    int _nbcol = 0;

public:
  matrix()
  {
  }

  ~matrix()
  {

  }

public:
    void SetSize(int nbli, int nbcol)
    {
      _data.assign (nbli*nbcol, 0);        
    }

    void SetValue(int li, int col, T val)
    {
        _data[li * _nbcol + col] = val;
    }

    T GetValue(int li, int col)
    {
        T ret;

        ret = _data[li * _nbcol + col];

        return ret;
    }
};