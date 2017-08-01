<!--
nabijaczleweli.xyz/kaschism (c) by nabijaczleweli@gmail.com (nabijaczleweli),
                                   stanislaw@gorski.be (Stanisław Górski),
                               and krzysztof1400@gmail.com (Krzysztof Żelazny)
​
nabijaczleweli.xyz/kaschism is licensed under a
Creative Commons Attribution 4.0 International License.
​
You should have received a copy of the license along with this
work. If not, see <https://creativecommons.org/licenses/by/4.0/>.
-->


#include "../common.h"
#include "writing.h"


#define RSS_PUB_DATE Mon, 10 Apr 2017 23:24:31 +0200
#define EBOOK_ONLY(...)


BOILERPLATE(Sushi po Polsku, Sushi po Polsku [PL], CUSTOM_BOOK_URL_SETTER_SCRIPT(document.URL.replace(/\.html$/, "")) PAGE_BREAK_STYLE WORD_COUNT_SCRIPT)

<style>
#include "indent.css"
#include "sushi/spacing.css"
</style>


#include "sushi/titlepage.html"
#include "sushi/maki/ingredients.html"
#include "sushi/maki/prep.html"
#include "sushi/nigiri/ingredients.html"
#include "sushi/nigiri/prep.html"
#include "sushi/spices.html"


WORD_COUNTER_END_NON_ENGLISH()
WRITING_END()
BOILERPLATE_END()
