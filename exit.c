void signal_callback_handler(int signum) {
        printf("         TERMINATED         \n");
        setBufferedInput(true);
        printf("\033[?25h\033[m");
        exit(signum);
}

int main(int argc, char *argv[]) {
	// register signal handler for when ctrl-c is pressed
        signal(SIGINT, signal_callback_handler);
	return EXIT_SUCCESS;
}
