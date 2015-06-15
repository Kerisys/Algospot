https://algospot.com/judge/problem/read/MISPELL

해석

M번째 문자를 제거한 문자를 출력한다.

앞에는 데이터셋의 순서를 출력한다(이거빼먹어서 3번틀림... ㅜㅜ)

숫자는 1부터 센다. (0부터 아님)

문제

Misspelling is an art form that students seem to excel at.Write a program that removes the nth
character from an input string.

입력

The first line of input contains a single integer N, (1 ≤ N ≤ 1000) which is the number of datasets that follow.
Each dataset consists of a single line of input containing M, a space, and a single word made up of uppercase letters only.M will be less than or equal to the length of the word.The length of the word is guaranteed to be less than or equal to 80.

출력

For each dataset, you should generate one line of output with the following values : The dataset
number as a decimal integer(start counting at one), a space, and the misspelled word.The
misspelled word is the input word with the indicated character deleted.

예제 입력

4
4 MISSPELL
1 PROGRAMMING
7 CONTEST
3 BALLOON
예제 출력

1 MISPELL
2 ROGRAMMING
3 CONTES
4 BALOON