%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.tab.h"

extern FILE* yyin;
extern int yylex();
void yyerror(const char* message);
int yyparse();
int cont = 0;

%}

%token DOCTYPE DOCTOKEN ARTICLE HTTPS FTPS HTTP FTP PORT DOM ROUTE FRAG ENDTAG_ART ENDTAG_S ENDTAG_TT1 ENDTAG_TT2 ENDTAG_TB ENDTAG_TH ENDTAG_TF ENDTAG_TG ENDTAG_ET ENDTAG_ETBL LINK ENDTAG_IT ENDTAG_SS ENDTAG_INFO ENDTAG_RW ENDTAG_ABS ENDTAG_ADD ENDTAG_AUT ENDTAG_COM ENDTAG_SP ENDTAG_EMP ENDTAG_P ENDTAG_IMP ENDTAG_FN ENDTAG_SN ENDTAG_ST ENDTAG_CT ENDTAG_STT ENDTAG_PH ENDTAG_EM ENDTAG_DT ENDTAG_YR ENDTAG_HD ENDTAG_IL ENDTAG_LI ENDTAG_MOBJ ENDTAG_CP ENDTAG SECTION SIMPLESECTION TITLE TITLE2 LISTITEM INFO TGROUP ENTRY ROW THEAD TFOOT TBODY INFORMALTABLE ITEMIZEDLIST ABSTRACT ADDRESS AUTHOR COMMENT SIMPARA EMPHASIS PARA IMPORTANT ENTRYBL FIRSTNAME SURNAME STREET CITY STATE PHONE EMAIL DATE YEAR HOLDER COPYRIGHT MEDIAOBJECT IMAGEDATA VIDEODATA TOKEN
%type <texto> TOKEN DOM PORT ROUTE FRAG

%union{
    char * texto;
}

%start sigma
%%

sigma: DOCTYPE article
    ;

article: ARTICLE info title opt sect ENDTAG_ART 
    |ARTICLE info title opt Ssect ENDTAG_ART

    |ARTICLE info title opt ENDTAG_ART 

    |ARTICLE info title sect ENDTAG_ART
    |ARTICLE info title Ssect ENDTAG_ART

    |ARTICLE info opt sect ENDTAG_ART
    |ARTICLE info opt Ssect ENDTAG_ART


    |ARTICLE title opt sect ENDTAG_ART
    |ARTICLE title opt Ssect ENDTAG_ART


    |ARTICLE info title ENDTAG_ART

    |ARTICLE info opt ENDTAG_ART

    |ARTICLE title opt ENDTAG_ART

    |ARTICLE info sect ENDTAG_ART
    |ARTICLE info Ssect ENDTAG_ART

    |ARTICLE title sect ENDTAG_ART
    |ARTICLE title Ssect ENDTAG_ART

    |ARTICLE opt sect ENDTAG_ART
    |ARTICLE opt Ssect ENDTAG_ART
    

    |ARTICLE info ENDTAG_ART
    |ARTICLE title ENDTAG_ART
    |ARTICLE opt ENDTAG_ART
    |ARTICLE Ssect ENDTAG_ART
    |ARTICLE sect ENDTAG_ART
    ;

opt: itemizedlist opt
    | important opt
    | para opt
    | simpara opt
    | address opt
    | mediaobject opt
    | informaltable opt
    | comment opt
    | abstract opt
    | link opt
    | important
    | emphasis
    | itemizedlist
    | para
    | simpara
    | address
    | mediaobject
    | informaltable
    | comment
    | abstract
    | link
    ;

Ssect: simplesection Ssect
    | simplesection
    ;

sect: section sect
    | section
    ;

section: SECTION info title2 opt sect ENDTAG_S
    |SECTION info title2 opt Ssect ENDTAG_S


    |SECTION info title2 opt ENDTAG_S 

    |SECTION info title2 sect ENDTAG_S
    |SECTION info title2 Ssect ENDTAG_S

    |SECTION info opt sect ENDTAG_S
    |SECTION info opt Ssect ENDTAG_S


    |SECTION title2 opt sect ENDTAG_S
    |SECTION title2 opt Ssect ENDTAG_S


    |SECTION info title2 ENDTAG_S

    |SECTION info opt ENDTAG_S

    |SECTION title2 opt ENDTAG_S

    |SECTION info sect ENDTAG_S
    |SECTION info Ssect ENDTAG_S

    |SECTION title2 sect ENDTAG_S
    |SECTION title2 Ssect ENDTAG_S

    |SECTION opt sect ENDTAG_S
    |SECTION opt Ssect ENDTAG_S
    

    |SECTION info ENDTAG_S
    |SECTION title2 ENDTAG_S
    |SECTION opt ENDTAG_S
    |SECTION Ssect ENDTAG_S
    |SECTION sect ENDTAG_S
    ;

