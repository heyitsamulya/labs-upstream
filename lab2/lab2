/*
 * CS 152, Spring 2022
 * Lab #2 Deliverables
 *
 * Name: Amulya Agrawal  YOU MUST FILL IN THIS INFORMATION
 *
 * Sources used: None
 *   List all sources used to complete this assignment. Include a
 *   URL for internet resources. You do not need to include the lab
 *   write-up, course textbooks, or man pages. If you did not use
 *   any sources, write the word "None".  YOU MUST COMPLETE THIS SECTION.
 *                                                                                                                                          
 * People consulted: None
 *   List anyone you discussed this assignment with, including your
 *   classmates, friends, and Harper Tutors.  You do not need to list
 *   the instructors or the teaching assistants.  If you did not consult
 *   anyone, write the word "None".  YOU MUST COMPLETE THIS SECTION.
 *
 */

 /*******************************************************************
  * IMPORTANT NOTE.  Some tasks in this lab require you to use a
  * restricted subset of C.  You will not get full credit for these
  * question if your code does not meet these restrictions.
  *******************************************************************/


#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "lab2.h"

/*
 * Task 1
 *
 * compute_div_fraction - extract fractional part of the value that
 * results from dividing x by y.
 *
 * x: numerator (assume x > 0)
 * y: denominator (assume y > 0)
 *
 * Returns: value less than or equal to zero 
 */
double compute_div_fraction(int x, int y)
{
    // Ensure that that inputs have positive values
    assert(x > 0);
    assert(y > 0);
    printf("x:{%d}, y:{%d}\n",x,y);
    // Replace 0.0 with an appropriate return value
    // Here, I am using double because the value should not return a whole
    // integer. I divided x by y and then subtract it from x divided by y to
    // return the desired value, as seen in the example.
    return (((double) x)/y - x/y);
}


/* Task 2
 *
 * in_range_1: is x in the range lb..ub
 *
 * Restriction: use only relational (<, <=, >, >=, ==, !=) and logical
 * operators (&&, ||, !) for this task.  You may NOT use conditional
 * statements or conditional expressions for this task.
 *
 * lb, ub: range
 * is_inclusive: true if ends points should included in the range
 * x: value to check
 *
 * Returns: true if x is in the range, false otherwise.
 */
// Here, this function will return true if it is between the lower and upper
// bounds, and it must fit the requirements for in_inclusive. Otherwise, it
// will return false.
bool in_range_1(double lb, double ub, double x, bool is_inclusive) {
    return (x > lb && x < ub) || (is_inclusive && (x == lb || x == ub));
}

/* Task 3
 *
 * in_range_2: is x in the range lb..ub
 *
 * Restriction: use only relational operators (<, <=, >, >=, ==, !=)
 * and conditional statements for this task.  You may NOT use logical
 * operators (that is, &&, ||, or !).
 *
 * lb, ub: range
 * is_inclusive: true if ends points should included in the range
 * x: value to check
 *
 * Returns: true if x is in the range, false otherwise.
 */
// if x is greater than lb, return true
// if x is less than ub, return true
// if x is not inclusive by not equaling the lb, return false
// if x is not inclusive by not equaling the ub, return false
bool in_range_2(double lb, double ub, double x, bool is_inclusive) {
    if {
        (x > lb)
        return true;
    }
    if {
        (x < ub)
        return true;
    }
    else if {
        (is_inclusive (x != lb))
        return false;
    }
    else if {
        (is_inclusive (x != ub))
        return false;
    }
}

/* Task 4
 *
 * clip - clip values outside the interval [lb, ub] (inclusive) to the
 *   interval edges.
 * 
 * You are required to use a conditional expression for this task.
 * 
 * x: value to be clipped
 * lb: lower bound of the interval
 * ub: upper bound of the interval
 *
 * Returns: clipped value
 */
// if x is less than lb, return lb
// if x is greater than ub, return ub
// if these conditions are not true, return false
double clip(double x, double lb, double ub) {
    return (x < lb) ? lb : (x > ub) ? ub : x;
}

/* Task 5
 *
 * extract_flag: use the value of the bit at choice_bit to determine
 * whether decide which flag to return:
 *   0 => value of the bit at choice_bit - 1
 *   1 => value of the bit at choice_bit - 2
 *
 * Restrictions: You may only use bitwise operations (&, |, ~, >>, and
 * <<) for this task.  You may not use logical operators or
 * conditionals.
 *
 * Returns: 0 or 1.
 */
// if the value at a choice_bit is 0, move 1 digit and return that value
// if the value at a choice_bit is 1, move 2 digits and return that value

//  I understand the logic for this question, but I am confused on how to
// write it without using conditionals. This is my best try at it.

// here is another potential solution to solve this task.
unsigned int extract_flag(unsigned int data, int choice_bit) {
    assert(choice_bit >= 2 && choice_bit < 32);
    return ((data >> choice_bit - 1 - ((data >> choice_bit) & 1) & 1))
}
