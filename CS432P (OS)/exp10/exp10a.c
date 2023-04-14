// Experiment No: 10a–Memory Management using LRU
#include <stdio.h>

#define MAX_FRAMES 10
#define MAX_REF_STR_LEN 100

void lru(int frames[], int time[], int num_frames, int ref_str[], int ref_str_len) {
    int i, j, min_time, min_time_idx, page_faults = 0;

    for (i = 0; i < num_frames; i++) {
        frames[i] = -1;
        time[i] = 0;
    }

    for (i = 0; i < ref_str_len; i++) {
        int page = ref_str[i];
        int found = 0;

        for (j = 0; j < num_frames; j++) {
            if (frames[j] == page) {
                time[j] = i + 1;
                found = 1;
                break;
            }
        }

        if (!found) {
            min_time = time[0];
            min_time_idx = 0;

            for (j = 1; j < num_frames; j++) {
                if (time[j] < min_time) {
                    min_time = time[j];
                    min_time_idx = j;
                }
            }

            frames[min_time_idx] = page;
            time[min_time_idx] = i + 1;
            page_faults++;
        }

        printf("\n");

        for (j = 0; j < num_frames; j++) {
            if (frames[j] == -1) {
                printf("- ");
            } else {
                printf("%d ", frames[j]);
            }
        }
    }

    printf("\n\nTotal page faults: %d\n", page_faults);
}

int main() {
    int num_frames, ref_str_len, i;
    int frames[MAX_FRAMES], time[MAX_FRAMES], ref_str[MAX_REF_STR_LEN];

    printf("Memory Management Scheme—LRU by 2162014\n");

    printf("Enter the number of frames (max %d): ", MAX_FRAMES);
    scanf("%d", &num_frames);

    printf("Enter the length of the reference string (max %d): ", MAX_REF_STR_LEN);
    scanf("%d", &ref_str_len);

    printf("Enter the reference string (space separated): ");

    for (i = 0; i < ref_str_len; i++) {
        scanf("%d", &ref_str[i]);
    }

    lru(frames, time, num_frames, ref_str, ref_str_len);

    return 0;
}
