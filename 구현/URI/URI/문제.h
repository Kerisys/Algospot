﻿https://algospot.com/judge/problem/read/URI

해석

댓글에서 %25를 주의하라길레 %2525 -> %25 -> % 이 되는줄 알았는데

그냥 %를 프린트할때 %%로 써야하는걸 말하는거였다. ㄱ-

|	입력		|	출력		| 
|	%2525	|	%25		|	% 로 나와야되는줄 알았다가 오답
|	%2%2d	|	%2%2d	|	%2까지만 있을때 처리안해서 오답

위에 두 케이스 조심.


문제

URI(Uniform Resource Identifier) is a compact string used to identify or name resources on the Internet.Some examples of URI are below :

	http ://icpc.baylor.edu.cn/
	mailto : foo@bar.org
	ftp ://127.0.0.1/pub/linux
	readme.txt

When transmitting *URI*s through the Internet, we escape some special characters in *URI*s with percent - encoding.Percent - encoding encodes an ASCII character into a percent sign("%") followed by a two - digit Hexadecimal representation of the ASCII number.The other characters are not touched in the encoding process.The following table shows the special characters and their corresponding encodings :

Special Character	Encoded String
	" "					% 20
	"!"					% 21
	"$"					% 24
	"%"					% 25
	"("					% 28
	")"					% 29
	"*"					% 2a

Note that the quotes are for clarity only.

Write a program which reverses this process.

입력

The first line of the input file will contain the number of test cases C(1≤C≤100).The following C lines will each contain a test case — which is the percent - encoded URI.Their length will be at most 80.

출력

Print one line for each test cases — the decoded original URI.

예제 입력

2
Happy%20Joy%20Joy%21
http://algospot.com/%2a

예제 출력

Happy Joy Joy!
http://algospot.com/*