/* Generated by re2c 0.5 on Mon Mar 17 21:48:27 2003 */
#line 1 "implicit.re"
//
// implicit.re
//
// $Author$
// $Date$
//
// Copyright (C) 2003 why the lucky stiff
//

#include "syck.h"

#define YYCTYPE     char
#define YYCURSOR    cursor
#define YYMARKER    marker
#define YYLIMIT     limit
#define YYFILL(n)

#define TAG_IMPLICIT( tid )     syck_taguri( n, "yaml.org,2002", tid, strlen( tid ) ); return;

void
try_tag_implicit( SyckNode *n )
{
    char *cursor, *limit, *marker;
    if ( n->kind != syck_str_kind )
        return;

    cursor = n->data.str->ptr;
    limit = cursor + n->data.str->len;

{
	YYCTYPE yych;
	unsigned int yyaccept;
	static unsigned char yybm[] = {
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   8,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  8,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0, 196,   0,   0,   0, 
	212, 228, 228, 228, 228, 228, 228, 228, 
	164, 164,   0,   0,   0,   0,   0,   0, 
	  0, 128, 128, 128, 128, 128, 128,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0, 128, 128, 128, 128, 128, 128,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 
	};
	goto yy0;
yy1:	++YYCURSOR;
yy0:
	if((YYLIMIT - YYCURSOR) < 26) YYFILL(26);
	yych = *YYCURSOR;
	if(yych <= 'S'){
		if(yych <= '0'){
			if(yych <= '+'){
				if(yych <= '\000')	goto yy2;
				if(yych <= '*')	goto yy18;
				goto yy15;
			} else {
				if(yych == '-')	goto yy15;
				if(yych <= '/')	goto yy18;
				goto yy16;
			}
		} else {
			if(yych <= 'F'){
				if(yych <= '9')	goto yy17;
				if(yych <= 'E')	goto yy18;
				goto yy14;
			} else {
				if(yych <= 'M')	goto yy18;
				if(yych <= 'N')	goto yy6;
				if(yych <= 'O')	goto yy12;
				goto yy18;
			}
		}
	} else {
		if(yych <= 'n'){
			if(yych <= 'Y'){
				if(yych <= 'T')	goto yy8;
				if(yych <= 'X')	goto yy18;
				goto yy10;
			} else {
				if(yych == 'f')	goto yy13;
				if(yych <= 'm')	goto yy18;
				goto yy5;
			}
		} else {
			if(yych <= 'x'){
				if(yych <= 'o')	goto yy11;
				if(yych == 't')	goto yy7;
				goto yy18;
			} else {
				if(yych <= 'y')	goto yy9;
				if(yych == '~')	goto yy3;
				goto yy18;
			}
		}
	}
yy2:	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy4;
	}
yy3:	yych = *++YYCURSOR;
	if(yych <= '\000')	goto yy141;
yy4:
#line 75
	{   TAG_IMPLICIT( "str" ); }
yy5:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 'o')	goto yy114;
	if(yych == 'u')	goto yy144;
	goto yy4;
yy6:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= 'U'){
		if(yych == 'O')	goto yy114;
		if(yych <= 'T')	goto yy4;
		goto yy137;
	} else {
		if(yych <= 'o'){
			if(yych <= 'n')	goto yy4;
			goto yy114;
		} else {
			if(yych == 'u')	goto yy138;
			goto yy4;
		}
	}
yy7:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 'r')	goto yy135;
	goto yy4;
yy8:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 'R')	goto yy131;
	if(yych == 'r')	goto yy132;
	goto yy4;
yy9:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 'e')	goto yy130;
	goto yy4;
yy10:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 'E')	goto yy128;
	if(yych == 'e')	goto yy129;
	goto yy4;
yy11:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 'f')	goto yy127;
	if(yych == 'n')	goto yy124;
	goto yy4;
yy12:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= 'N'){
		if(yych == 'F')	goto yy122;
		if(yych <= 'M')	goto yy4;
		goto yy124;
	} else {
		if(yych <= 'f'){
			if(yych <= 'e')	goto yy4;
			goto yy123;
		} else {
			if(yych == 'n')	goto yy124;
			goto yy4;
		}
	}
