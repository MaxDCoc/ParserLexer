%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "parser.tab.h"

    int inSection = 0;
    extern void yyerror();
    FILE* output_file;
    char* direccionURL = NULL;

%}

simb ("+"|"-"|"*"|"<="|">="|"=>"|"=<"|"="|"."|","|"!"|"%"|"&"|"?"|"¿"|"¡"|"-"|"_"|"·"|"$"|"("|")"|";"|"#"|"@")+
res ("."|"_"|"-")+
let ([a-zA-Z]|"ñ"|"á"|"é"|"í"|"ó"|"ú"|"Á"|"É"|"Í"|"Ó"|"Ú")+ 
num [0-9]+
numlet ({num}|{let})+
esp [ \t]+
ent [ \n]+
white ({esp}|{ent})+
texto (({simb}|{esp}|{numlet})*)+
dom ({numlet}|{res})+
%%

"<!DOCTYPE article>"     { output_file = fopen("output.html", "w");fprintf(output_file,"<!DOCTYPE html>\n<html>\n <head>\n  <style> .info{background-color:green;color:white;font-size:8pt} .important{background-color:red;color:white}</style>\n  <title>Mi pagina web</title>\n  </head>\n<body>\n "); return DOCTYPE; }
"<article>"              { fprintf(output_file,"<p>"); return ARTICLE; }
"</article>"             { fprintf(output_file,"</p>\n"); return ENDTAG_ART; }
"<section>"              { fprintf(output_file,"<p>");inSection = 1; return SECTION; }
"</section>"             { fprintf(output_file,"</p>\n");inSection = 0; return ENDTAG_S; }
"<title>" {
 
  if (inSection) {
    fprintf(output_file,"<h2>"); // Si la variable de estado es 1 (dentro de <section>), devuelve el token TITLE2
    return TITLE2;
  } else {
    fprintf(output_file,"<h1>"); // Si la variable de estado es 0 (fuera de <section>), devuelve el token TITLE
    return TITLE;
  }
}

