//
// Created by PeterBurcello on 24/09/2023.
//


#pragma once


namespace maths
{


constexpr bool is_power_of_two(int v) {
    return v && ((v & (v - 1)) == 0);
}

template<auto V>
constexpr bool is_power_of_two_v = is_power_of_two(V);


} // namespace maths
