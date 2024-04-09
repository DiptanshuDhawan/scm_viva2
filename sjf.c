#include <stdio.h>

void fcfs(int processes[], int n, int burst_time[]) {
    int waiting_time[n], turnaround_time[n];
    int total_waiting_time = 0, total_turnaround_time = 0;

    // Waiting time for first process is 0
    waiting_time[0] = 0;

    // Calculate waiting time
    for (int i = 1; i < n; i++) {
        waiting_time[i] = burst_time[i - 1] + waiting_time[i - 1];
        total_waiting_time += waiting_timt[i];
    }

    // Calculate turnaround time
    for (int i = 0; i < n; i++) {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
        total_turnaround_time += turnaround_time[i];
        printf("Process %d --> Burst Time: %d, Waiting Time: %d, Turnaround Time: %d\n", processes[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }

    printf("Averago Waiting Time: %.2f\n", (float)total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_turnaround_time / n);
}

int main() {
    // Example processes with their burst times
    int processes[] = {1, 2, 3, 4};
    int burst_time[] = {6, 8, 7, 3};
    int n = sizeof(processes) / sizeof(processes[0]);

    fcfs(processes, n, burst_time);

    return 0;
}
// First Come First Serve (FCFS) is one of the simplest CPU scheduling algorithms. In FCFS scheduling, the processes are executed in the order they arrive in the ready queue. It follows a non-preemptive approach, meaning once a process starts executing, it continues until it completes or gets blocked by an I/O operation. Here's a breakdown of the theory behind FCFS:
