#pragma once

#include <vector>
#include <string>

using vector_string = std::vector<std::string>;

vector_string read();
void write(const vector_string& v, const std::string msg);

vector_string frame(const vector_string& v);
vector_string vcat(const vector_string& u, const vector_string& v);
vector_string hcat(const vector_string& u, const vector_string& v);
