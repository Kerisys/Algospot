https://algospot.com/judge/problem/read/HAMMINGCODE

해석

이게 반복해서 0이 될때까지 구하는건지 한번만 구하는 건지는 확실히 모르겠다.


Hamming(7, 4)는 4bit의 원본 데이터에 3bit의 패리티비트를 추가해 7bit 데이터로 전송한다.

인코딩

원본데이터 4비트는 각각 3, 5, 6, 7번째에 들어간다.
1번째 비트는 3, 5, 7번째 비트와 XOR 하여 0이 되는 비트
2번쨰 비트는 3, 6, 7번째 비트와 XOR 하여 0이 되는 비트
4번째 비트는 5, 6, 7번째 비트와 XOR 하여 0이 되는 비트
(결국 나머지 3개를 XOR 한 결과값이란 소리) 로 이루어 진다.

디코딩
에러는 최대 1비트만 발생한다고 가정한다.
에러비트의 자릿수는 다음과 같이 구한다.
1. 1, 3, 5, 7번쨰 비트를 XOR 한값 = a(예제에서는 1)
2. 2, 3, 6, 7번째 비트를 XOR 한값 = b(예제에서는 1)
3. 4, 5, 6, 7번째 비트를 XOR 한값 = c(예제에서는 0)
역순으로 cba(2진수) 자리의 비트가 에러비트의 자릿수. 0이면 에러가 없다.

예제에서는 011(2진수) = 3(10진수) 번째가 에러.

이제 해당 자리의 비트를 바꿔주면 원본 데이터를 구할수 있다.



문제

Jaeha is writing an operating system for his toys, so they will be able to communicate with each other.However, the wireless chips in his toys are very cheap, so they are prone to transmission errors.Quite frequently, Jaeha is seeing some noises in the transmitted data : some bits get flipped during the transmission process.Jaeha wants to implement Hamming Code to remedy this situation.

The following is a brief description of how Hamming Code works.

Hamming(7, 4) code encodes 4 bits of data into a 7 - bit code, by adding 3 bits of parity data.The parity data ensures that the receiver will be able to decode the correct data even when one of the 7 bits get flipped during transmission.The encoding process is as follows.

1. First, we number the bits in the encoded message from 1 to 7.
2. Next, we assign the data to be transmitted to the 3rd, 5th, 6th, 7th bit of the encoded data.For example, if we were to transmit data 1011, the encoded message will look like _ _ 1 _ 0 1 1, leaving 3 bits to be filled in.
3. Next, the remaining bits are filled by parity data, from the first bit, as follows.
	a. The 1st bit is filled so that the XOR of 1st, 3rd, 5th and 7th bit is 0. In the above example, the XOR of 3rd, 5th and 7th bit is already 0, so the 1st bit must be 0.
	b. The 2nd bit is filled so that the XOR of 2nd, 3rd, 6th and 7th bit is 0. In the above example, the XOR of 3rd, 6th and 7th bit is 1, so the 2nd bit must be 1.
	c. The 4th bit is filled so that the XOR of 4th, 5th, 6th and 7th bit is 0. In the above example, the XOR of 5th, 6th and 7th bit is already 0, so the 4th bit must be 0.
4. After the process, we get the fully encoded message 0 1 1 0 0 1 1.

Position		1	2	3	4	5	6	7
Raw Message				1		0	1	1
Encoded Message	0	1	1	0	0	1	1

Now, let’s talk about the decoding process of Hamming(7, 4) code.To see how the code corrects an isolated error, let’s suppose that the 3rd bit gets flipped incorrectly when the message 0 1 1 0 0 1 1 is transmitted.Therefore, the receiver will receive the following corrupted message instead : 0 1 0 0 0 1 1.
Position			1	2	3	4	5	6	7
Encoded Message		0	1	1	0	0	1	1
Error						x
Corrupted Message	0	1	0	0	0	1	1
The receiver then calculates a 3 - bit integer, called syndrome, as follows.

a. The 1st (lowest)bit is determined as the XOR of 1st, 3rd, 5th and 7th bit.In the above corrupted message, this bit will be 1.
b. The 2nd bit is determined as the XOR of 2nd, 3rd, 6th and 7th bit.In the above corrupted message, this bit will be 1.
c. The 3rd bit is determined as the XOR of 4th, 5th, 6th and 7th bit.In the above corrupted message, this bit will be 0.
Concatenating these three digits, the syndrome will be 011(2) = 3(10): the location of the error bit.

Position		1	2	3	4	5	6	7	XOR
Check 1			0		0		0		1	1
Check 2				1	0			1	1	1
Check 3						0	0	1	1	0
syndrome = 011(2) = 3(10)
Thus the receiver can flip the 3rd bit in the received message.The resulting sequence of 0’s and 1’s will be now correct and we can take the 3rd, 5th, 6th and 7th bit to get the original message : 1 0 1 1.

Position			1	2	3	4	5	6	7
Corrupted Message	0	1	0	0	0	1	1
Indicated Error				x
Corrected Message	0	1	1	0	0	1	1
Decoded Message				1		0	1	1
Note when all bits are transmitted correctly, the syndrome will be 0 and no bit needs to be flipped.

As a smart baby, Jaeha had no problem writing the encoding procedure.However, his parents don’t allow him to use the computer more than 10 minutes a day, because he is only 3 months old.Let’s help Jaeha by implementing the decoding procedure

입력

The input consists of T test cases.The number of test cases T is given in the first line of the input.The next T line each contains a transmitted message in 7 binary digits, starting from the 1st bit.The message will contain at most a single incorrect bit.

출력

For each test case, you must output a single line of four binary digits denoting the decoded message.

예제 입력

2
0100011
1111111
예제 출력

1011
1111

Encoded | Raw
0000000 | 0000
1101001 | 0001
0101010 | 0010
1000011 | 0011
1001100 | 0100
0100101 | 0101
1100110 | 0110
0001111 | 0111
1110000 | 1000
0011001 | 1001
1011010 | 1010
0110011 | 1011
0111100 | 1100
1010101 | 1101
0010110 | 1110
1111111 | 1111