"</title>"  {
  if (inSection) {
    fprintf(output_file,"</h2>\n");
    return ENDTAG_TT2;
  } else {
    fprintf(output_file,"</h1>\n");
    return ENDTAG_TT1;
  }
}
"<simpleSection>"          { fprintf(output_file,"<simpleSection>"); return SIMPLESECTION; }
"</simpleSection>"         { fprintf(output_file,"</simpleSection>\n"); return ENDTAG_SS; }
"<info>"                   { fprintf(output_file,"<div class=\"info\">\n <info>\n"); return INFO; }
"</info>"                  { fprintf(output_file,"</info>\n</div>\n"); return ENDTAG_INFO; }
"<abstract>"               { fprintf(output_file,"<abstract>"); return ABSTRACT; }
"</abstract>"              { fprintf(output_file,"</abstract>\n"); return ENDTAG_ABS; }
"<address>"                { fprintf(output_file,"<address>"); return ADDRESS; }
"</address>"               { fprintf(output_file,"</address>\n"); return ENDTAG_ADD; }
"<author>"                 { fprintf(output_file,"<author>"); return AUTHOR; }
"</author>"                { fprintf(output_file,"</author>\n"); return ENDTAG_AUT; }
"<comment>"                { fprintf(output_file,"<comment>"); return COMMENT; }
"</comment>"               { fprintf(output_file,"</comment>\n"); return ENDTAG_COM; }
"<simpara>"                { fprintf(output_file,"<p>"); return SIMPARA; }
"</simpara>"               { fprintf(output_file,"</p>\n"); return ENDTAG_SP; }
"<emphasis>"               { fprintf(output_file,"<emphasis>"); return EMPHASIS; }
"</emphasis>"              { fprintf(output_file,"</emphasis>\n"); return ENDTAG_EMP; }
"<para>"                   { fprintf(output_file,"<p>"); return PARA; }
"</para>"                  { fprintf(output_file,"</p>\n"); return ENDTAG_P; }
"<important>"              { fprintf(output_file,"<div class=\"important\">\n <important>\n"); return IMPORTANT; }
"</important>"             { fprintf(output_file,"</important>\n</div>\n"); return ENDTAG_IMP; }
"<firstname>"              { fprintf(output_file,"<firstname>"); return FIRSTNAME; }
"</firstname>"             { fprintf(output_file,"</firstname>\n"); return ENDTAG_FN; }
"<surname>"                { fprintf(output_file,"<surname>"); return SURNAME; }
"</surname>"               { fprintf(output_file,"</surname>\n"); return ENDTAG_SN; }
"<street>"                 { fprintf(output_file,"<street>"); return STREET; }
"</street>"                { fprintf(output_file,"</street>\n"); return ENDTAG_ST; }
"<city>"                   { fprintf(output_file,"<city>");return CITY; }
"</city>"                  { fprintf(output_file,"</city>\n"); return ENDTAG_CT; }
"<state>"                  { fprintf(output_file,"<state>");return STATE; }
"</state>"                 { fprintf(output_file,"</state>\n");return ENDTAG_STT; }
"<phone>"                  { fprintf(output_file,"<phone>");return PHONE; }
"</phone>"                 { fprintf(output_file,"</phone>\n"); return ENDTAG_PH; }
"<email>"                  { fprintf(output_file,"<email>");return EMAIL; }
"</email>"                 { fprintf(output_file,"</email>\n");return ENDTAG_EM; }
"<date>"                   { fprintf(output_file,"<date>");return DATE; }
"</date>"                  { fprintf(output_file,"</date>\n");return ENDTAG_DT; }
"<year>"                   { fprintf(output_file,"<year>");return YEAR; }
"</year>"                  { fprintf(output_file,"</year>\n"); return ENDTAG_YR; }
"<holder>"                 { fprintf(output_file,"<holder>");return HOLDER; }
"</holder>"                { fprintf(output_file,"</holder>\n");return ENDTAG_HD; }
"<itemizedlist>"           { fprintf(output_file,"<ul>");return ITEMIZEDLIST; }
"</itemizedlist>"          { fprintf(output_file,"</ul>\n");return ENDTAG_IL; }
"<informaltable>"          { fprintf(output_file,"<table>");return INFORMALTABLE; }
"</informaltable>"         { fprintf(output_file,"</table>\n");return ENDTAG_IT; }
"<listitem>"               { fprintf(output_file,"<li>");return LISTITEM; }
"</listitem>"              { fprintf(output_file,"</li>\n");return ENDTAG_LI; }
"<mediaobject>"            { fprintf(output_file,"<mediaobject>");return MEDIAOBJECT; }
"</mediaobject>"           { fprintf(output_file,"</mediaobject>\n"); return ENDTAG_MOBJ; }
"<copyright>"              { fprintf(output_file,"<copyright>"); return COPYRIGHT; }
"</copyright>"             { fprintf(output_file,"</copyright>\n"); return ENDTAG_CP; }
"<tbody>"                  { fprintf(output_file,"<tbody>"); return TBODY; }
"</tbody>"                 { fprintf(output_file,"</tbody>\n"); return ENDTAG_TB; }
"<thead>"                  { fprintf(output_file,"<thead>"); return THEAD; }
"</thead>"                 { fprintf(output_file,"</thead>\n"); return ENDTAG_TH; }
"<tfoot>"                  { fprintf(output_file,"<tfoot>"); return TFOOT; }
"</tfoot>"                 { fprintf(output_file,"</tfoot>\n"); return ENDTAG_TF; }
"</tgroup>"                { fprintf(output_file,"</tgroup>\n"); return ENDTAG_TG; }
"<tgroup>"                 { fprintf(output_file,"<tgroup>"); return TGROUP; }
"</entry>"                 { fprintf(output_file,"</td>\n"); return ENDTAG_ET; }
"<entry>"                  { fprintf(output_file,"<td>"); return ENTRY; }
"</entrybl>"               { fprintf(output_file,"</td>\n"); return ENDTAG_ETBL; }
"<entrybl>"                { fprintf(output_file,"<td>"); return ENTRYBL; }
"<row>"                    { fprintf(output_file,"<tr>"); return ROW; }
"</row>"                   { fprintf(output_file,"</tr>\n"); return ENDTAG_RW; }
"<link xlink:href=\""        {fprintf(output_file,"<a href="); return LINK;}
"<imagedata fileref="     { fprintf(output_file,"<imagedata fileref="); return VIDEODATA; }
"<videodata fileref="      { fprintf(output_file,"<videodata fileref="); return IMAGEDATA; }
"https://"                 { fprintf(output_file,"https://"); return HTTPS; }
"http://"                 { fprintf(output_file,"http://"); return HTTP; }
"ftps://"                 { fprintf(output_file,"ftps://"); return FTPS; }
"ftp://"                 { fprintf(output_file,"ftp://"); return FTP; }
":"{dom}                     { yylval.texto = strdup(yytext); fprintf(output_file,yylval.texto); return PORT; }
"/"{texto}                      { yylval.texto = strdup(yytext); fprintf(output_file,yylval.texto); return ROUTE; }
"#"{dom}                      { yylval.texto = strdup(yytext); fprintf(output_file,yylval.texto); return FRAG; }
{dom}             { yylval.texto = strdup(yytext); direccionURL = strdup(yytext); fprintf(output_file,yylval.texto); return DOM; }
"\">"              {{ fprintf(output_file,">%s</a>\n",direccionURL); return ENDTAG; }}

{texto}                    { yylval.texto = strdup(yytext); fprintf(output_file,yylval.texto); return TOKEN; }
{white}                    ; /* Ignorar espacios en blanco y saltos de línea */

%%
int yywrap() {
    fprintf(output_file,"</body>\n</html>");
    fclose(output_file);
    return 1;
}
