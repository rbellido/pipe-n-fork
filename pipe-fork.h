#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string>
#include <pthread.h>
#include <stdio.h>
#include <signal.h>

// Main functions //
void input(int outfd[2], int in_transfd[2]);
void output(int outfd[2], int trans_outfd[2]);
void translate(int in_transfd[2], int trans_outfd[2]);

// Utility functions //
void terminate(pid_t childpid);
void fatal(std::string err_msg);
void* readfromtranslate(void *translatepipe);
static void term_sig_handler(int signo);
