import matplotlib.pyplot as plt

# data for the graph
block_sizes = [2, 4, 8, 16, 32]
miss_ratios = [0.8, 0.8, 0.6, 0.5, 0.2]

# plot the graph
plt.plot(block_sizes, miss_ratios, marker='o')

# add labels and title
plt.xlabel('block Size')
plt.ylabel('Miss Ratio')
plt.title('Effect of block Size on Cache Performance')

# add annotations for each data point
for i in range(len(block_sizes)):
    plt.annotate(f"({block_sizes[i]}, {miss_ratios[i]})", (block_sizes[i], miss_ratios[i]))

# show the graph
plt.show()
