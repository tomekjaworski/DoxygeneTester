
#include <iostream>
#include <sstream>
#include <vector>
#include "..\StaticLibrary\StaticLibrary.hpp"
#include "..\StaticLibrary\Inheritances.hpp"

/**
 * Tutaj można zamieścić dłuższy opis przeznaczenia klasy oraz jej metod.
 * Tekst może byc *pochylony* lub **pogrubiony**.
 *
 * \brief To jest krótki opis klasy.
 */
class SomeClass {

	std::wstring name; //!< To jest opis pola name.
	
	std::uint32_t counter; //!< A to opis pola counter.

public:
	std::uint64_t test_value; //!< Opis pola publicznego.

	std::vector < std::vector<std::pair<std::string, std::uint32_t>>> some_test_vector; ///< Tak też można zapisywać opis pola.



public:
	/**
	 * \brief Opis konstruktora, który przyjmuje nazwę czegoś, daną parametrem \ref name oraz liczbę tego czegoś, określoną przez \ref counter.
	 * \param name Opis parametru name
	 * \param counter A to jest opis parametru counter.
	 */
	SomeClass(const std::wstring name, std::uint32_t counter);
	~SomeClass();

	WxString ToString(void); ///< Krótka metoda, zwracająca tekstową reprezentację obiektu klasy \ref SomeClass za pomocą \ref WxString.
};

SomeClass::SomeClass(const std::wstring name, std::uint32_t counter)
	: name(name), counter(counter) {
	//
}


SomeClass::~SomeClass(void) {

}

WxString SomeClass::ToString(void) {
	return {};
}

int main()
{
	std::wcout << L"Hello World!\n";
}
