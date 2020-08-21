
#ifndef EX1_TOKENS_H
#define EX1_TOKENS_H

enum TOKEN_TYPE {
    END,
    NUM,
    ADD,
    SUB,
    MULT
};

typedef struct token {
    enum TOKEN_TYPE type;
    char *val;

    unsigned line_pos;
    unsigned char_pos;
} token;

#endif