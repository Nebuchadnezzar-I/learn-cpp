lexer grammar ExprLexer;

// SPECIFIC
SERVER      : '---'                         ;

// PUG
LPAREN      : '('                           ;
RPAREN      : ')'                           ;
LSQRLY      : '{'                           ;
RSQRLY      : '}'                           ;
EQUAL       : '='                           ;
DOT         : '.'                           ;
HASHTAG     : '#'                           ;

// HTML TAGS
E_BODY      : 'body'                        ;
E_TITLE     : 'title'                       ;
E_DIV       : 'div'                         ;
// H
E_H1 : 'h1' ; E_H2 : 'h2' ; E_H3 : 'h3' ; E_H4 : 'h4' ;
E_H5 : 'h5' ; E_H6 : 'h6' ;

// P
E_P         : 'p'                           ;
E_A         : 'a'                           ;

// HTML ATTRIBUTES
A_CHARSET   : 'charset'                     ;
A_REL       : 'rel'                         ;
A_HREF      : 'href'                        ;
A_CLASS     : 'class'                       ;
A_ID        : 'id'                          ;
ID_NAME     : '#' [a-zA-Z_][a-zA-Z0-9_-]*   ;
CLASS_NAME  : '.' [a-zA-Z_][a-zA-Z0-9_-]*   ;

// Catch
STRING      : '"' ( ~["\\] | '\\' . )* '"'  ;
WS          : [ \t\r\n]+ -> skip            ;
COMMENT     : '//' ~[\r\n]* -> skip         ;
