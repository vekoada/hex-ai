#ifndef HEX_AI_UTIL_IO_HPP
#define HEX_AI_UTIL_IO_HPP

#include <string>
#include <vector>

#include "hex-ai/GameState/HexState.hpp"

namespace Util {

/**
*
*/
[[nodiscard("Return value is an error code - do not discard.")]]
int write_hexstates(
    const std::string &output_name,
    const std::vector<GameState::HexState> &games
);

/**
*
*/
[[nodiscard("Return value is an error code - do not discard.")]]
int read_hexstates(
    const std::string &input_filename,
    std::vector<GameState::HexState> &games
);

}

#endif // !HEX_AI_UTIL_IO_HPP

