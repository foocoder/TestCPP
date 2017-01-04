// ---- Program Info Start----
//FileName:     testSwitchString.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2017-01-01 15:48:30
// ---- Program Info End  ----

#include <iostream>
#include <cstring>

using namespace std;

typedef enum KERNAL {
    k_Cubic,
    k_ThinPlateSpline,
    k_Gaussian,
    k_MultiQuadratic,
    k_InverseMultiQuadratic
} rbf_kernal_type;

int test( rbf_kernal_type rbfKernalFunc ){
    switch( rbfKernalFunc ){
        case k_Cubic:
            cout<<"k_Cubic"<<endl;
            break;
        case k_ThinPlateSpline:
            cout<<"k_ThinPlateSpline"<<endl;
            break;
        case k_Gaussian:
            cout<<"k_Gaussian"<<endl;
            break;
        case k_MultiQuadratic:
            cout<<"k_MultiQuadratic"<<endl;
            break;
        case k_InverseMultiQuadratic:
            cout<<"k_InverseMultiQuadratic"<<endl;
            break;
        default:
            cout<<"Err"<<endl;
            break;
    }
}
int main(int argc, char *argv[])
{
    rbf_kernal_type a = k_Cubic;
    test( a );
    return 0;
}
