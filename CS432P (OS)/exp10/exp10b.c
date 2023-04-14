// Experiment No: 10b–Memory Management using Optimal
#include <stdio.h>
#include <stdlib.h>

typedef struct PageFrame {
    int page;
    int future_occurrence; 0
} PageFrame;

int find_optimal_page(PageFrame page_frames[], int num_frames) {
    int index = -1, max_future_occurrence = -1;
    for (int i = 0; i < num_frames; i++) {
        int future_occurrence = page_frames[i].future_occurrence;
        if (future_occurrence == -1) {
            return i;
        } else if (future_occurrence > max_future_occurrence) {
            max_future_occurrence = future_occurrence;
            index = i;
        }
    }
    return index;
}

int simulate_policy(PageFrame page_frames[], int num_frames, int pages[], int num_pages, char *policy_name, int *num_page_faults, int *num_page_hits) {
    *num_page_faults = 0;
    *num_page_hits = 0;

    for (int i = 0; i < num_pages; i++) {
        int page = pages[i];
        int index = -1;
        for (int j = 0; j < num_frames; j++) {
            if (page_frames[j].page == page) {
                page_frames[j].future_occurrence = i;
                (*num_page_hits)++;
                index = j;
                break;
            } else if (page_frames[j].page == -1) {
                page_frames[j].page = page;
                page_frames[j].future_occurrence = i;
                (*num_page_faults)++;
                index = j;
                break;
            }
        }
        if (index == -1) {
            index = find_optimal_page(page_frames, num_frames);
            page_frames[index].page = page;
            page_frames[index].future_occurrence = i;
            (*num_page_faults)++;
        }
    }

    printf("\nPolicy: %s\n", policy_name);
    printf("Page frames: ");
    for (int i = 0; i < num_frames; i++) {
        printf("%d ", page_frames[i].page);
    }
    printf("\nNumber of page faults: %d\n", *num_page_faults);
    printf("Number of page hits: %d\n\n", *num_page_hits);

    return 0;
}

int main() {
    int num_frames, num_pages;

    printf("Memory Management Scheme—Optimal by 2162014\n");

    printf("Enter the number of page frames:");
    scanf("%d", &num_frames);
    printf("Enter the number of pages:");
    scanf("%d", &num_pages);
    if (num_frames <= 0 || num_pages <= 0) {
        printf("Error: invalid input values\n");
        return 1;
    }

    int *pages = (int *) malloc(num_pages * sizeof(int));
    for (int i = 0; i < num_pages; i++) {
        printf("Enter page %d: ", i + 1);
        scanf("%d", &pages[i]);
    }

    PageFrame *page_frames = (PageFrame *) malloc(num_frames * sizeof(PageFrame));
    for (int i = 0; i < num_frames; i++) {
        page_frames[i].page = -1;
        page_frames[i].future_occurrence = -1;
    }

    int num_page_faults, num_page_hits;
    simulate_policy(page_frames, num_frames, pages, num_pages, "Optimal", &num_page_faults, &num_page_hits);

    free(page_frames);

    return 0;
}
