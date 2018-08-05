
# 총 로또의 합이 100~170 사이인 값만 배출
# lotto_num 100 ~ 170
import random

def WinLotto():
    for i in range(int(input("구매하실 매수를 입력하세요:"))):

# 로또 6개의 숫자의 합이 100~170 사이일 때만 번호를 출력
        while True:
            LottoNum = random.sample(range(1,46), 6)
            Sum = 0
            for i in LottoNum:
                Sum += i
            if 100 <= Sum <= 170:
                print(LottoNum)
            break
WinLotto()