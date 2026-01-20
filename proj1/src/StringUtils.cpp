#include "StringUtils.h"
#include <vector>;
#include <string>

namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{ 
    std::string out; 
    if(start < 0){ start = str.size() + start; } //mistake, forgot to take into account negatice
    for(int i = 0; i < (str.size() - end); i++){
        if(i >= start){
            out = out + str[i];
        } else{ continue; }
    }
    return out;
}

std::string Capitalize(const std::string &str) noexcept{
    std::string out = str;
    out[0] = std::toupper(out[0]);
    for(int i = 1; i < out.size(); i++){
        out[i] = std::tolower(out[i]);
    }
    return out;
}

std::string Upper(const std::string &str) noexcept{
    std::string out = str;
    for(int i = 0; i < str.size(); i++){
        out[i] = std::toupper(out[i]);
    }
    return out;
}

std::string Lower(const std::string &str) noexcept{
    std::string out = str;
    for(int i = 0; i < str.size(); i++){
        out[i] = std::tolower(out[i]);
    }
    return out;
}

std::string LStrip(const std::string &str) noexcept{
    bool flag = false;
    std::string out;
    for(int i = 0; i < str.size(); i++){
        char c = str[i]
        if(flag == false && c == ' '){ continue; } else{ flag = true; out = out + str[i];}
    }
    return out;
}

std::string RStrip(const std::string &str) noexcept{
    std::string out;
    int n = 0;
    for(int i = 0; i < str.size() - n; i++){
        if(str[str.size() - i - 1] == ' '){
            n = n + 1;
        }
        else{ break; }
    } //wrong if else placement
    for(int i = 0; i < str.size() - n; i++){ out = out + str[i]; }
    return out;
}

std::string Strip(const std::string &str) noexcept{
    std::string out;
    int n = 0;
    for(int i = 0; i < str.size() - n; i++){
        if(str[str.size() - i - 1] == ' '){
            n = n + 1;
        }
        else{ break; }
    }
    for(int i = 0; i < str.size() - n; i++){ out = out + str[i]; }
    bool flag = false;
    std::string out1;
    for(int i = 0; i < out.size(); i++){
        char c = out[i]
        if(flag == false && c == ' '){ continue; } else{ flag = true; out1 = out1 + out[i];}
    }
    return out1;
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    if(width <= str.size()){
        return str;
    } else{
        int n = width - str.size();
        std::string out = str;
        bool left = true;
        bool right = false;
        for(int i = 0; i < n; i++){
            if(left){
                out = fill + out;
                right = true;
                left = false;
            } else{
                out = out + fill;
                right = false;
                left = true;
            }
        }
        return out;
    }
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    if(width <= str.size()){
        return str;
    } else{
        int n = width - str.size();
        std::string out = str;
        for(int i = 0; i < n; i++){
            out = fill + out;
        }
        return out;
    }
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    if(width <= str.size()){
        return str;
    } else{
        int n = width - str.size();
        std::string out = str;
        for(int i = 0; i < n; i++){
            out = out + fill;
        }
        return out;
    }
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    if(old.empty()){return str;}
    std::string out;
    std::string counter;
    for(int i = 0; i < str.size(); i++){
        for(int j = 0; j < old.size(); j++){
            if((i+j) >= str.size()){break;}
            counter = counter + str[i+j];
        }
        if(counter == old){
            out = out + rep;
            i = i + rep.size()
        } else{ out = out + str[i];}
        counter = "";
    }
    return out;
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
