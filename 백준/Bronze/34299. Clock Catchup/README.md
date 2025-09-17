# [Bronze III] Clock Catchup - 34299 

[문제 링크](https://www.acmicpc.net/problem/34299) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

수학, 구현, 사칙연산

### 제출 일자

2025년 9월 18일 05:35:06

### 문제 설명

<p>Oh no! The clocks in Marquez Hall froze at the start of  a power outage, which has now been remedied. The repair crew needs your help figuring out how to restore the current time.</p>

<p>Each analog clock has three arms: seconds, minutes, and hours. Given the time of the power outage and the time the power was restored (the current time), how many times does each arm of the clock have to move <em>onto</em> the $12$ to get to current time from the time where the clock froze due to the power outage?</p>

<p>Note: we are explicitly asking for how many times the arm moves <em>onto</em> the $12$. If the arm starts at $12$ and moves off of it, that does not count as <em>moving onto</em> the $12$.</p>

<p>If you're unfamiliar with analog clocks, check out this interactive site: <a href="https://toytheater.com/clock/">https://toytheater.com/clock/</a>.</p>

### 입력 

 <p>The input will consist of two newline-separated $24$-hour time strings representing the start of the power outage, and the current time (the time at which the power was restored), respectively.</p>

<p>Both times are in the format <code>HH:MM:SS</code> where <code>HH</code> is the hour, <code>MM</code> is the minute, and <code>SS</code> is the second. All times are guaranteed to be valid, and leading zeros will be present for single-digit hours, minutes, and seconds.</p>

<p>You are guaranteed that the hour will be in the range $[00, 23]$, the minute will be in the range $[00, 59]$, and the second will be in the range [$00, 59$].</p>

<p>Note that the minimum valid time is <code>00:00:00</code>, and the maximum valid time is <code>23:59:59</code>. The first time (the time of the power outage) is guaranteed to be <em>before</em> the second time (the time of power restoration). Both times are guaranteed to be within the same calendar day.</p>

### 출력 

 <p>Output three space-separated integers on a single line, representing how many times the hour arm, minute arm, and second arm moves onto the $12$, respectively, to get to the current time from the time where the clock froze due to the power outage.</p>

