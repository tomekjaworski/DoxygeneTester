#if !defined(_INHERITANES_HPP_)
#define _INHERITANES_HPP_

#include <cstdint>

class Base {

public:
	virtual void VirtualMethod1(void) const;
};

class ClassA : public Base {
	virtual void VirtualMethod1(void) const override;
};

class ClassB : public ClassA {
	virtual void VirtualMethod1(void) const override;
};

class ClassC : public ClassB {
	void VirtualMethod1(void) const override;
};

//
//

/**
 * \interface ISomeInterface_First
 * \brief To jest krótki opis interfejsu \c First.
 */
class ISomeInterface_First {

public:
	virtual void SomeMethod1_First(void) = 0;

	virtual std::uint32_t GetSomeCounter_First(void) const = 0;
};

/**
 * \interface ISomeInterface_Second
 * \brief To jest krótki opis interfesu \c Second.
 */
class ISomeInterface_Second {

public:
	
	//! To jest opis metody 1/Second
	virtual void SomeMethod1_Second(void) = 0;

	/**
	 * \brief Opis metody. Ten opis znajduje się w klasie \ref ISomeInterface_Second i jest dziedziczony przez tę metodę w klasach potomnych.
	 * \return Zwraca jakąś wartość zmiennoprzecinkową.
	 */
	virtual long double GetSomeCounter_Second(void) const = 0;
};

/**
 * \interface ICompositeInterface
 * \brief A to jest interfejs kompozytowy, łączący funkcjonalności \ref ISomeInterface_First oraz \ref ISomeInterface_Second.
 * 
 * Tutaj można dodac jakiś dłuższy opis.
 * Może on mieć dowolnie dużo linii.
 * Baaardzo dużo linii.
 */
class ICompositeInterface : public ISomeInterface_First, public ISomeInterface_Second {
	

};

#endif // _INHERITANES_HPP_

