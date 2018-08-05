# 작성중
# lotto_num 100 ~ 170
# lotto_num 4 +1
import random

def WinLotto():
    for i in range(int(input("구매하실 매수를 입력하세요"))):


# 1차 조건

        while True:
            LottoNum = sorted(random.sample(range(1,46), 6))
            Sum = 0
            for i in LottoNum:
                Sum += i
            if 100 <= Sum <= 170:
# 4번째 숫자에 +1 한 숫자가 포함되면 숫자 다시 뽑기
                for i in LottoNum:
                    if LottoNum[3]+1== LottoNum[0:5]:
                        return True
                print(LottoNum)
            break

WinLotto()