simplesection:
    |SIMPLESECTION info title opt ENDTAG_SS

    |SIMPLESECTION info title ENDTAG_SS

    |SIMPLESECTION info opt ENDTAG_SS

    |SIMPLESECTION title opt ENDTAG_SS

    |SIMPLESECTION info ENDTAG_SS

    |SIMPLESECTION title ENDTAG_SS

    |SIMPLESECTION opt ENDTAG_SS

    ;

info: INFO in_info ENDTAG_INFO
    ;

in_info: mediaobject in_info
    | abstract in_info
    | address in_info
    | author in_info
    | date in_info
    | copyright in_info
    | title in_info 
    | mediaobject 
    | abstract 
    | address 
    | author 
    | date 
    | copyright 
    | title 
    ;

in_abs: para
    | simpara
    | para in_abs
    | simpara in_abs
    ;

abstract: ABSTRACT title in_abs ENDTAG_ABS
    | ABSTRACT in_abs ENDTAG_ABS
    ;

address: ADDRESS in_ad ENDTAG_ADD
    ;

in_ad: texto in_ad 
    |street in_ad
    | city in_ad
    | state in_ad
    | phone in_ad
    | email in_ad
    | texto
    | street
    | city
    | state
    | phone
    | email
    ;

author: AUTHOR in_aut ENDTAG_AUT
    ;

in_aut: firstname in_aut
    | surname in_aut
    | firstname
    | surname
    ;

in_cr1: year in_cr1
    | year
    ;

in_cr2: holder in_cr2
    | holder
    ;

copyright: COPYRIGHT in_cr1 in_cr2 ENDTAG_CP
    | COPYRIGHT in_cr1 ENDTAG_CP
    ;

texto: TOKEN
    | PORT
    | ROUTE
    | FRAG
    | HTTPS
    | HTTP
    | FTPS
    | FTP
    | DOM
    ;

in_tit: texto in_tit
    | emphasis in_tit
    | email in_tit
    | link in_tit
    | texto 
    | emphasis
    | email
    | link
    ;

title: TITLE in_tit ENDTAG_TT1 
    ;

title2: TITLE2 in_tit ENDTAG_TT2
    ;

in_g1: texto in_g1
    | emphasis in_g1
    | email in_g1
    | author in_g1
    | comment in_g1
    | link in_g1
    | texto
    | emphasis
    | email
    | author
    | comment
    | link
    ;

comment: COMMENT in_g1 ENDTAG_COM
    ;

simpara: SIMPARA in_g1 ENDTAG_SP
    ;

emphasis: EMPHASIS in_g1 ENDTAG_EMP
    ;

link: LINK prot dom port route frag ENDTAG
    | LINK prot dom port route ENDTAG
    | LINK prot dom port frag ENDTAG
    | LINK prot dom route frag ENDTAG
    | LINK prot dom port ENDTAG
    | LINK prot dom route ENDTAG
    | LINK prot dom frag ENDTAG
    | LINK prot dom ENDTAG
    ;

prot: HTTPS
    |HTTP
    |FTP
    |FTPS
    ;

dom: DOM
    ;

port: PORT
    ;

route: ROUTE route
    | ROUTE
    ;

frag: FRAG
    ;

para: PARA in_para ENDTAG_P
    ;

in_para: texto in_para
    | opt in_para
    | opt
    | texto
    ;
    
important: IMPORTANT title opt ENDTAG_IMP
    | IMPORTANT opt ENDTAG_IMP
    ;

in_g2: texto in_g2
    | link in_g2
    | emphasis in_g2
    | comment in_g2
    | emphasis
    | comment
    | texto
    | link
    ;

firstname: FIRSTNAME in_g2 ENDTAG_FN
    ;

surname: SURNAME in_g2 ENDTAG_SN
    ;

street: STREET in_g2 ENDTAG_ST
    ;

city: CITY in_g2 ENDTAG_CT
    ;

state: STATE in_g2 ENDTAG_STT
    ;

phone: PHONE in_g2 ENDTAG_PH
    ;

email: EMAIL in_g2 ENDTAG_EM
    ;

