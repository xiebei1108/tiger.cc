#ifndef TIGER_CC_TOKEN_H
#define TIGER_CC_TOKEN_H

#include "common.h"

#include <utility>
#include <string>
#include <unordered_map>

template <typename K, typename V>
using Map = std::unordered_map<K, V>;

class Lexer;
class Parser;

class Token {
public:
    friend class Lexer;
    friend class Parser;

public:
    enum class Tag {
        // keywords
        ARRAY,
        IF,
        THEN,
        ELSE,
        WHILE,
        FOR,
        TO,
        DO,
        LET,
        IN,
        END,
        OF,
        BREAK,
        NIL,
        FUNCTION,
        VAR,
        TYPE,
        IMPORT,
        PRIMITIVE,

        // oop keywords
        CLASS,
        EXTENDS,
        METHOD,
        NEW,

        // symbols
        COMMA,     // ,
        COLON,     // :
        SEMI,      // ;
        LPAREN,    // (
        RPAREN,    // )
        LSQUB,     // [
        RSQUB,      // ]
        LBRACE,     // { 
        RBRACE,     // }
        DOT,        // .
        PLUS,       // +
        MINUS,      // -
        STAR,       // *
        DIV,        // /
        EQ,       // =
        NOT_EQAL,   // <>
        LESS,       // <
        GREATER,    // >
        LEQ,        // <=
        GEQ,        // >=
        AND,        // &
        OR,         // |
        ASSIGN,     // :=

        // white space
        SPACE,

        // end of line
        EOL,

        // strings
        STR,

        // comments
        COMMENT,

        // identifiers
        ID,

        // numbers
        NUM,

        // invalid characters
        INVALID,
    };

public:
    Token(Tag tag, std::string &&var):
        tag_(tag), var_(std::move(var)) {}

    Token(Tag tag, const std::string &var):
        tag_(tag), var_(var) {}

    bool operator==(const Token &rhs) {
        return rhs.tag_ == tag_ && rhs.var_ == var_;
    }

    const std::string Name() const {
        auto node = tag_name_m_.find(tag_);
        assert(node != tag_name_m_.end());
        return node->second;
    }

    const Tag Type() const {
        return tag_;
    }

    const std::string Value() const {
        if (tag_ == Tag::EOL) {
            return "\\r\\n";
        }
        return var_;
    }

    static std::optional<Tag> IsKeyword(const std::string &str) {
        auto it = keywords_m_.find(str);
        if (it == keywords_m_.end()) {
            return std::nullopt;
        } else {
            return it->second;
        }
    }

public:
    Tag tag_;
    std::string var_;

private:
    static const Map<Tag, std::string> tag_name_m_;
    static const Map<std::string, Tag> keywords_m_;
};

class Operator {
public:
    Operator(std::string &&op_, u64 prec):
        op_(std::move(op_)),
        precedence_(prec) {}

private:
    std::string op_;
    u64 precedence_;
};

#endif // TIGER_CC_TOKEN_H