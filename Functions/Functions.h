#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include <iostream>
#include <random>

#include "../BasicSort/BasicSorter.h"

// Fill an array with random elements
void FillArray (int arr[] , int size);

// Transforms an array into a string to return
std::string ArrayToString (int arr[] , int size);

// Copys one arrays data to another
void CopyArray (int copy[] , int copied[] , int size);

// Runs a sorter and prints info
void RunSorter (BasicSorter <int> * sorter , int size);

#endif