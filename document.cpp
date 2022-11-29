#include "document.hpp"
#include <string_view>

Document::Document() : _docname{"default"} {}

Document::Document(std::string_view val) : _docname{val} {}

void Document::set_docname(std::string_view val) { _docname = val; }
