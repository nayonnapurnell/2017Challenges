Reverse a String

1. Objective.
2. Steps 1-4.
3. Goal.


Objective:  Our objective is to reverse a string for any given
string input.

Example: Given s = "hello", return "olleh".

**Step 1:  Create a reverseString function.**

function reverseString(str) {

**Step 2 :  Use the split() method to return a new array.**
var splitString = str.split("");

Example:
 // var splitString = "hello".split("");
// ["h", "e", "l", "l", "o"]

**Step 3:  Use the reverse() method to reverse the new created array.**
var reverseArray = splitString.reverse();

Example:
// var reverseArray = ["h", "e", "l", "l", "o"].reverse();
// ["o", "l", "l", "e", "h"]

**Step 4:  Use the join() method to join all elements of the array into a
string.**
var joinArray = reverseArray.join("");

Example:
// var joinArray = ["o", "l", "l", "e", "h"].join("");
// "olleh"

**Goal:  Return the reversed string.**
return joinArray; // "olleh"
}
reverseString("hello");
