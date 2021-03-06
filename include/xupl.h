#ifndef XUPL_HEADER_GUARD
#define XUPL_HEADER_GUARD

/*
Copyright 2013 Nice Robot Corporation

This file is part of Xupl.

Xupl is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Xupl is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Xupl.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <libxml2/libxml/parser.h>

typedef struct xupl {} xupl;
typedef xupl* (*xupf)(xupl*);
typedef void (*xupd)(xmlDocPtr);

void Xupl(int, char *[], xupd, xupf, ...);

#define XUPL(...) Xupl(argc,argv, __VA_ARGS__, 0)
#define XUP() XUPL(0,0)

#endif
