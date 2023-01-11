#include <iostream>
using namespace std;

template<typename T>
class Vec3{
    public:
        T x,y,z;
        Vec3(): x(T(0)), y(T(0)), z(T(0)) {}
        Vec3(const T xx): x(xx), y(xx), z(xx) {}
        Vec3(T xx, T yy, T zz): x(xx), y(yy), z(zz) {}
};

template<typename T>
ostream& operator<<(ostream& os, Vec3<T> vec)
    {
        os << vec.x << ' ' << vec.y << ' ' << vec.z << endl;
        return os;
    }

int main(){
    Vec3<int> a(5),b,c(1,2,3);
    cout << a << b << c;
} 