yy13:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 'a')	goto yy119;
	goto yy4;
yy14:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == 'A')	goto yy110;
	if(yych == 'a')	goto yy111;
	goto yy4;
yy15:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= '/')	goto yy4;
	if(yych <= '0')	goto yy109;
	if(yych <= '9')	goto yy20;
	goto yy4;
yy16:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= '/'){
		if(yych <= '\000')	goto yy22;
		if(yych == ',')	goto yy96;
		goto yy4;
	} else {
		if(yych <= '9'){
			if(yych <= '7')	goto yy94;
			goto yy95;
		} else {
			if(yych == 'x')	goto yy98;
			goto yy4;
		}
	}
yy17:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= ','){
		if(yych <= '\000')	goto yy22;
		if(yych <= '+')	goto yy4;
		goto yy20;
	} else {
		if(yych <= '/')	goto yy4;
		if(yych <= '9')	goto yy19;
		goto yy4;
	}
yy18:	yych = *++YYCURSOR;
	goto yy4;
yy19:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy21;
	if(yych <= '9')	goto yy24;
	goto yy21;
yy20:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy21:	if(yybm[0+yych] & 4)	goto yy20;
	if(yych >= '\001')	goto yy2;
yy22:	yych = *++YYCURSOR;
yy23:
#line 65
	{   TAG_IMPLICIT( "int" ); }
yy24:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy21;
	if(yych >= ':')	goto yy21;
yy25:	yych = *++YYCURSOR;
	if(yych != '-')	goto yy21;
yy26:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy27:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy28:	yych = *++YYCURSOR;
	if(yych != '-')	goto yy2;
yy29:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy30:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy31:	yych = *++YYCURSOR;
	if(yych <= 'S'){
		if(yych <= '\000')	goto yy32;
		if(yych <= '/')	goto yy37;
		if(yych <= '9')	goto yy2;
		goto yy37;
	} else {
		if(yych <= 'T')	goto yy34;
		if(yych == 't')	goto yy35;
		goto yy37;
	}
yy32:	yych = *++YYCURSOR;
yy33:
#line 67
	{   TAG_IMPLICIT( "timestamp#ymd" ); }
yy34:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych <= '9')	goto yy80;
	goto yy2;
yy35:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych <= '9')	goto yy60;
	goto yy2;
yy36:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy37:	if(yybm[0+yych] & 8)	goto yy36;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy38:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy39:	yych = *++YYCURSOR;
	if(yych != ':')	goto yy2;
yy40:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy41:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy42:	yych = *++YYCURSOR;
	if(yych != ':')	goto yy2;
yy43:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy44:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy45:	yych = *++YYCURSOR;
	if(yych <= '\037'){
		if(yych == '\t')	goto yy48;
		goto yy2;
	} else {
		if(yych <= ' ')	goto yy48;
		if(yych != '.')	goto yy2;
	}
yy46:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy47:	if(yybm[0+yych] & 16)	goto yy46;
	if(yych <= '0')	goto yy2;
	if(yych <= '9')	goto yy58;
	goto yy2;
yy48:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy49:	if(yych <= '*'){
		if(yych <= '\t'){
			if(yych <= '\b')	goto yy2;
			goto yy48;
		} else {
			if(yych == ' ')	goto yy48;
			goto yy2;
		}
	} else {
		if(yych <= '-'){
			if(yych == ',')	goto yy2;
			goto yy51;
		} else {
			if(yych != 'Z')	goto yy2;
		}
	}
yy50:	yych = *++YYCURSOR;
	if(yych <= '\000')	goto yy55;
	goto yy2;
yy51:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy52:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy53:	yych = *++YYCURSOR;
	if(yych <= '\000')	goto yy55;
	if(yych != ':')	goto yy2;
yy54:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych <= '9')	goto yy57;
	goto yy2;
yy55:	yych = *++YYCURSOR;
yy56:
#line 71
	{   TAG_IMPLICIT( "timestamp#spaced" ); }
yy57:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych <= '9')	goto yy50;
	goto yy2;
yy58:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy59:	if(yybm[0+yych] & 16)	goto yy46;
	if(yych <= '\037'){
		if(yych == '\t')	goto yy48;
		goto yy2;
	} else {
		if(yych <= ' ')	goto yy48;
		if(yych <= '0')	goto yy2;
		if(yych <= '9')	goto yy58;
		goto yy2;
	}
