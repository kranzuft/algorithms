/*
 * =====================================================================================
 *
 *       Filename:  insertion.c
 *
 *    Description:  Insertion
 *
 *        Created:  25/04/2015 22:53:25
 *       Compiler:  gcc
 *
 *         Author:  Aden Prior (),
 *   Organization:  University of Wollongong
 *
 * =====================================================================================
 */

void insertion(Item s[], int size) {
    int i = size - 1;
    while (i > 0) {
        if (s[i - 1] < s.getWins()) {
            int temp = teams[i - 1];
            teams[i - 1] = teams[i];
            teams[i] = temp;
        }

        i--;
    }

    i = 2;
    while (i < size) {
        int j = i;
        int v = a[i];

        while (v < a[j-1]) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = v;

        i++;
    }
}
