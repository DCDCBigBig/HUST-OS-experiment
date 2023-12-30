#ifndef _SCHED_H_
#define _SCHED_H_

#include "process.h"

//length of a time slice, in number of ticks
#define TIME_SLICE_LEN  2

void insert_to_ready_queue( process* proc );
void schedule();
void clear_waiting_state(int pid);
void add_waiting_state(int pa_pid, int pid);
void handle_waiting_state(int pid);

#endif
