#include <string_view>

class Document
{
    public:
        Document();
        Document(std::string_view);
        void set_docname(std::string_view);
        
    private:
        std::string_view _docname;
};