yy60:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy61:	yych = *++YYCURSOR;
	if(yych != ':')	goto yy2;
yy62:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy63:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy64:	yych = *++YYCURSOR;
	if(yych != ':')	goto yy2;
yy65:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy66:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy67:	yych = *++YYCURSOR;
	if(yych <= '-'){
		if(yych == '+')	goto yy71;
		if(yych <= ',')	goto yy2;
		goto yy71;
	} else {
		if(yych <= '.')	goto yy68;
		if(yych == 'Z')	goto yy70;
		goto yy2;
	}
yy68:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy69:	if(yych <= '/')	goto yy2;
	if(yych <= '0')	goto yy68;
	if(yych <= '9')	goto yy78;
	goto yy2;
yy70:	yych = *++YYCURSOR;
	if(yych <= '\000')	goto yy75;
	goto yy2;
yy71:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy72:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy73:	yych = *++YYCURSOR;
	if(yych <= '\000')	goto yy75;
	if(yych != ':')	goto yy2;
yy74:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych <= '9')	goto yy77;
	goto yy2;
yy75:	yych = *++YYCURSOR;
yy76:
#line 69
	{   TAG_IMPLICIT( "timestamp#iso8601" ); }
yy77:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych <= '9')	goto yy70;
	goto yy2;
