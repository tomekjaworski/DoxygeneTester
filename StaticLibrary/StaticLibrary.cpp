// StaticLibrary.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "Inheritances.hpp"

// \todo This is an example of a library function.
void fnStaticLibrary()
{
}



class X: public ICompositeInterface {

	virtual void SomeMethod1_First(void) override
	{
	}
	virtual std::uint32_t GetSomeCounter_First(void) const override
	{
		return std::uint32_t();
	}
	virtual void SomeMethod1_Second(void) override
	{
	}
	virtual long double GetSomeCounter_Second(void) const override
	{
		return 0.0L;
	}
};


X static_var;