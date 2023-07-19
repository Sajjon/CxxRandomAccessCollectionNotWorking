#pragma once
#include <iostream>
#include <vector>

int anInt(); // Callable from Swift
std::vector<int> anIntVector(); // Callable from Swift
std::vector<std::string> aStringVector(); // ❌ NOT callable from Swift
