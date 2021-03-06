## 록 페스티벌 문제

해당 문제는 캐시를 사용해 문제를 풀이했습니다.

공연장은 연속된 날짜 순으로 공연할 팀 수 이상의 날을 빌려야 합니다.

그러므로 주어진 팀 수를 시작으로 주어진 날짜 모두를 빌릴 때까지의 최소 평균 값을 구하면 

문제를 해결할 수 있습니다.

단, 여기서 비교할 때마다 연속된 날짜의 합, 평균을 구할 경우 시간이 오래걸릴 수 있습니다.

각 날자에 대한 누적된 합 값을 캐시(Cache) 배열로 저장한 뒤,  빌리고자 하는 마지막 날의 합 값에서

빌리고자 하는 첫 날의 이전 날에 합 값을 빼면 빌리고자하는 날들의 합 값을 구할 수 있게 됩니다.

이 과정을 통해서 연속된 날들의 평균 값을 쉽게 구할 수 있게 됩니다.
