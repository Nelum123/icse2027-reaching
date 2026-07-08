// ================================================
// Auto-generated C Parser (Varied Grammar)
// Target MRD = 1   Actual MRD = 1.50
// ================================================
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static const char *input;
static int pos;

static char peek(void) {
    while (input[pos]==' '||input[pos]=='\t') pos++;
    return input[pos];
}

static int match_char(char c) {
    if (peek() == c) { pos++; return 1; }
    return 0;
}

static int match_token(const char *s) {
    int len = (int)strlen(s);
    peek();
    if (strncmp(input + pos, s, len) == 0) {
        pos += len;
        return 1;
    }
    return 0;
}

// Forward declarations
static int parse_D1_0(void);
static int parse_D1_1(void);
static int parse_D1_2(void);
static int parse_D1_3(void);
static int parse_D1_4(void);
static int parse_D1_5(void);
static int parse_D1_6(void);
static int parse_D1_7(void);
static int parse_D1_8(void);
static int parse_D1_9(void);
static int parse_start(void);

// $D1_0
static int parse_D1_0(void) {
    int save = pos;
    pos = save;
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('f')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('a')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('r')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('t')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('o')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('f')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('t')) {
    if (match_char('v')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('s')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('t')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('b')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('o')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('d')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('x')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('g')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('z')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('y')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('d')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('d')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('t')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('d')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('o')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('i')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('a')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('t')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_1
static int parse_D1_1(void) {
    int save = pos;
    pos = save;
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('n')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('a')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('t')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('q')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('t')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('b')) {
    if (match_char('x')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('h')) {
    if (match_char('j')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('y')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('x')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('l')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('j')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('p')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('h')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('a')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('q')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('t')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('a')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('d')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('c')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('i')) {
    if (match_char('n')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('f')) {
    if (match_char('c')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('x')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('l')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('z')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('o')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_2
static int parse_D1_2(void) {
    int save = pos;
    pos = save;
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('u')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('h')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('j')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('r')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('l')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('n')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('a')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('g')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('t')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('g')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('c')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('t')) {
    if (match_char('w')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('c')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('w')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('v')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('l')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('t')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('a')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('i')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('n')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('r')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('v')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('r')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('h')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('n')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('x')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('q')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_3
static int parse_D1_3(void) {
    int save = pos;
    pos = save;
    if (match_char('e')) {
    if (match_char('v')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('t')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('g')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('g')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('s')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('d')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('z')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('h')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('k')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('q')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('g')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('g')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('a')) {
    if (match_char('b')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('l')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('a')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('d')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('f')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('c')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('f')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('t')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('d')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('v')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('g')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('c')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_4
static int parse_D1_4(void) {
    int save = pos;
    pos = save;
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('d')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('v')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('j')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('a')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('n')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('z')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('a')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('l')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('h')) {
    if (match_char('j')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('d')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('w')) {
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('h')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('k')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('r')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('x')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('z')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('w')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('t')) {
    if (match_char('l')) {
    if (match_char('t')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('f')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('w')) {
    if (match_char('w')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('h')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('z')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('t')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('q')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('x')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('d')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('v')) {
    if (match_char('a')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('p')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_5
static int parse_D1_5(void) {
    int save = pos;
    pos = save;
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('h')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('a')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('s')) {
    if (match_char('f')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('z')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('w')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('p')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('b')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('l')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('x')) {
    if (match_char('r')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('t')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('o')) {
    if (match_char('y')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('s')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('a')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('t')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('t')) {
    if (match_char('u')) {
    if (match_char('l')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('x')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('n')) {
    if (match_char('f')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('s')) {
    if (match_char('m')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('f')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('x')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('h')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_6
static int parse_D1_6(void) {
    int save = pos;
    pos = save;
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('t')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('d')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('t')) {
    if (match_char('l')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('w')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('w')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('f')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('p')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('j')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('d')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('g')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('t')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('y')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('n')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('a')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('t')) {
    if (match_char('w')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('s')) {
    if (match_char('d')) {
    if (match_char('x')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('d')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('t')) {
    if (match_char('s')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('h')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('c')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('o')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('j')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('u')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('s')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('t')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('o')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('l')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_7
static int parse_D1_7(void) {
    int save = pos;
    pos = save;
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('a')) {
    if (match_char('w')) {
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('o')) {
    if (match_char('a')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('c')) {
    if (match_char('n')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('j')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('v')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('f')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('z')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('u')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('a')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('x')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('q')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('h')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('x')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('n')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('p')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('f')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('h')) {
    if (match_char('h')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('h')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('f')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('u')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('d')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('n')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('l')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('t')) {
    if (match_char('u')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('l')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('d')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('t')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('n')) {
    if (match_char('j')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('d')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('q')) {
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('e')) {
    if (match_char('u')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('a')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('v')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('t')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('t')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('a')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('l')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('d')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('s')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_8
static int parse_D1_8(void) {
    int save = pos;
    pos = save;
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('q')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('t')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('e')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('d')) {
    if (match_char('x')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('g')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('q')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('g')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('z')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('n')) {
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('d')) {
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('x')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('f')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('l')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('i')) {
    if (match_char('d')) {
    if (match_char('v')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('q')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('z')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('g')) {
    if (match_char('f')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('o')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('o')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('y')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('r')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('y')) {
    if (match_char('v')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('j')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('g')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('h')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('p')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('s')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('i')) {
    if (match_char('y')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('t')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('o')) {
    if (match_char('f')) {
    if (match_char('n')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('o')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('j')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('e')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('k')) {
    if (match_char('x')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('n')) {
    if (match_char('x')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('o')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('d')) {
    if (match_char('h')) {
    if (match_char('x')) {
    if (match_char('w')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('w')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('d')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('m')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('d')) {
    if (match_char('q')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('q')) {
    if (match_char('m')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('f')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('s')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('m')) {
    if (match_char('c')) {
    if (match_char('c')) {
    if (match_char('a')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('q')) {
    if (match_char('b')) {
    if (match_char('k')) {
    if (match_char('c')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('w')) {
    if (match_char('g')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('c')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('r')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('u')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('p')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('k')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('v')) {
    if (match_char('x')) {
    if (match_char('i')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('x')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $D1_9
static int parse_D1_9(void) {
    int save = pos;
    pos = save;
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('b')) {
    if (match_char('g')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('u')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('g')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('n')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('r')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('l')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('m')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('t')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('e')) {
    if (match_char('a')) {
    if (match_char('b')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('a')) {
    if (match_char('n')) {
    if (match_char('j')) {
    if (match_char('k')) {
    if (match_char('u')) {
    if (match_char('l')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('w')) {
    if (match_char('r')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('d')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('o')) {
    if (match_char('g')) {
    if (match_char('n')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('t')) {
    if (match_char('g')) {
    if (match_char('c')) {
    if (match_char('r')) {
    if (match_char('r')) {
    if (match_char('n')) {
    if (match_char('r')) {
    if (match_char('m')) {
    if (match_char('l')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('t')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('q')) {
    if (match_char('l')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('j')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('d')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('s')) {
    if (match_char('k')) {
    if (match_char('d')) {
    if (match_char('b')) {
    if (match_char('e')) {
    if (match_char('n')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('w')) {
    if (match_char('x')) {
    if (match_char('m')) {
    if (match_char('s')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('l')) {
    if (match_char('w')) {
    if (match_char('f')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('y')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('r')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('b')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('s')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('d')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('h')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('s')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('s')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('v')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('q')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('v')) {
    if (match_char('j')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('p')) {
    if (match_char('m')) {
    if (match_char('k')) {
    if (match_char('q')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('d')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('j')) {
    if (match_char('o')) {
    if (match_char('p')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('o')) {
    if (match_char('n')) {
    if (match_char('e')) {
    if (match_char('g')) {
    if (match_char('s')) {
    if (match_char('w')) {
    if (match_char('k')) {
    if (match_char('b')) {
    if (match_char('l')) {
    if (match_char('t')) {
    if (match_char('x')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('b')) {
    if (match_char('r')) {
    if (match_char('l')) {
    if (match_char('i')) {
    if (match_char('t')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('z')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('n')) {
    if (match_char('j')) {
    if (match_char('n')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('r')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('y')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('t')) {
    if (match_char('n')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('j')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('f')) {
    if (match_char('v')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('j')) {
    if (match_char('a')) {
    if (match_char('q')) {
    if (match_char('j')) {
    if (match_char('n')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('k')) {
    if (match_char('l')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('e')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('t')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('m')) {
    if (match_char('f')) {
    if (match_char('j')) {
    if (match_char('s')) {
    if (match_char('t')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('y')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('g')) {
    if (match_char('k')) {
    if (match_char('k')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('l')) {
    if (match_char('m')) {
    if (match_char('j')) {
    if (match_char('n')) {
    if (match_char('p')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('a')) {
    if (match_char('v')) {
    if (match_char('l')) {
    if (match_char('p')) {
    if (match_char('f')) {
    if (match_char('q')) {
    if (match_char('t')) {
    if (match_char('d')) {
    if (match_char('e')) {
    if (match_char('x')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('o')) {
    if (match_char('s')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('x')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('q')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('o')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('r')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('s')) {
    if (match_char('g')) {
    if (match_char('v')) {
    if (match_char('u')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('k')) {
    if (match_char('m')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('d')) {
    if (match_char('y')) {
    if (match_char('s')) {
    if (match_char('h')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('r')) {
    if (match_char('n')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('v')) {
    if (match_char('e')) {
    if (match_char('y')) {
    if (match_char('j')) {
    if (match_char('y')) {
    if (match_char('b')) {
    if (match_char('i')) {
    if (match_char('s')) {
    if (match_char('i')) {
    if (match_char('z')) {
    if (match_char('i')) {
    if (match_char('v')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('q')) {
    if (match_char('i')) {
    if (match_char('n')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('p')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('c')) {
    if (match_char('v')) {
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('x')) {
    if (match_char('d')) {
    if (match_char('a')) {
    if (match_char('p')) {
    if (match_char('t')) {
    if (match_char('k')) {
    if (match_char('k')) {
    if (match_char('p')) {
    if (match_char('j')) {
    if (match_char('l')) {
    if (match_char('j')) {
    if (match_char('j')) {
    if (match_char('d')) {
    if (match_char('t')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('d')) {
    if (match_char('d')) {
    if (match_char('g')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('l')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('s')) {
    if (match_char('j')) {
    if (match_char('v')) {
    if (match_char('n')) {
    if (match_char('s')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('z')) {
    if (match_char('y')) {
    if (match_char('h')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('f')) {
    if (match_char('w')) {
    if (match_char('v')) {
    if (match_char('o')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('v')) {
    if (match_char('s')) {
    if (match_char('y')) {
    if (match_char('d')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('p')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('d')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('i')) {
    if (match_char('u')) {
    if (match_char('i')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('x')) {
    if (match_char('a')) {
    if (match_char('e')) {
    if (match_char('m')) {
    if (match_char('y')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('g')) {
    if (match_char('b')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('w')) {
    if (match_char('l')) {
    if (match_char('o')) {
    if (match_char('b')) {
    if (match_char('n')) {
    if (match_char('c')) {
    if (match_char('b')) {
    if (match_char('p')) {
    if (match_char('o')) {
    if (match_char('j')) {
    if (match_char('e')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('s')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('g')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('h')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('h')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('i')) {
    if (match_char('p')) {
    if (match_char('c')) {
    if (match_char('l')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('c')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('f')) {
    if (match_char('u')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('x')) {
    if (match_char('n')) {
    if (match_char('y')) {
    if (match_char('y')) {
    if (match_char('i')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('b')) {
    if (match_char('z')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('e')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('v')) {
    if (match_char('g')) {
    if (match_char('j')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('e')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('e')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('h')) {
    if (match_char('c')) {
    if (match_char('g')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('y')) {
    if (match_char('a')) {
    if (match_char('o')) {
    if (match_char('u')) {
    if (match_char('k')) {
    if (match_char('r')) {
    if (match_char('i')) {
    if (match_char('q')) {
    if (match_char('c')) {
    if (match_char('h')) {
    if (match_char('r')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('m')) {
    if (match_char('r')) {
    if (match_char('c')) {
    if (match_char('q')) {
    if (match_char('v')) {
    if (match_char('p')) {
    if (match_char('u')) {
    if (match_char('a')) {
    if (match_char('k')) {
    if (match_char('n')) {
    if (match_char('h')) {
    if (match_char('a')) {
    if (match_char('u')) {
    if (match_char('b')) {
    if (match_char('b')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('y')) {
    if (match_char('m')) {
    if (match_char('i')) {
    if (match_char('r')) {
    if (match_char('e')) {
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('u')) {
    if (match_char('i')) {
    if (match_char('e')) {
    if (match_char('b')) {
    if (match_char('m')) {
    if (match_char('a')) {
    if (match_char('y')) {
    if (match_char('x')) {
    if (match_char('b')) {
    if (match_char('h')) {
    if (match_char('v')) {
    if (match_char('h')) {
    if (match_char('u')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('o')) {
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('r')) {
    if (match_char('g')) {
    if (match_char('m')) {
    if (match_char('d')) {
    if (match_char('s')) {
    if (match_char('j')) {
    if (match_char('g')) {
    if (match_char('e')) {
    if (match_char('h')) {
    if (match_char('j')) {
    if (match_char('s')) {
    if (match_char('f')) {
    if (match_char('o')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('k')) {
    if (match_char('z')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('t')) {
    if (match_char('h')) {
    if (match_char('b')) {
    if (match_char('y')) {
    if (match_char('o')) {
    if (match_char('r')) {
    if (match_char('z')) {
    if (match_char('e')) {
    if (match_char('s')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('u')) {
    if (match_char('n')) {
    if (match_char('o')) {
    if (match_char('c')) {
    if (match_char('d')) {
    if (match_char('k')) {
    if (match_char('t')) {
    if (match_char('n')) {
    if (match_char('q')) {
    if (match_char('f')) {
    if (match_char('z')) {
    if (match_char('f')) {
    if (match_char('h')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('v')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('c')) {
    if (match_char('t')) {
    if (match_char('f')) {
    if (match_char('y')) {
    if (match_char('g')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    if (match_char('w')) {
    if (match_char('z')) {
    if (match_char('a')) {
    if (match_char('c')) {
    if (match_char('j')) {
    if (match_char('f')) {
    if (match_char('o')) {
    if (match_char('h')) {
    if (match_char('l')) {
    if (match_char('e')) {
    if (match_char('z')) {
    if (match_char('k')) {
    if (match_char('w')) {
    if (match_char('h')) {
    if (match_char('s')) {
    if (match_char('j')) {
    if (match_char('w')) {
    if (match_char('e')) {
    if (match_char('o')) {
    if (match_char('m')) {
    if (match_char('x')) {
    if (match_char('z')) {
    if (match_char('x')) {
    if (match_char('u')) {
    if (match_char('d')) {
    if (match_char('j')) {
    if (match_char('r')) {
    if (match_char('b')) {
    if (match_char('b')) {
    if (match_char('w')) {
    if (match_char('c')) {
    if (match_char('m')) {
    if (match_char('n')) {
    if (match_char('t')) {
    if (match_char('i')) {
    if (match_char('w')) {
    if (match_char('p')) {
    if (match_char('l')) {
    if (match_char('d')) {
    if (match_char('w')) return 1;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    pos = save;
    return 0;
}

// $start
static int parse_start(void) {
    int save = pos;
    pos = save;
    if (match_char('a')) {
    if (parse_D1_0()) return 1;
    }
    pos = save;
    if (match_char('b')) {
    if (parse_D1_1()) return 1;
    }
    pos = save;
    if (match_char('c')) {
    if (parse_D1_2()) return 1;
    }
    pos = save;
    if (match_char('d')) {
    if (parse_D1_3()) return 1;
    }
    pos = save;
    if (match_char('e')) {
    if (parse_D1_4()) return 1;
    }
    pos = save;
    if (match_char('f')) {
    if (parse_D1_5()) return 1;
    }
    pos = save;
    if (match_char('g')) {
    if (parse_D1_6()) return 1;
    }
    pos = save;
    if (match_char('h')) {
    if (parse_D1_7()) return 1;
    }
    pos = save;
    if (match_char('i')) {
    if (parse_D1_8()) return 1;
    }
    pos = save;
    if (match_char('j')) {
    if (parse_D1_9()) return 1;
    }
    pos = save;
    return 0;
}

#define MAX_INPUT_SIZE (1 << 20)
 
static size_t read_all(FILE *f, unsigned char *buf, size_t max_len) {
    return fread(buf, 1, max_len, f);
}
 
int main(int argc, char **argv) {
    static unsigned char buf[MAX_INPUT_SIZE + 1];
    size_t n = 0;
 
    if (argc >= 2 && argv[1] && strcmp(argv[1], "-") != 0) {
        /* AFL++ @@ mode: argv[1] is the testcase filename */
        FILE *fp = fopen(argv[1], "rb");
        if (!fp) return 0;
        n = read_all(fp, buf, MAX_INPUT_SIZE);
        fclose(fp);
    } else {
        /* stdin mode */
        n = read_all(stdin, buf, MAX_INPUT_SIZE);
    }
 
    if (n == 0) return 0;
    buf[n] = '\0';
 
    input = (const char *)buf;
    pos   = 0;
    (void)parse_start();   /* result intentionally ignored; we hunt crashes */
    return 0;
}
