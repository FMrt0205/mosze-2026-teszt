#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //helytelen név
    int *b = new int[NELEMENTS];
//cout végéről egy ; hiányzik
    std::cout << '1-100 ertekek duplazasa'
    //ez egy nagyon fura for loop (hiányzik az iteráció, illetve az összehasonlítás (sztm))
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        // cout végéről egy ; hiányzik
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    //itt egy , van a pontos ; helyett
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // ; végéről hiányzik
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
