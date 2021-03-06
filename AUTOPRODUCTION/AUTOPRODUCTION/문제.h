https://algospot.com/judge/problem/read/AUTOPRODUCTION

해석

입력
T // 테스트케이스
N // 재료의 가짓수 N(1≤N≤10)
R1 C1	// 제작비용(1≤Ri≤1, 000) 칸의수Ci(1≤Ci≤10) 
A1[0] A1[1] ... C[1][C1-1]	// 각 칸의 재료수 (1≤ An[Cn-1]≤1, 000)
Rn Cn
An[0] An[1] ... An[Cn - 1]
10칸으로 제작할 수 있는 최대치를 구해야함.
기본 1칸씩 N칸~10칸까지 선택가능. 고로 10-N칸에서 무엇을 고르느냐가 중요하다.
재료별 현재 제작가능한 물품에 따라 오름차순으로 정렬한뒤. 가장 앞에있는( 가장 부족한 ) 물품을 한칸더 고른다.

문제

M 게임에는 여러 재료 아이템들을 활용하여 새로운 아이템을 만들어 내는 기능이 구현되어 있다.한 개의 생산물을 만들기 위해서는 어떤 재료 아이템이 각각 몇 개씩 필요한 지 미리 정의되어 있고 알려져 있다.이를테면 철괴를 만들기 위해서는 철광석 조각이 5개 필요하다던지, 나무판 3개와 일반 옷감 3개를 사용하여 스탠딩 램프를 만들 수 있는 식이다.한편으로 각 재료 아이템은 플레이어가 가진 가방의 각 칸에 보관되는데, 한 칸에 일정 수량씩 묶여 있는 식이다.예를 들어, 철광석 조각이 세 칸에 각각 20, 18, 13 개씩 있을 수 있다.

이 게임에서 수 년 전까지만 하더라도 플레이어는 아이템을 여러 개 만들기 위해서 한 개의 아이템을 만들 때마다 가방에서 알맞은 재료가 들어 있는 각 칸을 지정하여 생산을 시도해야 했다.그러나 수백 개씩 생산해야 하는 일이 흔했기 때문에 사람이 할 필요가 없는 그저 무의미한 반복 작업일 뿐이었다.

그러나 "자동 생산" 이라는 기능이 도입되면서 많은 것이 달라졌다.이 기능을 사용하면 가방의 칸들 중에서 생산에 필요한 재료인 것들을 모두 합쳐 최대 10칸 자동으로 선택하여 주고, 그 선택된 재료들을 가지고 재료가 충분한 동안 계속해서 한 개씩 생산하기를 반복한다.예를 들어 스탠딩 램프를 "자동 생산" 하면 나무판과 일반 옷감이 보관된 칸들이 합쳐서 10칸 이내로 자동으로 선택된 뒤 선택된 칸들의 나무판과 일반 옷감의 수를 모두 합쳐 각각 3개 이상일 동안 계속해서 생산을 반복하게 되는 것이다.당연하게도, 자동 생산 알고리즘이 어떤 칸을 선택하느냐에 따라서 생산할 수 있는 갯수가 달라질 것이다.

어떤 아이템을 생산하기 위해 필요한 각 재료의 갯수와, 플레이어의 가방에 각 재료가 보관되어 있는 칸의 아이템 갯수가 주어질 때 자동 생산 기능을 한 차례 작동시켜 만들어낼 수 있는 최대 생산물 갯수는 몇 개인지 알아내는 프로그램을 작성하라.

입력

입력의 첫 줄에는 테스트 케이스의 수 T 가 주어진다.

각 테스트 케이스의 첫 줄에는 생산을 위해 필요한 재료의 가짓수 N(1≤N≤10) 이 주어진다.
다음 2N 줄에 걸쳐 두 줄씩 묶어 각 재료에 대한 정보가 주어진다.각 묶음의 첫 줄에는 생산을 위해 필요한 그 재료의 갯수 Ri(1≤Ri≤1, 000)와 가방에 있는 그 재료 칸의 수 Ci(1≤Ci≤10) 가 공백으로 구분되어 주어진다.두 번째 줄에는 가방의 각 칸에 들어 있는 재료의 개수를 나타내는 Ci 개의 정수가 공백으로 구분되어 주어진다.각 칸에 들어 있는 재료의 수는 1 이상 1, 000 이하이다.

출력

각 테스트 케이스에 대해 한 줄에 하나씩 자동 생산시 최대 생산물의 개수를 출력한다.

예제 입력

2
1
5 3
20 18 13
2
3 6
1 3 3 4 4 4
3 6
2 3 4 7 8 10
예제 출력

10
6


2
2
2 6
1 1 1 1 1 1
2 6
1 1 1 1 1 1
2
3 6
2 3 3 3 4 4
3 6
1 3 3 4 4 4
2
1 5
1 1 1 1 1
2 5
1 2 3 4 5

2
5
5