#define __LICENSE                                                                 \
// nabijaczleweli.xyz/kaschism (c) by nabijaczleweli@gmail.com (nabijaczleweli),  \
//                                    stanislaw@gorski.be (Stanisław Górski),     \
//                                and krzysztof1400@gmail.com (Krzysztof Żelazny) \
​//                                                                                \
// nabijaczleweli.xyz/kaschism is licensed under a                                \
// Creative Commons Attribution 4.0 International License.                        \
​//                                                                                \
// You should have received a copy of the license along with this                 \
// work. If not, see <https://creativecommons.org/licenses/by/4.0/>.
#undef __LICENSE


#pragma once


#include "../util.h"


#define AMAZON(isbn10) <a href=STR(httpsCOLON_SLASH_SLASHamazon.com/dp/isbn10)>Amazon</a>
#define OPENLIBRARY(id) <a href=STR(httpsCOLON_SLASH_SLASHopenlibrary.org/works/id)>OpenLibrary</a>
#define GOOGLE_BOOKS(gid) <a href=STR(httpsCOLON_SLASH_SLASHbooks.google.pl/books?id=gid)>Google Books</a>
