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


#define PAGE_BREAK_STYLE <link href="/kaschism/assets/pagebreak.css" rel="stylesheet" />

#define WORD_COUNT_SCRIPT                                                         \
  <script type="text/javascript" src="/capitalism/assets/syllable.js"></script>   \
  <script type="text/javascript" src="/capitalism/assets/pluralize.js"></script>  \
  <script type="text/javascript" src="/capitalism/assets/word_count.js"></script>

#define BOOK_URL_SETTER_SCRIPT <script type="text/javascript" src="/capitalism/assets/book_setter.js"></script>
#define CUSTOM_BOOK_URL_SETTER_SCRIPT(url_code) \
  <script type="text/javascript">               \
    function custom_book_url() {                \
      return (url_code);                        \
    }                                           \
  </script>                                     \
  BOOK_URL_SETTER_SCRIPT


#define _WORD_COUNTER_END(...)                        \
    <span id="wordcount_wrapper" class="hidden">      \
      <hr />                                          \
      <span id="word_count">0</span> words,           \
      __VA_ARGS__                                     \
      <span id="character_count">0</span> characters. \
    </span>
#define WORD_COUNTER_END() _WORD_COUNTER_END(<span id="syllable_count">0</span> syllables,)
#define WORD_COUNTER_END_NON_ENGLISH() _WORD_COUNTER_END()

#define WRITING_CUSTOM_NAME_END(what)        \
    <hr />                                   \
    Get what in ePub format                  \
    <a href="#" id="epub_book_link">here</a> \
    or in MOBI format                        \
    <a href="#" id="mobi_book_link">here</a>.

#define WRITING_END() WRITING_CUSTOM_NAME_END(this)
