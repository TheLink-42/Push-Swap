<div align="center">

![Push Swap](https://github.com/TheLink-42/42-project-badges/blob/main/badges/push_swapm.png)

# 42 Push_Swap

**Given a set of integers, sort it using a predefined set of instructions using
two stacks in the least amount of instructions possible. The instruction set is 
defined below. This program outputs the set of instructions to follow to sort the
stack.**


![Execution example](https://cdn.discordapp.com/attachments/800692244179845150/1159290120499892304/image.png?ex=65307c0f&is=651e070f&hm=f89fa3d4ff8aef9d9b51e58525adfd06912d69e1d6dc647cb8ff120251ed93c2& "Execution example")

</div>

---

## Instructions

| Code  | Instruction
| ----  | ------------------------------------------------------ |
| `sa`  | Swaps the 2 top elements in stack a                    |
| `sb`  | Swaps the 2 top elements in stack b                    |
| `ss`  | Swaps the 2 top elements in both stacks                |
| `pa`  | Moves the top element of stack b to the top of stack a |
| `pb`  | Moves the top element of stack a to the top of stack b |
| `ra`  | Shifts all elements of stack a from bottom to top      |
| `rb`  | Shifts all elements of stack b from bottom to top      |
| `rr`  | Shifts all elements of both stacks from bottom to top  |
| `rra` | Shifts all elements of stack a from top to bottom      |
| `rrb` | Shifts all elements of stack b from top to bottom      |
| `rrr` | Shifts all elements of both stacks from top to bottom  |

## Algorithm

### STACK OF 3 OR LESS NUMBERS

Any stack of three numbers can be sorted in 2 or less movements. We considere there are 6 different scenarios, 1 solved and 5 unsolved. We identify in which of the 6 scenarios we are and we perform the necessary movements to sort the stack.
For example, we have the stack |2 1 3|. We should perform movement `sa` which will result in the stack |1 2 3|.

### STACK OF MORE THAN 3 NUMBERS

However, it gets more complicated as we work with higher amounts of numbers. Therefore I have implemented the following algorithm to sort any stack with more than 3 numbers.

Goal: move the numbers from the primary stack to the auxiliary stack sorting them backwards in the process and move them back to the primary stack, already sorted.
First, we check if the stack is already sorted, as we would not need perform any movement.
If the stack is unsorted we will perform `pb` twice. Why? In order for this algorithm to work, we need at least two numberes in the auxiliary stack to find if the next number is the smallest, the highest or in between the two of them.

(Writing in progress, coming soon)

### Performance of the Algorithm

My push_swap sorts:

    3 numbers with maximum 3 instructions,
    5 numbers with maximum 9 instructions,
    100 numbers with maximum 654 instructions => 5 points,
    500 numbers with maximum 5453 instructions => 5 points.

The algorithm should be efficient enough to reach 100%. However the maximum instructions for 
500 numbers are barely inside the limit and it might surpass for a few instructions
in some cases (Tho every try I´ve made so far has been under 5500 instructions).

---
## Tester

In order to run the tester execute this command on your push_swap directory:

`./_thelinkTest/tester.sh 100`

It will execute your program (named push_swap) with 100 different sets of random numbers
and return the highest and lowest number of instructions used and the average instructions needed to sort the stack.
It will return this information for both 100 and 500 numbers. If you want to change the
amount of executions just change number 100 for any number you want.

![Tester example](https://cdn.discordapp.com/attachments/800692244179845150/1159293284322123856/image.png?ex=65307f01&is=651e0a01&hm=8c33b0dbd192a9805f9d8ee72ea81f9f92b6724f46d4df33797c742b94cbdf6f& "Tester example")

---

### Contact

If you have any questions feel free to reach out!

* **Github:** [TheLink-42](https://github.com/TheLink-42)
* **Slack:** [jbaeza-c](https://42born2code.slack.com/team/U05RS80818A)

---

Check other projects [here](https://github.com/TheLink-42/42-Journey)


