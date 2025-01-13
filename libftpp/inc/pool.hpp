#pragma once

#include <cstddef>

template <typename TType>
class Pool
{
public:
	void resize(const size_t& numberOfObjectStored)
	{
		;
	}
private:
	class Object
	{
		TType* operator->()
		{
			return (this);
		}
	};

};
