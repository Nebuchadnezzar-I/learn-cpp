parser grammar rParser;

options { tokenVocab=rLexer; }

program
    : tag* EOF
    ;

tag
    : tagName (CLASS_NAME | ID_NAME)* LSQRLY content RSQRLY
    | tagName (LPAREN attribute*?  RPAREN)? LSQRLY content RSQRLY
    ;

content
    : tag*? STRING?
    ;

attribute
    : (A_CHARSET | A_REL | A_HREF | A_ID | A_CLASS) EQUAL STRING
    ;

tagName
    : E_BODY
    | E_H1
    | E_DIV
    | E_A
    ;

