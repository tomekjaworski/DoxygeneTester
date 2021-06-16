
/**
 * \brief Klasa niedokończona
 * \todo Niedokończony opis klasy.
 * \todo I jeszcze coś do zrobienia.
 */
class ClassUnfinished {

public:
    /// <summary>
    /// To jest opis konstruktora ClassUnfinished, zapisany w składni XML
    /// </summary>
    /// <param name="value">Opis parametru value. Powinien być typu WxString, ale nie wyszło</param>
    /// \param fileName A ten parametr opisano za pomocą tagów Doxygene.
    /// \todo A to oznacza, że coś trzeba dodać w konstruktorze klasy ClassUnfinished.
    ClassUnfinished(int value, const char* fileName);

    ClassUnfinished(void) = delete;

    static int test; /// <summary>xxxxx</summary>
    static void test2(int a, int b); /// <summary>opis metody2</summary>
};


/// <summary>To jest klasa opisana całkowicie za pomocą tagów XML, zgodnie ze standardem ECMA-334.</summary>
/// Ostatecznie jednak pełna lista tagów XMLowych, obsługiwanych przez Doxygene, dostępna jest tutaj: https://www.doxygen.nl/manual/xmlcmds.html.
/// A to jest druga linia.
/// I kolejna linia.
/// I linia z **pogrubieniem** oraz *kursywą*.
/// 
class ClassDescribedInXml {
};

int wmain(int a, int b, float c) {

    ClassUnfinished::
}
