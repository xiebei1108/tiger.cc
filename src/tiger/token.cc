#include "token.h"

const Map<Token::Tag, std::string> Token::tag_name_m_ {
    { Token::Tag::TOKEN_ARRAY, "array" },
    { Token::Tag::TOKEN_IF, "if" },
    { Token::Tag::TOKEN_THEN, "then" },
    { Token::Tag::TOKEN_ELSE, "else" },
    { Token::Tag::TOKEN_WHILE, "while" },
    { Token::Tag::TOKEN_FOR, "for" },
    { Token::Tag::TOKEN_TO, "to" },
    { Token::Tag::TOKEN_DO, "do" },
    { Token::Tag::TOKEN_LET, "let" },
    { Token::Tag::TOKEN_IN, "in" },
    { Token::Tag::TOKEN_END, "end" },
    { Token::Tag::TOKEN_OF, "of" },
    { Token::Tag::TOKEN_BREAK, "break" },
    { Token::Tag::TOKEN_NIL, "nil" },
    { Token::Tag::TOKEN_FUNCTION, "function" },
    { Token::Tag::TOKEN_VAR, "var" },
    { Token::Tag::TOKEN_TYPE, "type" },
    { Token::Tag::TOKEN_IMPORT, "import" },
    { Token::Tag::TOKEN_PRIMITIVE, "primitive" },
    { Token::Tag::TOKEN_CLASS, "class" },
    { Token::Tag::TOKEN_EXTENDS, "extends" },
    { Token::Tag::TOKEN_METHOD, "method" },
    { Token::Tag::TOKEN_NEW, "new" },
    { Token::Tag::TOKEN_COMMA, "comma" },
    { Token::Tag::TOKEN_COLON, "colon" },
    { Token::Tag::TOKEN_SEMI, "semicolon" },
    { Token::Tag::TOKEN_LPAREN, "left parenthesis" },
    { Token::Tag::TOKEN_RPAREN, "right parenthesis" },
    { Token::Tag::TOKEN_LSQB, "left square brace" },
    { Token::Tag::TOKEN_RSQB, "right square brace" },
    { Token::Tag::TOKEN_LBRACE, "left brace" },
    { Token::Tag::TOKEN_RBRACE, "right brace" },
    { Token::Tag::TOKEN_DOT, "dot" },
    { Token::Tag::TOKEN_PLUS, "plus" },
    { Token::Tag::TOKEN_MINUS, "minus" },
    { Token::Tag::TOKEN_STAR, "star" },
    { Token::Tag::TOKEN_DIV, "div" },
    { Token::Tag::TOKEN_EQUA, "equal" },
    { Token::Tag::TOKEN_NOT_EQAL, "not equal" },
    { Token::Tag::TOKEN_LESS, "less" },
    { Token::Tag::TOKEN_GREATER, "greater" },
    { Token::Tag::TOKEN_LEQ, "less or equal" },
    { Token::Tag::TOKEN_GEQ, "greater or equal" },
    { Token::Tag::TOKEN_AND, "and" },
    { Token::Tag::TOKEN_OR, "or" },
    { Token::Tag::TOKEN_ASSIGN, "assign" },
    { Token::Tag::TOKEN_SPACE, "whitespace" },
    { Token::Tag::TOKEN_EOL, "end of line" },
    { Token::Tag::TOKEN_STR, "string" },
    { Token::Tag::TOKEN_COMMENT, "comment" },
    { Token::Tag::TOKEN_ID, "identifier" },
    { Token::Tag::TOKEN_NUM, "number" },
    { Token::Tag::TOKEN_INVALID, "invalid" },
};
