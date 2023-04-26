#include <iostream>
#include <array>

//c versie
void add(int* p, int n){
    *p = *p + n;
    p[5] =10; // totale onzin, maar wel legaal c
}
int main(){
int n = 10;
add(&n, 5);
// n is nu 15 (of je programma is vastgelopen)
std::cout<<n;
}



// // c++ versie
// void add(add& m, int n){
//     m = m+n;
//     m[5] = 10; // compilatiefout
// }
// int n = 10;
// add(n,5);
// //n is nu 15