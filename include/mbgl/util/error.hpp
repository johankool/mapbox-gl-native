#ifndef MBGL_UTIL_ERROR
#define MBGL_UTIL_ERROR

#include <stdexcept>
#include <string>

namespace mbgl {
namespace error {

struct style_parse : std::exception {
    inline style_parse(size_t offset, const char *msg) : offset(offset), msg(msg) {}
    inline const char* what() const noexcept { return msg.c_str(); }
    const size_t offset;
    const std::string msg;
};
}

}

#endif