#include "tstring.h"
#ifndef TSTRING_H
#define TSTRING_H
#include <cstring>
class TString {
 public:
 char*begin(){return ptr;}
 char* end(){return ptr+len;}
 size_t lenght()const {return len;}
 void clear(){delete[]ptr;ptr=nullptr;len=0;}
 bool empty()const{return len ? false: true;}
 char&front(){return*ptr;}
 const char&front()const{return*ptr;}
 char&back(){return*(ptr+len-1);}
 const char&backconst() {return*(ptr+len-1);}

 size_t size()const{return len;}
 char* insert(size_t pos, const char* c){
if (pos >=0 && pos <= len) {
size_t oldlen = len;
len = len+strlen(c);
char* tmp = new char[ len+1 ];
strcpy( tmp, ptr );
for (size_t i=pos; i<pos+strlen(c); ++i) {
tmp[i] = c[i-pos];
}
for (size_t i=pos; i<oldlen; ++i) {
tmp[i+strlen(c)] = ptr[i];
}
delete [] ptr;
ptr = tmp;
return ptr+pos;
} else {
throw out_of_range("zly argument");
}
return ptr;
 
 }
 char* insert(size_t pos, char c);
 char* erase(size_t bpos=0, size_t len=0);

 TString(const char* s = nullptr);
TString(const TString& s);
TString& operator= (const TString& s);
~TString();
TString& operator= (TString &&s);

char& operator[]( size_t n );
const char& operator[]( size_t n ) const;
friend std::ostream& MojeOperatory::operator<<( std::ostream& strumien, const TString& s );
 //interfejs
 private:
    char* ptr = nullptr;
    std::size_t len = 0;
    //implementacja
    //składowe
 protected:
};
#endif 