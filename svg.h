#pragma once
#include <iostream>
#include <vector>
#include <windows.h>

#include <curl/curl.h>
#include <sstream>
#include <string>
using namespace std;

void svg_begin(double width, double height);
void svg_text(double left, double baseline, string text);
void svg_rect(double x, double y, double wid, double heig, string stroke, string fill);
void svg_end();
void show_histogram_svg(const vector<size_t>& bins, size_t bin_count, bool flag, const string& address, vector<string>& colors);
vector <string> input_colors(size_t bin_count, bool flag);

