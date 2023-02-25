// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
   for (uint64_t i = 2; i < value; i++){
       if ((value % i) == 0){
              return false;
       }
   }
   return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t nowValue = 0;
  int a = 1;
  while (value != nowValue){
    a++;
    if (checkPrime(a) == true){
       nowValue++;
    }
  }
  return a;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
}
