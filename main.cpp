#include "tstring.h"
#include <iostream>
using namespace std;
auto fun(const char* c)
{
return TString(c);
}




int main ()
{
    TString s1;
    TString s4("inicjalizacja slowem");
//TString s3 = s2;
   // TString s3 (s2);
    // albo TString s3 {s2};
   // TString s3 = "alfa beta";
   //  s3 = s2;
    //s3=std::move(s1);
     TString s5=fun("jakis napis");
     TString s6=s4;
    // s1 = "zebym nie byl pusty";
    // cout << "ta wartosc     "<< s1[3] << endl;

    for(auto n: s1){++n;} endl (cout);
    for(const auto n:s1)cout<<n<<"-"; cout<<endl;
    s1.insert(0,"wstawka");
    s1.insert(s1.size(), 'a');
    s1.erase(0, s1.size()/2);
}