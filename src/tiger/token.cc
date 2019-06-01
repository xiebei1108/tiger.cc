#include "token.h"

const Map<Token::Tag, std::string> Token::tag_name_m_ {
    { Token::Tag::ARRAY, "array" },
    { Token::Tag::IF, "if" },
    { Token::Tag::THEN, "then" },
    { Token::Tag::ELSE, "else" },
    { Token::Tag::WHILE, "while" },
    { Token::Tag::FOR, "for" },
    { Token::Tag::TO, "to" },
    { Token::Tag::DO, "do" },
    { Token::Tag::LET, "let" },
    { Token::Tag::IN, "in" },
    { Token::Tag::END, "end" },
    { Token::Tag::OF, "of" },
    { Token::Tag::BREAK, "break" },
    { Token::Tag::NIL, "nil" },
    { Token::Tag::FUNCTION, "function" },
    { Token::Tag::VAR, "var" },
    { Token::Tag::TYPE, "type" },
    { Token::Tag::IMPORT, "import" },
    { Token::Tag::PRIMITIVE, "primitive" },
    { Token::Tag::CLASS, "class" },
    { Token::Tag::EXTENDS, "extends" },
    { Token::Tag::METHOD, "method" },
    { Token::Tag::NEW, "new" },
    { Token::Tag::COMMA, "comma" },
    { Token::Tag::COLON, "colon" },
    { Token::Tag::SEMI, "semicolon" },
    { Token::Tag::LPAREN, "left parenthesis" },
    { Token::Tag::RPAREN, "right parenthesis" },
    { Token::Tag::LSQUB, "left square brace" },
    { Token::Tag::RSQUB, "right square brace" },
    { Token::Tag::LBRACE, "left brace" },
    { Token::Tag::RBRACE, "right brace" },
    { Token::Tag::DOT, "dot" },
    { Token::Tag::PLUS, "plus" },
    { Token::Tag::MINUS, "minus" },
    { Token::Tag::STAR, "star" },
    { Token::Tag::DIV, "div" },
    { Token::Tag::EQ, "equal" },
    { Token::Tag::NOT_EQAL, "not equal" },
    { Token::Tag::LESS, "less" },
    { Token::Tag::GREATER, "greater" },
    { Token::Tag::LEQ, "less or equal" },
    { Token::Tag::GEQ, "greater or equal" },
    { Token::Tag::AND, "and" },
    { Token::Tag::OR, "or" },
    { Token::Tag::ASSIGN, "assign" },
    { Token::Tag::SPACE, "whitespace" },
    { Token::Tag::EOL, "end of line" },
    { Token::Tag::STR, "string" },
    { Token::Tag::COMMENT, "comment" },
    { Token::Tag::ID, "identifier" },
    { Token::Tag::NUM, "number" },
    { Token::Tag::INVALID, "invalid" },
};

//‘array’, ‘if’, ‘then’, ‘else’, ‘while’, ‘
// for’, ‘to’, ‘do’, ‘let’, ‘in’, ‘end’, ‘of’,
// ‘break’, ‘nil’, ‘function’, ‘var’, ‘type’, ‘import’ and ‘primitive’
const Map<std::string, Token::Tag> Token::keywords_m_ = {
     { "array", Token::Tag::ARRAY },
     { "if", Token::Tag::IF },
     { "then", Token::Tag::THEN },
     { "else", Token::Tag::ELSE },
     { "while", Token::Tag::WHILE },
     { "for", Token::Tag::FOR },
     { "to", Token::Tag::TO },
     { "do", Token::Tag::DO },
     { "let", Token::Tag::LET },
     { "in", Token::Tag::IN },
     { "end", Token::Tag::END },
     { "of", Token::Tag::OF },
     { "break", Token::Tag::BREAK },
     { "nil", Token::Tag::NIL },
     { "function", Token::Tag::FUNCTION },
     { "var", Token::Tag::VAR },
     { "type", Token::Tag::TYPE },
     { "import", Token::Tag::IMPORT },
     { "primitive", Token::Tag::PRIMITIVE },
     { "class", Token::Tag::CLASS },
     { "extends", Token::Tag::EXTENDS },
     { "method", Token::Tag::METHOD },
     { "new", Token::Tag::NEW },
};