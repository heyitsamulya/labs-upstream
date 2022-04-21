/*
 * Lab #4 Deliverables
 *
 * Name: Amulya Agrawal
 * 
 *
 * Sources used: NONE
 * 
 *
 * People consulted: NONE
 * 
 *
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "lab4.h"

/* Task 1
 *
 * bool match_at_index: is target a substring of the test string
 *   starting at index i?
 * test_str: a string
 * target: the target string (will have at least one character)
 * i: index (0 <= i < strlen(test_str))
 *
 * Restrictions: you may not use *any* of the functions from the
 * string library (string.h) in this task, including strlen.
 *
 * Returns: true if target is a substring of the test string starting
 *   at index i, false otherwise.
 */
bool match_at_index(char *test_str, char *target, int i) {
    // The target is not an empty string
    assert(target[0] != '\0');
    test_str = (char*)malloc(sizeof(char) * i);
    i = 0;
    while(test_str[i] != '\0') {
        if (&target[i] == &test_str[i]) {
            return true;
        }
        else {
            return false;
        }
    }
}

/*
 * Task 2
 *
 * count_occurrences - given a test string and a target string, count
 * the number of times the target string occurs in the test string.
 * Instances may overlap.  For example, if target is "aa" and teststr
 * is "aaaabbaa", the result should be four.
 *
 * test_str: a string
 * target: the target string (will have at least one character)
 *
 * Restrictions: You may use strlen in this task, you not use any of the
 * other functions in string.h.
 *
 * Returns: the number of times the target string appears in the
 * test string, including overlaping occurrences.
 */
int count_occurrences(char *test_str, char *target) {
    // The target is not an empty string.
    assert(target[0] != '\0');
    int i = 0;
    int len = strlen(test_str);
    test_str = (char*)malloc(sizeof(char) * len);
    target = (char*)malloc(sizeof(char) * len);
    while(test_str[i] != '\0') {
        i++;
        if (strcmp(&target[i], test_str)) {
            i++;
        }
        return i;
    }

/*
 * Task 3
 *
 * count_non_overlapping - given a test string and a target string,
 * count non-overlapping occurrences of the target in the test string.
 * For example, if target is "aa" and the test string is "aaaabbaa",
 * the result should be three.
 *
 * test_str: a string
 * target: a string
 *
 * Restrictions: You may use strlen in this task, not not any of the
 * other functions in string.h.
 *
 * Returns: the number of times the target appears in the test string,
 *   including only non-overlaping occurrences.
 */
int count_non_overlapping(char *test_str, char *target) {
    // The target is not an empty string.
    assert(target[0] != '\0');
    test_str = (char*)malloc(sizeof(char) * len);
    int i = 0;
    int len = strlen(test_str);
    target = (char*)malloc(sizeof(char) * len);
    while(test_str[i] != '\0') {
        i++;
        if (strcmp(&target[i], test_str)) {
            ((i++)/3);
        }
        return i;
    }
}

/* Task 4
 *
 * compare_pairs: compare two pairs using v0 as the primary key,
 *   v1 as the secondary key.
 *
 * p0: pointer to a pair (not NULL)
 * p1: pointer to a pair (not NULL)
 *
 * Returns: 
 *   - a value less than zero if the pair referenced by p0 comes
 *     before the pair referenced by p1 in the specified order,
 *   - 0 if the pairs are equal, and 
 *   - a value greater than zero if the pair referenced by p0 comes
 *     after the pair referenced by p1.
 */
int compare_pairs(pair_t *p0, pair_t *p1) {
    // Neither p0 nor p1 is NULL
    assert(p0 != NULL);
    assert(p1 != NULL);
    int i = 0;
    p0 = (v0, v1);
    p1 = (w0, w1);
    while (&p0[i] != &p1[i]) {
        if (&p0[(v0, v1) < &p1[(w0, w1)]]) {
            return (v0, v1) < 0;
        }
        else if (&p0[(v0, v1)] == &p1[(w0, w1)]) {
            return 0;
        }
        else if (&p0[(v0, v1)] > &p1[(w0, w1)]) {
            return (v0, v1) > 0;
        }
    }
}


/* Task 5
 *
 * find_match: return the index of the first pair in an array that has
 *   the same value as the specified target pair or -1, if none match.
 *
 * pairs: an array of pointers to pairs
 * N: the length of the array (N > 0)
 * target: pointer to the target pair
 *
 * Returns: the index of the matching pair or -1
 */
int find_match(pair_t *pairs[], int N, pair_t *target) {
    assert(N > 0);
    assert(target != NULL);
    int i = 0;
    target = (pair_t*)malloc(sizeof(pair_t) * i);
    for (size_t i = 0; i < N; i++) {
        if (&pairs[i], target[i]) {
            return 0;
        }
        else {
            return -1;
        }
    }
}
