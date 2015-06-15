https://algospot.com/judge/problem/read/CONVERT

�ؼ�

������ ��ȯ�Ѵ�.

����
1.0000	kg	2.2046	lb
0.4536	kg	1.0000	lb
����
1.0000	l	0.2642	g
3.7854	l	1.0000	g

���Ǵ� ������ kg(ų�α׷�), lb(�Ŀ��), l(����), g(����)�̴�.

�� ��� �տ� �׽�Ʈ ���̽� ��ȣ�� ���δ�.

����

Conversion between the metric and English measurement systems is relatively simple.Often, it
involves either multiplying or dividing by a constant.You must write a program that converts between the following units :

Type	Metric				English equivalent
Weight	1.000 kilogram		2.2046 pounds
		0.4536 kilograms	1.0000 pound
Volume	1.000 liter			0.2642 gallons
		3.7854 liters		1.000 gallon

�Է�

The first line of input contains a single integer N, (1 �� N �� 1000) which is the number of datasets that follow.
Each dataset consists of a single line of input containing a floating point(double precision) number, a space and the unit specification for the measurement to be converted.The unit specification is one of kg, lb, l, or g referring to kilograms, pounds, liters and gallons respectively.

���

For each dataset, you should generate one line of output with the following values : The dataset
number as a decimal integer(start counting at one), a space, and the appropriately converted value rounded to 4 decimal places, a space and the unit specification for the converted value.

���� �Է�

5
1 kg
2 l
7 lb
3.5 g
0 l
���� ���

1 2.2046 lb
2 0.5284 g
3 3.1752 kg
4 13.2489 l
5 0.0000 g