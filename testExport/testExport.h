// ---- Program Info Start----
//FileName:     testExport.h
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-09-11 10:42:46
// ---- Program Info End  ----

class nonTemplate{
        static int a;
    public:
        nonTemplate();
        ~nonTemplate();
};
//export int nonTemplate::a = 0;
export template<typename T>
class templateSample{
    public:
        templateSample();
        ~templateSample();
};
