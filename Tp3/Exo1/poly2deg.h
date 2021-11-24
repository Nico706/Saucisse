#include "complexe.h"

class poly2deg
{
private:
    int _a,_b,_c;
    complexe s1,s2;
public:
    poly2deg(int a, int b, int c);
    ~poly2deg();
    void solution();
    void prints();
};



