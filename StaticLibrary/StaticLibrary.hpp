#if !defined(_STATIC_LIBRARY_HPP_)
#define _STATIC_LIBRARY_HPP_

#define SOME_CONSTANT1

/// W taki sposób też można opisywać stałe preprocesora. Możliwa jest jednak tylko jedna linia komentarza.
#define SOME_CONSTANT2

//! Stała \c SOME_CONSTANT włącza jakiś element.
#define SOME_CONSTANT4

/**
 * \brief Stała \c SOME_CONSTANT3 może mieć też dodatkowy, dłuższy opis. Wystarczy kliknąć na "więcej".
 *
 * A tutaj znajduje się dluższy opis stałej \c SOME_CONSTANT3.
 * Ważne jest, aby między \\brief a dłuższym opisem znajdowała się linia przerwy.
 * I kolejna linijka długiego opisu.
 */
#define SOME_CONSTANT3



/**
 * Klasa \ref WxString odpowiada za przechowywanie tekstów.
 * 
 * Lorem ipsum dolor sit amet, consectetur adipiscing elit.
 * In ac lectus id elit suscipit varius.
 * Cras pretium viverra sollicitudin. Donec rhoncus ut mi non molestie.
 * 
 * Duis ut pellentesque ante, sed auctor lorem. Donec elementum lorem dolor, sollicitudin finibus ipsum feugiat at.
 * Etiam quis finibus massa, vitae consectetur odio. Fusce efficitur leo nulla, ac lacinia lorem tincidunt et.
 * Nunc egestas pretium sem, nec feugiat mauris egestas ac. Integer sed purus laoreet, tempus augue ac, varius dolor. 
 * 
 * \brief A to jest już krotki opis klasy \ref WxString.
 */
class WxString {
};

#endif // _STATIC_LIBRARY_HPP_


