#ifndef OOP3_CPP_MYVECTOR_H
#define OOP3_CPP_MYVECTOR_H
#include <vector>
using namespace std;
template<class T>
class MyVector
{
public:
    vector <T> GenericVector;
    void PushBack (T VectorMember);
    int FindIndex (T VectorMember);
};
#endif //MAIN_CPP_MYVECTOR_H
