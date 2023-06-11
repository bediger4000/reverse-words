# Daily Coding Problem: Problem #1419 [Medium]

## Problem Statement

This problem was asked by Google.

Given a string of words delimited by spaces,
reverse the words in string.
For example, given "hello world here", return "here world hello"

Follow-up:
given a mutable string representation,
can you perform this operation in-place?

## Analysis

This is really two problems in disguise.

The first problem amounts to converting a single string into
an array or list of strings by finding space characters,
reversing the array,
the creating a new string from the reversed array.

The second ("in-place") problem can be solved by 
somewhat more complicated array
manipulation.

A hurdle in both problems is remembering only to reverse
to the middle of the array, lest you reverse the reversed array.

## Interview Analysis

The first problem can almost certainly be done with mainly
library calls in languages with extensive standard libraries
like Python, Java and Go.
The wise often say that interview questions about Java
mostly end up as arguments about how to use the standard
library efficiently,
this interview question ends up in that category.

The second question is better.
The interviewer could see if a candidate was comfortable
with array index manipulation.

I think that reversing the words in-place involves
a main loop over all the characters of the string,
where an unwary programmer could reference off the end of the string,
with a couple of interior loops.
One interior loop to find the space character that separates words,
and the second interior loop to reverse individual words in place.

If this problem was only the first question,
it would rate an "[Easy]",
but the second, follow-up, question definitely pushes it into
 "[Medium]" territory,