date: DATE in_g2 ENDTAG_DT
    ;

year: YEAR in_g2 ENDTAG_YR
    ;

holder: HOLDER in_g2 ENDTAG_HD
    ;

mediaobject: MEDIAOBJECT info media ENDTAG_MOBJ
    |MEDIAOBJECT media ENDTAG_MOBJ
    ;

media: videoobject media
    | imageobject media
    | imageobject
    | videoobject
    ;

videoobject: info VIDEODATA prot dom port route frag ENDTAG
    | info VIDEODATA prot dom port route ENDTAG
    | info VIDEODATA prot dom port frag ENDTAG
    | info VIDEODATA prot dom route frag ENDTAG
    | info VIDEODATA prot dom port ENDTAG
    | info VIDEODATA prot dom frag ENDTAG
    | info VIDEODATA prot dom route ENDTAG
    | info VIDEODATA prot dom ENDTAG
    | VIDEODATA prot dom port route frag ENDTAG
    | VIDEODATA prot dom port route ENDTAG
    | VIDEODATA prot dom port frag ENDTAG
    | VIDEODATA prot dom route frag ENDTAG
    | VIDEODATA prot dom port ENDTAG
    | VIDEODATA prot dom frag ENDTAG
    | VIDEODATA prot dom route ENDTAG
    | VIDEODATA prot dom ENDTAG
    ;

imageobject: info IMAGEDATA prot dom port route frag ENDTAG
    | info IMAGEDATA prot dom port route ENDTAG
    | info IMAGEDATA prot dom port frag ENDTAG
    | info IMAGEDATA prot dom route frag ENDTAG
    | info IMAGEDATA prot dom port ENDTAG
    | info IMAGEDATA prot dom frag ENDTAG
    | info IMAGEDATA prot dom route ENDTAG
    | info IMAGEDATA prot dom ENDTAG
    | IMAGEDATA prot dom port route frag ENDTAG
    | IMAGEDATA prot dom port route ENDTAG
    | IMAGEDATA prot dom port frag ENDTAG
    | IMAGEDATA prot dom route frag ENDTAG
    | IMAGEDATA prot dom port ENDTAG
    | IMAGEDATA prot dom frag ENDTAG
    | IMAGEDATA prot dom route ENDTAG
    | IMAGEDATA prot dom ENDTAG
    ;

itemizedlist: ITEMIZEDLIST in_il ENDTAG_IL
    ;

in_il: listitem in_il
    | listitem
    ;

listitem: LISTITEM opt ENDTAG_LI
    ;

informaltable: INFORMALTABLE in_it1 ENDTAG_IT
    | INFORMALTABLE in_it2 ENDTAG_IT
    ;

in_it1: mediaobject in_it1
    | mediaobject
    ;

in_it2: tgroup in_it2
    | tgroup
    ;


tgroup: TGROUP thead tfoot tbody ENDTAG_TG
    | TGROUP tfoot tbody ENDTAG_TG
    | TGROUP thead tbody ENDTAG_TG
    | TGROUP tbody ENDTAG_TG
    ;

thead: THEAD add_row ENDTAG_TH
    ;

tbody: TBODY add_row ENDTAG_TB
    ;

tfoot: TFOOT add_row ENDTAG_TF
    ;

add_row: row add_row
    | row
    ;

row: ROW in_row ENDTAG_RW
    ;

in_row: entry in_row
    | entrybl in_row
    | entry
    | entrybl
    ;


entrybl: ENTRYBL thead tbody ENDTAG_ETBL
    | ENTRYBL tbody ENDTAG_ETBL
    ;

entry: ENTRY in_ent ENDTAG_ET
    ;

in_ent: texto in_ent
    |itemizedlist in_ent
    |important in_ent
    |para in_ent
    |simpara in_ent
    |mediaobject in_ent
    |comment in_ent
    |abstract in_ent
    |texto 
    |itemizedlist
    |important
    |para
    |simpara
    |mediaobject
    |comment
    |abstract
    ;
%%


void yyerror(const char* message) {
    printf("%s\n", message);
    cont +=1;
}


int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("ERROR: No fue proporcionado un archivo de entrada");
        return 1;
    }

    FILE* input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("No se pudo abrir el archivo: %s\n", argv[1]);
        return 1;
    }

    yyin = input_file;  // Establece el archivo de entrada para Flex

    yyparse();

    fclose(input_file);

    if (!cont) printf("Felicidades, analisis sintactico/lexico exitoso!\n");
    return 0;
}