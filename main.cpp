#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define FAST cin.tie(NULL);cout.tie(NULL); ios::sync_with_stdio(false)
#define fs first
#define sc second
using namespace std;

#define CUR_WAVE             (170258)

#define CASTLE_LEVEL         (18507)
#define HERO_ALLICE          (12042)
#define HERO_DORO            (13479)
#define HERO_SOLAR           (10200) 
#define HERO_FLAME_OAK       (10000)
#define HERO_LISA            (7500)
#define HERO_GOBLIN          (11000)
#define HERO_WORM            (6128)

#define CUR_MONEY            (4873)*(1ULL*M)
#define CUR_COLONY           (520)

#define GOLD_PACKAGE         (CUR_WAVE*1ULL*6.5*M)
#define NUM_PACKAGE          (0)

#define M        		         (1000000)
#define U        		         (100000000)

// https://cafe.naver.com/qkdnstmqhfzkvp/74942

// F
ll getHeroCost(ll current_level, ll level1_price = 7500){
	if (current_level <= 0) {
		return 0;
	}
	if (current_level == 1) {
		return level1_price;
	}
	if (current_level < 200) {
		return ((current_level + 20) / 20) * current_level * 250;
	}
	if (current_level < 5001) {
		return current_level * 3000;
	}
	if (current_level < 10000) {
		return current_level * 4000;
	}
	return current_level * 5000;
}
// F
ll accumulateTownArcherCost(ll level) {
  ll result = 0;
  if (level < 22) {
    result = 75 + (50 * (level - 1) * level) / 2;
  } else if (level < 32) {
    result = 10575 + ((level - 21) * (2000 + (level - 20) * 100)) / 2;
  } else if (level < 37) {
    result = 26075 + ((level - 31) * (4000 + (level - 30) * 200)) / 2;
  } else if (level < 41) {
    result = 39075 + ((level - 36) * (6000 + (level - 35) * 250)) / 2;
  } else if (level < 46) {
    result = 53575 + ((level - 40) * (8000 + (level - 39) * 300)) / 2;
  } else if (level < 51) {
    result = 78075 + ((level - 45) * (11000 + (level - 44) * 400)) / 2;
  } else if (level < 54) {
    result = 111575 + ((level - 50) * (15000 + (level - 49) * 500)) / 2;
  } else {
    result = 137075 + ((level - 53) * (18000 + (level - 52) * 1000)) / 2;
  }
  return floor(result);
}
// F
ll accumulateCastleCost(ll level){
  ll result = 0;
  if (level < 4) {
    result = 1000;
  } else if (level < 17) {
    result = 950 + ((level - 3) * (1000 + (level - 2) * 250)) / 2;
  } else if (level < 30) {
    result = 34450 + ((level - 17) * (8500 + (level - 16) * 750)) / 2;
  } else if (level < 60) {
    result = 143950 + ((level - 29) * (26200 + (level - 28) * 1000)) / 2;
  } else if (level < 1000) {
    result = 1024200 + ((level - 58) * (18000 + (level - 57) * 3350)) / 2;
  } else {
    result =
      1480836700 + ((level - 999) * (6087000 + (level - 998) * 2500)) / 2;
  }
  return floor(result);
}
// F
ll accumulateHeroCost(ll level) {
  ll result = 0;
	for(int i = 1 ; i <= level ; i ++) result += getHeroCost(i);
	return result;
}

ll accumulateGoldIncome(ll wave) {
	ll waveIncome = (wave * (wave + 1) / 2) * 300;
	ll colonyIncome = 1364504 * wave * 5;
  	return waveIncome + colonyIncome;
}

ll getTotalIncome(const ll wave){
  	ll colonyIncome = 1364504 * wave * 5;
	return accumulateGoldIncome(wave) + colonyIncome;
}

ll getWeight(ll wave){
    return accumulateGoldIncome(wave) * ((6 - log10(wave) > 1) ? (6 - log10(wave)) : 1);
}

ll totalCost(int buyNum){
	ll totalHeroCost = accumulateHeroCost(HERO_DORO) +
					   accumulateHeroCost(HERO_ALLICE) +
					   accumulateHeroCost(HERO_SOLAR) +
					   accumulateHeroCost(HERO_FLAME_OAK) +
					   accumulateHeroCost(HERO_LISA) +
					   accumulateHeroCost(HERO_GOBLIN) +
					   accumulateHeroCost(HERO_WORM);
	return totalHeroCost + accumulateCastleCost(CASTLE_LEVEL) + CUR_MONEY + GOLD_PACKAGE*buyNum;
}

int main()
{
  printf("Income from WAVE : %llu억(%lluM)\n", getTotalIncome(CUR_WAVE) / U, getTotalIncome(CUR_WAVE) / M);
  printf("Musik ratio : %.5Lf\n", (double)CUR_COLONY / CUR_WAVE);
  printf("total cost : %llu억(%lluM)\n", totalCost(NUM_PACKAGE) / U, totalCost(NUM_PACKAGE) / M);
  printf("package %% : %.3Lf%%\n", GOLD_PACKAGE * 100 / totalCost(0));

  double growCastleIndex = (double)totalCost(NUM_PACKAGE) * 100 / getWeight(CUR_WAVE);
  printf("Ratio of grow castle : %.3Lf points\n", growCastleIndex);

  for(int i = 1 ; i <= 10 ; i++){
    printf("%d buy -> %.3Lf points\n", i, (double)totalCost(i) * 100 / getWeight(CUR_WAVE));
  }
  
  for(int i = 1 ; i <= 10 ; i++){
    printf("%d waves -> %.3Lf points\n", i * 5000, (double)totalCost(1) * 100 / getWeight(CUR_WAVE + i * 5000));
  }

}