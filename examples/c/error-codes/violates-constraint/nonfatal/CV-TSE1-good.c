// Copyright (c) 2015-2018 Runtime Verification, Inc. (RV-Match team). All Rights Reserved.

struct s {
	int x;
	int y;
};

int main(void){
	struct s s0 = {0};
	return s0.x;
}
