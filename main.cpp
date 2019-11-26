#include "tstring.h"
#include<iostream>
using namespace std;
int main ()
{
    TString s1;
    TString s2("inicjalizacja slowem");
   TString s3 = s2;
   // TString s3 (s2);
    // albo TString s3 {s2};
   // TString s3 = "alfa beta";
     s3 = s2;

}