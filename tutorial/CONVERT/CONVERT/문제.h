https://algospot.com/judge/problem/read/CONVERT

해석

단위를 변환한다.

무게
1.0000	kg	2.2046	lb
0.4536	kg	1.0000	lb
부피
1.0000	l	0.2642	g
3.7854	l	1.0000	g

사용되는 단위는 kg(킬로그램), lb(파운드), l(리터), g(갤런)이다.

※ 출력 앞에 테스트 케이스 번호를 붙인다.

문제

Conversion between the metric and English measurement systems is relatively simple.Often, it
involves either multiplying or dividing by a constant.You must write a program that converts between the following units :

Type	Metric				English equivalent
Weight	1.000 kilogram		2.2046 pounds
		0.4536 kilograms	1.0000 pound
Volume	1.000 liter			0.2642 gallons
		3.7854 liters		1.000 gallon

입력

The first line of input contains a single integer N, (1 ≤ N ≤ 1000) which is the number of datasets that follow.
Each dataset consists of a single line of input containing a floating point(double precision) number, a space and the unit specification for the measurement to be converted.The unit specification is one of kg, lb, l, or g referring to kilograms, pounds, liters and gallons respectively.

출력

For each dataset, you should generate one line of output with the following values : The dataset
number as a decimal integer(start counting at one), a space, and the appropriately converted value rounded to 4 decimal places, a space and the unit specification for the converted value.

예제 입력

5
1 kg
2 l
7 lb
3.5 g
0 l
예제 출력

1 2.2046 lb
2 0.5284 g
3 3.1752 kg
4 13.2489 l
5 0.0000 g