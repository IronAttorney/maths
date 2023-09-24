//
// Created by PeterBurcello on 24/09/2023.
//


#pragma once


#include <cmath>
#include <type_traits>


namespace maths
{

template<class FLOAT_TYPE> requires std::is_floating_point_v<FLOAT_TYPE>
constexpr FLOAT_TYPE pi = 3.1415926535897932384626433832795;

template<class FLOAT_TYPE> requires std::is_floating_point_v<FLOAT_TYPE>
constexpr FLOAT_TYPE tau = 6.283185307179586476925286766559;


} // namespace maths
