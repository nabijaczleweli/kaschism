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


#define PAGE_BREAK_STYLE <link href="/kaschism/assets/pagebreak.css" rel="stylesheet" />

#define WORD_COUNT_SCRIPT                                                      \
  <script type="text/javascript" src="/content/assets/syllable.js"></script>   \
  <script type="text/javascript" src="/content/assets/pluralize.js"></script>  \
  <script type="text/javascript" src="/content/assets/word_count.js"></script>


#define _WORD_COUNTER_END(...)                        \
    <span id="wordcount_wrapper" class="hidden">      \
      <hr />                                          \
      <span id="word_count">0</span> words,           \
      __VA_ARGS__                                     \
      <span id="character_count">0</span> characters. \
    </span>
#define WORD_COUNTER_END() _WORD_COUNTER_END(<span id="syllable_count">0</span> syllables,)
#define WORD_COUNTER_END_NON_ENGLISH() _WORD_COUNTER_END()

#define WRITING_CUSTOM_NAME_STUB_END(what, stub)  \
    <hr />                                        \
    Get what in                                   \
    <a href=STR(/kaschism/stub.epub)>ePub</a>,    \
    <a href=STR(/kaschism/stub.mobi)>MOBI</a>,    \
    <a href=STR(/kaschism/stub.azw3)>AZW3</a>, or \
    <a href=STR(/kaschism/stub.pdf)>PDF</a>.

#define WRITING_CUSTOM_NAME_END(what) WRITING_CUSTOM_NAME_STUB_END(what, FILE_NAME_STUB)
#define WRITING_END() WRITING_CUSTOM_NAME_END(this)
