#ifndef FILTERS_H
#define FILTERS_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "ppm.h"
#include <atomic>


// SINGLE-THREAD FILTERS

void blackWhite(ppm& img);
void contrast(ppm& img, float contrast);
void brightness(ppm& img, float brillo);
void shades(ppm& img, unsigned char shades);
void merge(ppm& img1, ppm& img2, float alpha);
void frame(ppm& img, pixel color, int x);
void boxBlur(ppm &img);
void crop(ppm& img, int filas, int columnas);
void zoom(ppm &img, ppm &img_zoomed, int n);
void edgeDetection(ppm &img, ppm &img_target);
void plain(ppm &img, unsigned char c);

// MULTI-THREAD FILTERS

#endif