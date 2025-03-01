/* Generated by re2c 4.0.2 on Sat Mar  1 08:51:02 2025 */
#line 1 "../../lnav/src/log_level_re.re"
/**
 * Copyright (c) 2018, Timothy Stack
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * * Neither the name of Timothy Stack nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"

#include <string.h>

#include "log_level.hh"

log_level_t string2level(const char *levelstr, ssize_t len, bool exact)
{
    log_level_t retval = LEVEL_UNKNOWN;

    if (len == (ssize_t)-1) {
        len = strlen(levelstr);
    }

    if (((len == 1) || ((len > 1) && (levelstr[1] == ' '))) &&
        (retval = abbrev2level(levelstr, 1)) != LEVEL_UNKNOWN) {
        return retval;
    }

#   define YYCTYPE unsigned char
#   define RET(tok) { \
        return tok; \
    }

    const YYCTYPE *YYCURSOR = (const unsigned char *) levelstr;
    const YYCTYPE *YYLIMIT = (const unsigned char *) levelstr + len;
    const YYCTYPE *YYMARKER = YYCURSOR;
    const YYCTYPE *debug_level = nullptr;

#   define YYPEEK()    (YYCURSOR < YYLIMIT ? *YYCURSOR : 0)
#   define YYSKIP()    ++YYCURSOR
#   define YYBACKUP()  YYMARKER = YYCURSOR
#   define YYRESTORE() YYCURSOR = YYMARKER
#   define YYSTAGP(x)  x = YYCURSOR - 1

    
#line 69 "../../lnav/src/log_level_re.cc"
#line 65 "../../lnav/src/log_level_re.re"

    loop:
    
#line 74 "../../lnav/src/log_level_re.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	yych = YYPEEK();
	if (yych <= 'W') {
		if (yych <= 'I') {
			if (yych <= 'D') {
				if (yych <= 0x00) goto yy1;
				if (yych <= 'B') goto yy2;
				if (yych <= 'C') goto yy4;
				goto yy5;
			} else {
				if (yych <= 'E') goto yy6;
				if (yych <= 'F') goto yy7;
				if (yych <= 'H') goto yy2;
				goto yy8;
			}
		} else {
			if (yych <= 'S') {
				if (yych == 'N') goto yy9;
				if (yych <= 'R') goto yy2;
				goto yy10;
			} else {
				if (yych <= 'T') goto yy11;
				if (yych <= 'U') goto yy2;
				if (yych <= 'V') goto yy12;
				goto yy13;
			}
		}
	} else {
		if (yych <= 'm') {
			if (yych <= 'e') {
				if (yych <= 'b') goto yy2;
				if (yych <= 'c') goto yy4;
				if (yych <= 'd') goto yy5;
				goto yy6;
			} else {
				if (yych <= 'f') goto yy7;
				if (yych == 'i') goto yy8;
				goto yy2;
			}
		} else {
			if (yych <= 't') {
				if (yych <= 'n') goto yy9;
				if (yych <= 'r') goto yy2;
				if (yych <= 's') goto yy10;
				goto yy11;
			} else {
				if (yych <= 'u') goto yy2;
				if (yych <= 'v') goto yy12;
				if (yych <= 'w') goto yy13;
				goto yy2;
			}
		}
	}
yy1:
	YYSKIP();
#line 74 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_UNKNOWN); }
#line 134 "../../lnav/src/log_level_re.cc"
yy2:
	YYSKIP();
yy3:
#line 102 "../../lnav/src/log_level_re.re"
	{ goto loop; }
#line 140 "../../lnav/src/log_level_re.cc"
yy4:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'R') goto yy14;
	if (yych == 'r') goto yy14;
	goto yy3;
yy5:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'E') goto yy16;
	if (yych == 'e') goto yy16;
	goto yy3;
yy6:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'R') goto yy17;
	if (yych == 'r') goto yy17;
	goto yy3;
yy7:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'A') goto yy18;
	if (yych == 'a') goto yy18;
	goto yy3;
yy8:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'N') goto yy19;
	if (yych == 'n') goto yy19;
	goto yy3;
yy9:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'O') goto yy20;
	if (yych == 'o') goto yy20;
	goto yy3;
yy10:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych <= 'T') {
		if (yych == 'E') goto yy21;
		if (yych <= 'S') goto yy3;
		goto yy22;
	} else {
		if (yych <= 'e') {
			if (yych <= 'd') goto yy3;
			goto yy21;
		} else {
			if (yych == 't') goto yy22;
			goto yy3;
		}
	}
yy11:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'R') goto yy23;
	if (yych == 'r') goto yy23;
	goto yy3;
yy12:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'E') goto yy24;
	if (yych == 'e') goto yy24;
	goto yy3;
yy13:
	yyaccept = 0;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'A') goto yy25;
	if (yych == 'a') goto yy25;
	goto yy3;
yy14:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'I') goto yy26;
	if (yych == 'i') goto yy26;
yy15:
	YYRESTORE();
	if (yyaccept <= 1) {
		if (yyaccept == 0) goto yy3;
		else goto yy29;
	} else {
		goto yy51;
	}
yy16:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'B') goto yy27;
	if (yych == 'b') goto yy27;
	goto yy15;
yy17:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'R') goto yy28;
	if (yych == 'r') goto yy28;
	goto yy15;
yy18:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'T') goto yy30;
	if (yych == 't') goto yy30;
	goto yy15;
yy19:
	YYSKIP();
	yych = YYPEEK();
	if (yych <= 'V') {
		if (yych == 'F') goto yy31;
		if (yych <= 'U') goto yy15;
		goto yy32;
	} else {
		if (yych <= 'f') {
			if (yych <= 'e') goto yy15;
			goto yy31;
		} else {
			if (yych == 'v') goto yy32;
			goto yy15;
		}
	}
yy20:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'T') goto yy33;
	if (yych == 't') goto yy33;
	goto yy15;
yy21:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'V') goto yy34;
	if (yych == 'v') goto yy34;
	goto yy15;
yy22:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'A') goto yy35;
	if (yych == 'a') goto yy35;
	goto yy15;
yy23:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'A') goto yy36;
	if (yych == 'a') goto yy36;
	goto yy15;
yy24:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'R') goto yy37;
	if (yych == 'r') goto yy37;
	goto yy15;
yy25:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'R') goto yy38;
	if (yych == 'r') goto yy38;
	goto yy15;
yy26:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'T') goto yy39;
	if (yych == 't') goto yy39;
	goto yy15;
yy27:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'U') goto yy40;
	if (yych == 'u') goto yy40;
	goto yy15;
yy28:
	yyaccept = 1;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'O') goto yy41;
	if (yych == 'o') goto yy41;
yy29:
#line 97 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_ERROR); }
#line 336 "../../lnav/src/log_level_re.cc"
yy30:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'A') goto yy42;
	if (yych == 'a') goto yy42;
	goto yy15;
yy31:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'O') goto yy43;
	if (yych == 'o') goto yy43;
	goto yy15;
yy32:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'A') goto yy44;
	if (yych == 'a') goto yy44;
	goto yy15;
yy33:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'I') goto yy45;
	if (yych == 'i') goto yy45;
	goto yy15;
yy34:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'E') goto yy46;
	if (yych == 'e') goto yy46;
	goto yy15;
yy35:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'T') goto yy47;
	if (yych == 't') goto yy47;
	goto yy15;
yy36:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'C') goto yy48;
	if (yych == 'c') goto yy48;
	goto yy15;
yy37:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'B') goto yy49;
	if (yych == 'b') goto yy49;
	goto yy15;
yy38:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'N') goto yy50;
	if (yych == 'n') goto yy50;
	goto yy15;
yy39:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'I') goto yy52;
	if (yych == 'i') goto yy52;
	goto yy15;
yy40:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'G') goto yy53;
	if (yych == 'g') goto yy53;
	goto yy15;
yy41:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'R') goto yy55;
	if (yych == 'r') goto yy55;
	goto yy15;
yy42:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'L') goto yy56;
	if (yych == 'l') goto yy56;
	goto yy15;
yy43:
	YYSKIP();
#line 93 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_INFO); }
#line 419 "../../lnav/src/log_level_re.cc"
yy44:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'L') goto yy57;
	if (yych == 'l') goto yy57;
	goto yy15;
yy45:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'C') goto yy58;
	if (yych == 'c') goto yy58;
	goto yy15;
yy46:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'R') goto yy59;
	if (yych == 'r') goto yy59;
	goto yy15;
yy47:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'S') goto yy60;
	if (yych == 's') goto yy60;
	goto yy15;
yy48:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'E') goto yy61;
	if (yych == 'e') goto yy61;
	goto yy15;
yy49:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'O') goto yy62;
	if (yych == 'o') goto yy62;
	goto yy15;
yy50:
	yyaccept = 2;
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	if (yych == 'I') goto yy63;
	if (yych == 'i') goto yy63;
yy51:
#line 96 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_WARNING); }
#line 466 "../../lnav/src/log_level_re.cc"
yy52:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'C') goto yy64;
	if (yych == 'c') goto yy64;
	goto yy15;
yy53:
	YYSKIP();
	yych = YYPEEK();
	if (yych <= '1') goto yy54;
	if (yych <= '5') goto yy65;
yy54:
	YYSTAGP(debug_level);
#line 76 "../../lnav/src/log_level_re.re"
	{
         if (debug_level == nullptr) {
             RET(LEVEL_DEBUG);
         }
         switch (*debug_level) {
         case '2':
             RET(LEVEL_DEBUG2);
         case '3':
             RET(LEVEL_DEBUG3);
         case '4':
             RET(LEVEL_DEBUG4);
         case '5':
             RET(LEVEL_DEBUG5);
         default:
             RET(LEVEL_DEBUG);
         }
     }
#line 498 "../../lnav/src/log_level_re.cc"
yy55:
	YYSKIP();
	goto yy29;
yy56:
	YYSKIP();
#line 100 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_FATAL); }
#line 506 "../../lnav/src/log_level_re.cc"
yy57:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'I') goto yy66;
	if (yych == 'i') goto yy66;
	goto yy15;
yy58:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'E') goto yy67;
	if (yych == 'e') goto yy67;
	goto yy15;
yy59:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'E') goto yy68;
	if (yych == 'e') goto yy68;
	goto yy15;
yy60:
	YYSKIP();
#line 95 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_STATS); }
#line 529 "../../lnav/src/log_level_re.cc"
yy61:
	YYSKIP();
#line 75 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_TRACE); }
#line 534 "../../lnav/src/log_level_re.cc"
yy62:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'S') goto yy48;
	if (yych == 's') goto yy48;
	goto yy15;
yy63:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'N') goto yy69;
	if (yych == 'n') goto yy69;
	goto yy15;
yy64:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'A') goto yy70;
	if (yych == 'a') goto yy70;
	goto yy15;
yy65:
	YYSKIP();
	goto yy54;
yy66:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'D') goto yy71;
	if (yych == 'd') goto yy71;
	goto yy15;
yy67:
	YYSKIP();
#line 94 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_NOTICE); }
#line 566 "../../lnav/src/log_level_re.cc"
yy68:
	YYSKIP();
#line 99 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_CRITICAL); }
#line 571 "../../lnav/src/log_level_re.cc"
yy69:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'G') goto yy72;
	if (yych == 'g') goto yy72;
	goto yy15;
yy70:
	YYSKIP();
	yych = YYPEEK();
	if (yych == 'L') goto yy73;
	if (yych == 'l') goto yy73;
	goto yy15;
yy71:
	YYSKIP();
#line 101 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_INVALID); }
#line 588 "../../lnav/src/log_level_re.cc"
yy72:
	YYSKIP();
	goto yy51;
yy73:
	YYSKIP();
#line 98 "../../lnav/src/log_level_re.re"
	{ RET(LEVEL_CRITICAL); }
#line 596 "../../lnav/src/log_level_re.cc"
}
#line 104 "../../lnav/src/log_level_re.re"

}
