#pragma once
#include "Integer.h"

//RAAI
//Resource Aquisition As initalization
using namespace std;
class SmartPtr
{
    
    public:
    void operator()()
    {
        cout << "Smart Ptr examples";
    }
};

class IntegerPtr
{
    Integer *m_p;
    public:
        IntegerPtr(Integer *p) : m_p{p}
        {

        }

        ~IntegerPtr()
        {
            delete m_p;
        }
        Integer *operator->()
        {
            return m_p;
        }

        Integer & operator *()
        {
            return *m_p;
        }

};