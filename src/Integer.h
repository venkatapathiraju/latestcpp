#pragma once

class Integer{

	int m_Value{0};

public:
	Integer(int value) :  m_Value(value)
	{}

	int Getvalue() const {return m_Value;}

	Integer operator+(const Integer& op)const
	{
		return Integer{m_Value + op.m_Value};
	}

	//Pre Increment operator
	Integer & operator ++()
	{
		std::cout << "Pre Increment operator";
		++m_Value;
		return *this;
	}

	//Post Increment operator
	Integer operator ++(int)
	{
		std::cout << "Post Increment operator";
		return Integer {++m_Value};
		//return temp;
	}

	//Check equal to operator
	bool operator==(const Integer &op) const
	{
		return m_Value == op.m_Value;
	}

	Integer & operator=(const Integer &op) 
	{
		if(this != &op)
			m_Value = op.m_Value;
		return *this;
	}

	Integer & operator=(Integer &&op) 
	{
		if(this != &op)
			m_Value = op.m_Value;
		return *this;
	}

	void operator()()
	{
		std::cout << "Function operator" << std::endl;
	}

    operator int()
    {
        return m_Value;
    }

	friend std::istream & operator >> (std::istream &in, Integer &op);


};

Integer operator+(int x, const Integer &op)
{
	return Integer{x + op.Getvalue()};
}