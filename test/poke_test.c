
#include "seatest.h"

void test_damage_calc(void);

void battle_fixture(void){
	test_fixture_start();
	test_damage_calc();
	test_fixture_end();
}

void move_fixture(){
	test_fixture_start();
	test_fixture_end();
}

void data_fixture(){
	test_fixture_start();
	test_fixture_end();
}

void calculation_fixture(){
	test_fixture_start();
	test_fixture_end();
}

void all_tests(){
	battle_fixture();
}

int main(){
	run_tests(all_tests);
	return 0;
}