yy78:	++YYCURSOR;
	if((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *YYCURSOR;
yy79:	if(yych <= '/'){
		if(yych <= '+'){
			if(yych <= '*')	goto yy2;
			goto yy71;
		} else {
			if(yych == '-')	goto yy71;
			goto yy2;
		}
	} else {
		if(yych <= '9'){
			if(yych <= '0')	goto yy68;
			goto yy78;
		} else {
			if(yych == 'Z')	goto yy70;
			goto yy2;
		}
	}
yy80:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy81:	yych = *++YYCURSOR;
	if(yych != ':')	goto yy2;
yy82:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy83:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy84:	yych = *++YYCURSOR;
	if(yych != ':')	goto yy2;
yy85:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy86:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy87:	yych = *++YYCURSOR;
	if(yych <= '-'){
		if(yych == '+')	goto yy71;
		if(yych <= ',')	goto yy2;
		goto yy71;
	} else {
		if(yych <= '.')	goto yy88;
		if(yych == 'Z')	goto yy90;
		goto yy2;
	}
yy88:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy89:	if(yych <= '/')	goto yy2;
	if(yych <= '0')	goto yy88;
	if(yych <= '9')	goto yy92;
	goto yy2;
yy90:	yych = *++YYCURSOR;
	if(yych >= '\001')	goto yy2;
yy91:	yych = *++YYCURSOR;
	goto yy76;
yy92:	++YYCURSOR;
	if((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *YYCURSOR;
yy93:	if(yych <= '/'){
		if(yych <= '+'){
			if(yych <= '*')	goto yy2;
			goto yy71;
		} else {
			if(yych == '-')	goto yy71;
			goto yy2;
		}
	} else {
		if(yych <= '9'){
			if(yych <= '0')	goto yy88;
			goto yy92;
		} else {
			if(yych == 'Z')	goto yy90;
			goto yy2;
		}
	}
yy94:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy97;
	if(yych <= '7')	goto yy107;
	if(yych <= '9')	goto yy105;
	goto yy97;
yy95:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych <= '9')	goto yy105;
	goto yy2;
yy96:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy97:	if(yybm[0+yych] & 64)	goto yy96;
	if(yych <= '\000')	goto yy103;
	goto yy2;
yy98:	yych = *++YYCURSOR;
	if(yych <= '\000')	goto yy2;
	goto yy100;
yy99:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy100:	if(yybm[0+yych] & 128)	goto yy99;
	if(yych >= '\001')	goto yy2;
yy101:	yych = *++YYCURSOR;
yy102:
#line 61
	{   TAG_IMPLICIT( "int#hex" ); }
yy103:	yych = *++YYCURSOR;
yy104:
#line 63
	{   TAG_IMPLICIT( "int#oct" ); }
yy105:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy2;
	if(yych >= ':')	goto yy2;
yy106:	yych = *++YYCURSOR;
	if(yych == '-')	goto yy26;
	goto yy2;
yy107:	yych = *++YYCURSOR;
	if(yych <= '/')	goto yy97;
	if(yych <= '7')	goto yy108;
	if(yych <= '9')	goto yy106;
	goto yy97;
yy108:	yych = *++YYCURSOR;
	if(yych == '-')	goto yy26;
	goto yy97;
yy109:	yych = *++YYCURSOR;
	if(yych <= '\000')	goto yy22;
	if(yych == 'x')	goto yy98;
	goto yy97;
yy110:	yych = *++YYCURSOR;
	if(yych == 'L')	goto yy117;
	goto yy2;
yy111:	yych = *++YYCURSOR;
	if(yych != 'l')	goto yy2;
yy112:	yych = *++YYCURSOR;
	if(yych != 's')	goto yy2;
yy113:	yych = *++YYCURSOR;
	if(yych != 'e')	goto yy2;
yy114:	yych = *++YYCURSOR;
	if(yych >= '\001')	goto yy2;
yy115:	yych = *++YYCURSOR;
yy116:
#line 59
	{   TAG_IMPLICIT( "bool#no" ); }
yy117:	yych = *++YYCURSOR;
	if(yych != 'S')	goto yy2;
yy118:	yych = *++YYCURSOR;
	if(yych == 'E')	goto yy114;
	goto yy2;
yy119:	yych = *++YYCURSOR;
	if(yych != 'l')	goto yy2;
yy120:	yych = *++YYCURSOR;
	if(yych != 's')	goto yy2;
yy121:	yych = *++YYCURSOR;
	if(yych == 'e')	goto yy114;
	goto yy2;
yy122:	yych = *++YYCURSOR;
	if(yych == 'F')	goto yy114;
	goto yy2;
yy123:	yych = *++YYCURSOR;
	if(yych == 'f')	goto yy114;
	goto yy2;
yy124:	yych = *++YYCURSOR;
	if(yych >= '\001')	goto yy2;
yy125:	yych = *++YYCURSOR;
yy126:
#line 57
	{   TAG_IMPLICIT( "bool#yes" ); }
yy127:	yych = *++YYCURSOR;
	if(yych == 'f')	goto yy114;
	goto yy2;
yy128:	yych = *++YYCURSOR;
	if(yych == 'S')	goto yy124;
	goto yy2;
yy129:	yych = *++YYCURSOR;
	if(yych == 's')	goto yy124;
	goto yy2;
yy130:	yych = *++YYCURSOR;
	if(yych == 's')	goto yy124;
	goto yy2;
yy131:	yych = *++YYCURSOR;
	if(yych == 'U')	goto yy134;
	goto yy2;
yy132:	yych = *++YYCURSOR;
	if(yych != 'u')	goto yy2;
yy133:	yych = *++YYCURSOR;
	if(yych == 'e')	goto yy124;
	goto yy2;
yy134:	yych = *++YYCURSOR;
	if(yych == 'E')	goto yy124;
	goto yy2;
yy135:	yych = *++YYCURSOR;
	if(yych != 'u')	goto yy2;
yy136:	yych = *++YYCURSOR;
	if(yych == 'e')	goto yy124;
	goto yy2;
yy137:	yych = *++YYCURSOR;
	if(yych == 'L')	goto yy143;
	goto yy2;
yy138:	yych = *++YYCURSOR;
	if(yych != 'l')	goto yy2;
yy139:	yych = *++YYCURSOR;
	if(yych != 'l')	goto yy2;
yy140:	yych = *++YYCURSOR;
	if(yych >= '\001')	goto yy2;
yy141:	yych = *++YYCURSOR;
yy142:
#line 55
	{   TAG_IMPLICIT( "null" ); }
yy143:	yych = *++YYCURSOR;
	if(yych == 'L')	goto yy140;
	goto yy2;
yy144:	yych = *++YYCURSOR;
	if(yych != 'l')	goto yy2;
yy145:	yych = *++YYCURSOR;
	if(yych == 'l')	goto yy140;
	goto yy2;
}
#line 77


}

