#include "../include/MyVector.h"
template<class T>
void MyVector<T> :: PushBack ( T VectorMember)
{
    GenericVector.push_back(VectorMember);
}
template<class T>
void MyVector<T> :: ChooseMember ( T VectorMember)
{
    GenericVector.at(VectorMember);
}
