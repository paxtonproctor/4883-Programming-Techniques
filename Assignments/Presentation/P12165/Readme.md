# CMPS-4883-101 <br>Topics in Computer Science: Programming Techniques <br> UVa Online Judge Problem #12165: Triangle Hazard
## By: Paxton Proctor ([@paxtonproctor](https://github.com/paxtonproctor/))<br>Date: 11/08/22
<br/>

### Problem summary:
##### [[Full problem statement here](https://onlinejudge.org/external/121/12165.pdf)]
Given number of triangles N. Given 3 coordinates for a inner triangle. These points are P,R,Q. We are also given 6 side lengths for the outer triangle. These side lengths are labled as m1,m2,m3,m4,m5,m6. The goal is to find the outer triangles points A,B,C. <sup>1</sup> The following restrictions apply: N (0 < N < 25001), (0 ≤ Px, Py, Qx, Qy, Rx, Ry ≤ 10000), and six positive integers m1, m2, m3, m4, m5, m6
(m1 < m2, m3 < m4 and m5 < m6).

### The Goal:
Find the coordinates of the outer triangle.

### Explanation:
After reading the problem about 50 times it is clear that we'll need to use some sort of geometry theorem in order to find the points. Since I'm not a math major and my geometry is awful I had to get help from three math professors. Professor Slavens, Professor Mitchell, Some other Professor that I forgot the name of(sorry...), and professor Griffin. Unfortunately, we could only come up with one idea of how to solve this problem here are is the attempt.

### Attempt 1 Example Brute Forcing:
### Image:
> ![image](https://user-images.githubusercontent.com/61135201/200406845-d9bc6c86-df9d-466f-b97c-98a83a490c62.png)
<br>

### How To Solve:
So with the help of the Professors, the goal was pretty much to take the inner lines and create parallel versions of them with the help of each other. This probably makes no sense but I'll probably be attempting to explain it in class so please ignore this.

### Working it out by hand here are the equations that I attempted to use:


### Simple Psuedocode for the Solution
```python


# no. of test cases
T = input()


