//
// Created by varun on 7/01/2018.
//

#ifndef AETHER_TOKEN_H
#define AETHER_TOKEN_H

#include <string>
// Boost variant, to be linked later
#include "../../../../libs/boost/boost/variant.hpp"

namespace Aether {
    namespace Lexer {
        // Various tokens

        // Different types of tokens
        enum TokenTypes {
            TOKEN_TYPE_NULL,

            TOKEN_TYPE_INDENTIFIER,     // User identifier
            TOKEN_TYPE_KEYWORD,         // Keywords such as func, if e.t.c.
            TOKEN_TYPE_SIGN,            // Signs such as %, /, *
            TOKEN_TYPE_PRIMTYPE         // Primitive types such as int8, object, string
        };



        // Type tokens
        enum PrimTypes {
            // EVERYTHING TYPE, everything that isn't primitive derives from the OBJECT TYPE
            TYPE_OBJECT,

            // TEXT TYPES
            TYPE_CHAR,
            TYPE_STRING,

            // INT TYPES
            TYPE_INT,
            TYPE_INT4,
            TYPE_INT8,
            TYPE_INT16,
            TYPE_INT32,
            TYPE_INT64,

            // FLOAT TYPES
            TYPE_FLOAT,
            TYPE_FLOAT4,
            TYPE_FLOAT8,
            TYPE_FLOAT16,
            TYPE_FLOAT32,
            TYPE_FLOAT64,

            // BOOLEAN TYPES
            TYPE_BOOL,
            TYPE_QBOOL,

            // MEMORY TYPES
            TYPE_BYTE
        };


        // Sign tokens
        enum Signs {
            SIGN_DEFAULT,

            // Signs
            SIGN_EQUAL,			    // =
            SIGN_PLUS,				// +
            SIGN_MINUS,			    // -
            SIGN_ASTERISK,			// *
            SIGN_SLASH,			    // /
            SIGN_VBAR,				// |
            SIGN_AND,				// &
            SIGN_LESS_THAN,		    // <
            SIGN_GREATER_THAN,		// >
            SIGN_HASH,				// #
            SIGN_TILDE,			    // ~
            SIGN_EXP,				// ^
            SIGN_PERCENT,			// %

            // Brackets
            SIGN_CURLY_OPEN,        // {
            SIGN_CURLY_CLOSE,       // }
            SIGN_SQUARE_OPEN,       // [
            SIGN_SQUARE_CLOSE,      // ]
            SIGN_PARENTHESIS_OPEN,  // (
            SIGN_PARENTHESIS_CLOSE, // )

            // Punctuations
            SIGN_COLON,             // :
            SIGN_QUOTATION,         // ?
            SIGN_EXCLAMATION,       // !
            SIGN_COMMA,             // ,
            SIGN_DOT,               // .
            SIGN_SEMICOLON,         // ;
        };


        enum Keywords {
            // Declarations
            KEYWORD_FUNC,           // func
            KEYWORD_LET,            // let

            // Class & Namespaces
            KEYWORD_CLASS,          // class
            KEYWORD_NAMESPACE,      // namespace

            // Control structures
            KEYWORD_IF,             // if
            KEYWORD_ELSE,           // else
            KEYWORD_ELIF,           // elif

            // Loops
            KEYWORD_FOR,            // for
            KEYWORD_FOREACH,        // foreach
            KEYWORD_WHILE,          // while

            // Return
            KEYWORD_RETURN,         // return

            // Package stuff
            KEYWORD_USING,          // using
            KEYWORD_IMPORT,         // import
        };



        // Token struct, lexer should return a vector of tokens, hanyuan is developing the lexer so I am not too sure on what is going to happen
        struct Token {
            std::string value; // string value

            // TODO: Use variant to determine and store the token types, variant is a better version of union
        };


    }
}


#endif //AETHER_TOKEN_H
