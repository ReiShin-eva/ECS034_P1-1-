#include "StringUtils.h"
#include <vector>;
#include <string>

namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{ 
    std::string out; 
    if(start < 0){ start = str.size() - start; } //mistake, forgot to take into account negatice
    for(int i = 0; i < (str.size() - end); i++){
        if(i >= start){
            out = out + str[i];
        } else{ continue; }
    }
    return out;
}

std::string Capitalize(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Upper(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Lower(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string LStrip(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string RStrip(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Strip(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    // Replace code here
    return "";
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};
