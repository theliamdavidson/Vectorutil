//#pragma once
#ifndef VECTORUTILS_H_INCLUDED_
#define VECTORUTILS_H_INCLUDED_

#include <vector>

//------------------------------------------------
//  Returns true if vectors v1 and v2 contain 
//  exactly the same elements, regardless of their
//  order; otherwise, the function returns false. 
bool equivalent(const std::vector<int>& v1, const std::vector<int>& v2);


//------------------------------------------------
//  Removes all but the first occurrence of element
//  del from vector v.  The first occurrence is the element 
//  with the lowest index.
//  The vector is unaffected if del is not an
//  element of v.
//  The function returns the number of elements
//  removed; it returns zero if del has no duplicates in the
//  vector (and, thus, there are no extras to remove).
int remove_extras(std::vector<int>& v, int del);


//------------------------------------------------
//  Returns true if the elements of vector v are arranged
//  in ascending order.
bool is_ascending(const std::vector<int>& v);


//------------------------------------------------
//  Vectors seq1 and seq2 both represent sequences of integers.
//  The call subsequence(seq1, seq2) returns true, if 
//  seq2 is a subsequence of seq1; otherwise, it returns false.
//
//  A subsequence is a sequence of numbers that are part 
//  of a potentially larger sequence of numbers.   Given a sequence
//  of numbers, you can produce a subsequence by removing none, 
//  some, or all of numbers in the original sequence.  The 
//  remaining numbers must appear in same relative order as
//  in the original sequence.
//
//  The concept is best explained by some examples:
//  If seq1 is the sequence
//          23, 4, 19, -4, 0, 3
//  and seq2 is the sequence
//          19, -4, 0
//  seq2 is a subsequence of seq1.
//
//  If seq1 is the sequence
//          23, 4, 19, -4, 0, 3
//  and seq2 is the sequence
//          19, 0
//  seq2 is a subsequence of seq1. 
//
//  If seq1 is the sequence
//          23, 4, 19, -4, 0, 3
//  and seq2 is the sequence
//          19, -4, 0, 3, 5
//  seq2 is not a subsequence of seq1, because seq2 contains 
//  an element that does not appear in seq1.
//  
//  If seq1 is the sequence
//          23, 4, 19, -4, 0, 3
//  and seq2 is the sequence
//          19, 0, -4
//  seq2 is not a subsequence of seq1 even though it contains
//  the same elements as in seq1, since seq2's 
//  elements are not in the same relative order as in seq1
//  (0 comes after -4 in seq1 but before -4 in seq2.)
//
//  If seq1 is the sequence
//          23, 4, 19, -4, 0, 3
//  and seq2 is the sequence
//          23, 4, 19, -4, 0, 3
//  seq2 is a subsequence of seq1; thus, any sequence is a subsequence
//  of itself.
//
//  The empty sequence is a subsequence of every sequence. 
//
//  Neither vector seq1 nor vector seq2 is affected by this 
//  method. 
bool subsequence(const std::vector<int>& seq1, const std::vector<int>& seq2);


//------------------------------------------------
// Rearranges the elements of a vector so that all
// of the even numbers appear before all the odd numbers
// in the vector v.  The function does not add or remove
// any elements; it simply should reposition existing
// elements.  The relative order of the evens at the
// front of the vector should be identical to their
// relative ordering before the function call; similarly,
// the relative order of the odds at the rear of the
// vector should be the same as in the original ordering.
void partition_evens(std::vector<int>& v);


#endif
