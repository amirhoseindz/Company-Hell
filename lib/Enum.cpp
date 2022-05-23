#include "../include/Enum.h"
ostream& operator << (ostream& out, const GunsTypesList Gun )
{
    if (Gun == GunsTypesList :: Shotgun)
    {
        out << "Shotgun";
    }
    else if (Gun == GunsTypesList :: Revoler)
    {
        out << "Revoler";
    }
    else if (Gun == GunsTypesList :: Pistol)
    {
        out << "Pistol";
    }
    else if (Gun == GunsTypesList :: Rifle)
    {
        out << "Rifle";
    }
    return out;
}
inline GunsTypesList operator++(GunsTypesList &x)
{ return x = (GunsTypesList)(std :: underlying_type<GunsTypesList> :: type(x) + 1); }
GunsTypesList operator*(GunsTypesList c) { return c; }
GunsTypesList begin([[maybe_unused]] GunsTypesList r) { return GunsTypesList :: First; }
GunsTypesList end([[maybe_unused]] GunsTypesList r)
{
    GunsTypesList l = GunsTypesList::Last;
    return ++l;
}