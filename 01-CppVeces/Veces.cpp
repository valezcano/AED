#include <cassert>
#include <string>
using std::string;
string Veces (char, unsigned);

int main() {
                assert( " " == Veces ('A', 0));
                assert( "A" == Veces ('A', 1));
                assert( "AAA" == Veces ('A', 3));
                assert( "AAAA" == Veces ('A', 4));
                assert( "AA" == Veces ('A', 56));
            
    
}
string Veces (char c, unsigned n){
return n == 0 ? "" 
              : Veces (c, n - 1) + c;            
}
