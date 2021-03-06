/*******************************************************************************
    File: rabinkarp.hpp
    Purpose: Defines the Rabin-Karp algorithm.

    This file is property of Hashir Ahmad and Daud Akhtar Naveed from SEECS,
    NUST batch of 2k16, section 6C.
*******************************************************************************/

#ifndef RABINKARP_HPP
#define RABINKARP_HPP

#include <vector>
#include <string>

// Multiple pattern overload
std::vector<int> rabinkarp(const std::string &text,
	const std::vector<std::string> &pattern);
// Single pattern overload
std::vector<int> rabinkarp(const std::string &text, const std::string &pattern);

#endif // RABINKARP_HPP
