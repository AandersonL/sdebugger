#pragma once

#include <sys/types.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <stdint.h>
#include <stdlib.h>




#define WAIT 1
#define NOWAIT 0

uint64_t peek_data(pid_t pid, uint64_t addr);
//uint64_t poke_data(pid_t pid, uint64_t addr);

void single_step_proc(pid_t pid, int wait);
void continue_proc(pid_t pid, int wait);
