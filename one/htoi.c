#include <stdio.h>
#define MAXLINE 1000 // maximum input line length
#define LOWERHEXDIFF 97
#define UPPERHEXDIFF 65

char intstring[MAXLINE];
int hexstringtoi(char hexstring[]);

int main() {
    char hexvalue[6];
    int n;

    // don't know how to make an array of type char yet...
    hexvalue = [ '0', '0', '0', '0', 'F', '\0' ];
    n = hexstringtoi(hexvalue);

    return 0;
}

int hexstringtoi(char hexstring[]) {
    int i, n;

    n = 0;

    for (i = 0; hexstring[i] != '\0'; ++i) {
        if (hexstring[i] >= '0' && hexstring[i] <= '9') {
            n = 16 * n + (hexstring[i] - 0);
        }
        if (hexstring[i] >= 'a' && hexstring[i] <= 'z') {
            // handle lower case hex
            // these will consist of two chars for double digit strings
            n = 16 * n + (hexstring[i] - LOWERHEXDIFF + 10);
        }
        if (hexstring[i] >= 'A' && hexstring[i] <= 'Z') {
            // handle upper case hex
            n = 16 * n + (hexstring[i] - UPPERHEXDIFF + 10);
        }
        // handle strings that begin with '0x'
        // separate index j so we can continue to loop with i
        // but start over the char array we are writing to from
        // the beginning.
        if (hexstring[i] == 'x' && i == 2) {
            n = 0;
        }
    }

    return n;
}
