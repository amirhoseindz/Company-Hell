#include "../include/MyVector.h"
template<class T>
void MyVector<T> :: PushBack ( T VectorMember)
{
    GenericVector.push_back(VectorMember);
}
template<class T>
int MyVector<T> :: FindIndex ( T VectorMember)
{
    for (int i = 0; i < GenericVector.size(); i++)
    {
        if ( GenericVector[i] != VectorMember)
        {
            continue;
        }
        return i;
    }
}
